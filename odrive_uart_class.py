import serial
import threading

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
    
    def send_command(self, command):
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
    
    def _wait_for_response(self):
        """
        Waits for data to become available from the serial port.
        Returns the data once received.
        """
        while self.ser.in_waiting == 0:  # Wait until there is data to read
            pass
        
        # Once data is available, read the response
        response = self.ser.read(self.ser.in_waiting)
        return response
    
    def get_vbus_voltage(self):
        """
        Requests the bus voltage from the ODrive.
        """
        response = self.send_command("r vbus_voltage")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid voltage response from {self.port}: {response}")
        return None
    
    def get_joint_position(self, axis=0):
        """
        Requests the position estimate of a given axis (0 or 1).
        """
        response = self.send_command("r axis0.encoder.pos_estimate")
        if response:
            try:
                return response
            except ValueError:
                print(f"[ERROR] Invalid position response from {self.port}: {response}")
        return None
    
    def reboot(self):
        """
        Roboot the Odrive
        """
        response = self.send_command("sr")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid position response from {self.port}: {response}")
        return None
    
    
    def close(self):
        """
        Closes the UART connection.
        """
        self.ser.close()
        print(f"[INFO] Connection closed for {self.port}.")

if __name__ == "__main__":

    odrive1 = ODriveUART("/dev/ttyUSB0")
    odrive2 = ODriveUART("/dev/ttyUSB1")
    

    try:
        while True:
            #print("ODrive 1 Voltage:", odrive1.get_vbus_voltage())
            #print("ODrive 2 Voltage:", odrive2.get_vbus_voltage())
            print("ODrive 1 Position:", odrive1.get_joint_position(0))
            print("ODrive 2 Position:", odrive2.get_joint_position(0))
    except KeyboardInterrupt:
        print("Exiting...")
    finally:
        odrive1.close()
        odrive2.close()


