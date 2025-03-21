#from tutorial_interfaces.srv import AddThreeInts                            # CHANGE
from arduino_interfaces.srv import SetStepperMotorPositions
import sys
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SetStepperMotorPositions, 'set_steppermotor_positions')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetStepperMotorPositions.Request()                                   # CHANGE

    def send_request(self):
        self.req.base_rotation = int(sys.argv[1]) 
        self.req.rotation = int(sys.argv[2]) 
        self.req.end_rotation = int(sys.argv[3]) 
        self.req.end_angle   = int(sys.argv[4]) 
        self.get_logger().info('request send')
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(
                    'Result of add_three_ints: for %d + %d + %d = %d' %                                # CHANGE
                    (minimal_client.req.base_rotation, minimal_client.req.rotation, minimal_client.req.end_rotation, response.time_to_complete_ms))  # CHANGE
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()