from tutorial_interfaces.srv import AddThreeInts                                                           # CHANGE
from arduino_interfaces.srv import SetStepperMotorPositions
from scripts.arduino_uart_class import AruinoUART
import rclpy
from rclpy.node import Node


arduino = AruinoUART("/dev/ttyUSB0")

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetStepperMotorPositions, 'set_steppermotor_positions', self.set_steppermotor_positions_callback)       # CHANGE

    def set_steppermotor_positions_callback(self, request, response):
        response.time_to_complete_ms = request.base_rotation + request.rotation + request.end_rotation   + request.end_angle                                                # CHANGE
        self.get_logger().info('Incoming request\na: %d b: %d c: %d' % (request.base_rotation, request.rotation, request.end_rotation))  # CHANGE
        #arduino._set_postition_(request.base_rotation,request.rotation, request.end_rotation, request.end_angle)
        
        arduino._set_postition_(request.base_rotation,request.rotation, request.end_rotation, request.end_angle)
        response.time_to_complete_ms = 10
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()



