from tutorial_interfaces.srv import AddThreeInts                                                           # CHANGE
from arduino_interfaces.srv import SetStepperMotorPositions

import rclpy
from rclpy.node import Node

import serial
import threading
import time

class AruinoUART:
    def __init__(self, port, baud_rate=115200):
        """
        Initializes an ODrive instance using a given UART port.
        """
        self.port = port
        self.baud_rate = baud_rate
        self.ser = serial.Serial(port, baud_rate, timeout=1.0)
        self.lock = threading.Lock()  # Ensure thread safety
        print(f"[INFO] Connected to Arduino on {port} at {baud_rate} baud.")

    def _set_postition_(self, baseAngle, rotation, endRotation, endAngle):
        """
        set arduino position  
        """
        print(f"[Set positions]: M BA{baseAngle} R{rotation} ER{endRotation} EA{endAngle}")
        response = self._send_feedback_command(f"M BA{baseAngle} R{rotation} ER{endRotation} EA{endAngle}")
        if response:
            try:
                return (response)
            except ValueError:
                print(f"[ERROR] Invalid error response from {self.port}: {response}")
        return None

    def reboot(self): # --> works with the "self.get_active_errors()" workaround (as a first 'dummy' command)
        """
        Roboot the Odrive
        """
        self._send_command("sr")
        print(f"[INFO] Odrive at {self.port} rebooting")
        return self.get_active_errors()
    
            
    def _send_feedback_command(self, command): # --> validated
        """
        Sends a command to the ODrive and retrieves the response.
        """
        full_command = f"{command}\n"  # ODrive expects newline-terminated commands
        with self.lock:
            self.ser.write(full_command.encode())  # Send command
            response = self._wait_for_response()  # Wait for response from ODrive
            
        if response:
            return response.decode(errors='ignore').strip()
        return None
    
    def _send_command(self, command): # --> validated
        """
        Sends a command to the ODrive and retrieves the response.
        """
        full_command = f"{command}\n"  # ODrive expects newline-terminated commands
        with self.lock:
            self.ser.write(full_command.encode())  # Send command
        return None
    
    def _wait_for_response(self): # --> validated
        """
        Waits for data to become available from the serial port.
        Returns the data once received.
        """
        while self.ser.in_waiting == 0:  # Wait until there is data to read
            pass
        
        # Once data is available, read the response
        response = self.ser.read(self.ser.in_waiting)
        return response
    
    
    def close(self): # --> validated
        """
        Closes the UART connection.
        """
        self.ser.close()
        print(f"[INFO] Connection closed for {self.port}.")

arduino = AruinoUART("/dev/ttyUSB0")

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetStepperMotorPositions, 'set_steppermotor_positions', self.set_steppermotor_positions_callback)       # CHANGE

    def set_steppermotor_positions_callback(self, request, response):
        response.time_to_complete_ms = request.base_rotation + request.rotation + request.end_rotation   + request.end_angle                                                # CHANGE
        self.get_logger().info('Incoming request\na: %d b: %d c: %d' % (request.base_rotation, request.rotation, request.end_rotation))  # CHANGE
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



