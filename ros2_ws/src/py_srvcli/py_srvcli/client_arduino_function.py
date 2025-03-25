#from tutorial_interfaces.srv import AddThreeInts                            # CHANGE
from arduino_interfaces.msg import SetJointPositions
import sys
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SetJointPositions, 'set_steppermotor_positions')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetJointPositions.Request()                                   # CHANGE

    def send_request(self):
        self.req.Joint_0 = int(sys.argv[1]) 
        self.req.Joint_1 = int(sys.argv[2]) 
        self.req.Joint_2 = int(sys.argv[3]) 
        self.req.Joint_3 = int(sys.argv[4])
        self.req.Joint_4 = int(sys.argv[5]) 
        self.req.Joint_5 = int(sys.argv[6]) 
        self.get_logger().info('request send')
        self.cli.call_async(self.req)


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
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()