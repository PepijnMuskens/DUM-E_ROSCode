#from tutorial_interfaces.srv import AddThreeInts                            # CHANGE
from arduino_interfaces.srv import SetJointPositions
import sys
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SetJointPositions, 'set_joint_positions')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetJointPositions.Request()                                   # CHANGE

    def send_request(self):
        self.req.joint0 = int(sys.argv[1]) 
        self.req.joint1 = int(sys.argv[2]) 
        self.req.joint2 = int(sys.argv[3]) 
        self.req.joint3 = int(sys.argv[4])
        self.req.joint4 = int(sys.argv[5]) 
        self.req.joint5 = int(sys.argv[6]) 
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
                    (minimal_client.req.joint0, minimal_client.req.joint1, minimal_client.req.joint2, response.time_to_complete_ms))  # CHANGE
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()