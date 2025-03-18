import serial
import threading
import time

class ODriveUART:
    def __init__(self, port, baud_rate=115200):
        """
        Initializes an ODrive instance using a given UART port.
        """
        self.port = port
        self.baud_rate = baud_rate
        self.ser = serial.Serial(port, baud_rate, timeout=1.0)
        self.lock = threading.Lock()  # Ensure thread safety
        print(f"[INFO] Connected to ODrive on {port} at {baud_rate} baud.")
    
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
    
    def get_vbus_voltage(self): # --> validated
        """
        Requests the bus voltage from the ODrive.
        """
        response = self._send_feedback_command("r vbus_voltage")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid voltage response from {self.port}: {response}")
        return None
    
    def get_joint_position(self): # --> validated
        """
        Requests the position estimate of a given axis (0 or 1).
        """
        response = self._send_feedback_command("r axis0.pos_estimate")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid position response from {self.port}: {response}")
        return None
    
    def get_active_errors(self): # --> validated
        response = self._send_feedback_command("r axis0.active_errors")
        if response:
            try:
                return response
            except ValueError:
                print(f"[ERROR] Invalid error response from {self.port}: {response}")
        return None

    def is_armed(self):
        response = self._send_feedback_command("r axis0.active_errors")
        if response:
            try:
                return bool(response)
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
    
    def clear_errors(self): # --> validated
        """
        Clear all errors in the Odrive
        """
        self._send_command("sc")
        print(f"[INFO] Odrive at {self.port} errors cleared")
        return None
    
    def close(self): # --> validated
        """
        Closes the UART connection.
        """
        self.ser.close()
        print(f"[INFO] Connection closed for {self.port}.")

if __name__ == "__main__":

    odrive1 = ODriveUART("/dev/ttyUSB0")
    odrive2 = ODriveUART("/dev/ttyUSB1")

    test_mode = True

    if test_mode:

        print(f"current arming state 1: {odrive1.is_armed()}")
        print(f"current arming state 2: {odrive2.is_armed()}")

        time.sleep(1)

        print(f"current active errors 1: {odrive1.get_active_errors()}")
        print(f"current active errors 2: {odrive2.get_active_errors()}")

        time.sleep(1)
        
        odrive1.clear_errors()
        odrive2.clear_errors()

        time.sleep(1)

        print(f"current active errors 1: {odrive1.get_active_errors()}")
        print(f"current active errors 2: {odrive2.get_active_errors()}")

        time.sleep(1)

        odrive1.close()
        odrive2.close()


    else:
        try:
            while True:
                #print("ODrive 1 Voltage:", odrive1.get_vbus_voltage())
                #print("ODrive 2 Voltage:", odrive2.get_vbus_voltage())
                print("ODrive 1 Position:", odrive1.get_joint_position())
                print("ODrive 2 Position:", odrive2.get_joint_position())
        except KeyboardInterrupt:
            print("Exiting...")
        finally:
            odrive1.close()
            odrive2.close()
