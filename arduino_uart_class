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

if __name__ == "__main__":

    arduino1 = AruinoUART("COM7")

    test_mode = True
    time.sleep(5)

    if test_mode:
        while True:
            print(f"motor positions: {arduino1._set_postition_(0,0,90,0)}")

            time.sleep(5)

            print(f"motor position: {arduino1._set_postition_(0,0,0,0)}")

            time.sleep(5)
        
