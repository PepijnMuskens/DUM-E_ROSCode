from arduino_interfaces.msg import SetJointPositions
from scripts.uart_classes import AruinoUART, ODriveUART
import rclpy
from rclpy.node import Node




class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetJointPositions, 'set_steppermotor_positions', self.set_steppermotor_positions)
        self.arduino = AruinoUART("/dev/ttyUSB2")
        self.odrive1 = ODriveUART("/dev/ttyUSB1")
        self.odrive2 = ODriveUART("/dev/ttyUSB0")
    
    def set_steppermotor_positions(self, request, response):
        self.get_logger().info('Incoming request\nbr: %d r: %d er: %d ea: %d' % (request.Joint_0, request.Joint_3, request.Joint_4, request.Joint_5))  # CHANGE
        self.arduino.set_postition(request.Joint_0, request.Joint_3, request.Joint_4, request.Joint_5)
        return
    
    def set_joint_positions(self, request, response):
        self.get_logger().info('Incoming request\nJoint 0: %d \nJoint 1: %d \nJoint 2: %d \nJoint 3: %d \nJoint 4: %d \nJoint 5: %d' % (request.Joint_0, request.Joint_1, request.Joint_2, request.Joint_3, request.Joint_4, request.Joint_5))  # CHANGE
        self.arduino.set_postition(request.Joint_0, request.Joint_3, request.Joint_4, request.Joint_5)
        self.odrive1.move_pos(request.Joint_1/24) # devide by 24 to use degrees (360/15). 
        self.odrive2.move_pos(request.Joint_2/24)
        return

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()



