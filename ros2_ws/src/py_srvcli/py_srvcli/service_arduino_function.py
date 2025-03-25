from arduino_interfaces.srv import SetJointPositions
from scripts.uart_classes import AruinoUART, ODriveUART
import rclpy
from rclpy.node import Node
import time




class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetJointPositions, 'set_joint_positions', self.set_Joint_positions)
        self.arduino = AruinoUART("/dev/ttyUSB2")
        self.odrive1 = ODriveUART("/dev/ttyUSB1")
        self.odrive2 = ODriveUART("/dev/ttyUSB0")
    
    def set_steppermotor_positions(self, request, response):
        self.get_logger().info('Incoming request\nbr: %d r: %d er: %d ea: %d' % (request.joint0, request.joint3, request.joint4, request.joint5))  # CHANGE
        self.arduino.set_postition(request.joint0, request.joint3, request.joint4, request.joint5)
        response.time_to_complete_ms = 10
        return response
    
    def set_Joint_positions(self, request, response):
        self.get_logger().info('Incoming request\njoint 0: %d \njoint 1: %d \njoint 2: %d \njoint 3: %d \njoint 4: %d \njoint 5: %d' % (request.joint0, request.joint1, request.joint2, request.joint3, request.joint4, request.joint5))  # CHANGE
        self.arduino.set_postition(request.joint0, request.joint3, request.joint4, request.joint5)
        
        
        self.odrive1.arm()  #temporary code!!!!!
        self.odrive2.arm()
        self.odrive1.move_pos(request.joint1/24) # devide by 24 to use degrees (360/15). 
        self.odrive2.move_pos(request.joint2/24)
        time.sleep(4)
        self.odrive1.disarm()
        self.odrive2.disarm() #END of temporary code!!!!!

        response.time_to_complete_ms = 10
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()



