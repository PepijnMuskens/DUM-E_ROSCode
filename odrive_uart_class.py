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
    
    def get_bus_voltage(self): # --> validated
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
    
    def get_bus_current(self): # --> validated
        """
        Requests the bus current from the ODrive.
        """
        response = self._send_feedback_command("r ibus")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid voltage response from {self.port}: {response}")
        return None
    
    def get_joint_position(self): # --> validated
        """
        Requests the position estimate.
        """
        response = self._send_feedback_command("r axis0.pos_estimate")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid position response from {self.port}: {response}")
        return None
    
    def get_joint_velocity(self): # --> validated
        """
        Requests the velocity estimate.
        """
        response = self._send_feedback_command("r axis0.vel_estimate")
        if response:
            try:
                return float(response)
            except ValueError:
                print(f"[ERROR] Invalid position response from {self.port}: {response}")
        return None
    
    def get_active_errors(self): # --> validated
        """
        request the active errors on the odrive (axis 0).
        """
        response = self._send_feedback_command("r axis0.active_errors")
        if response:
            try:
                return response
            except ValueError:
                print(f"[ERROR] Invalid error response from {self.port}: {response}")
        return None
    
    def get_serial_number(self): # --> returns a unique number for each drive but different than in the UI
        """
        requests the serial number of the ODrive. returns decimal representation but the
        ODrive UI shows its hexadecimal version.
        """
        response = self._send_feedback_command("r serial_number")
        if response:
            try:
                return int(response)
            except ValueError:
                print(f"[ERROR] Invalid voltage response from {self.port}: {response}")
        return None

    def is_armed(self): # --> validated
        """
        request if ODrive is armed.
        """
        response = self._send_feedback_command("r axis0.is_armed")
        if response:
            try:
                return bool(int(response))
            except ValueError:
                print(f"[ERROR] Invalid error response from {self.port}: {response}")
        return None
    
    def is_homed(self):
        """
        request if ODrive is homed.
        """
        response = self._send_feedback_command("r axis0.is_homed")
        if response:
            try:
                return bool(int(response))
            except ValueError:
                print(f"[ERROR] Invalid error response from {self.port}: {response}")
        return None
    
    def set_joint_position(self, pos): # --> verified
        """
        sets the position estimate to the current position
        """
        self._send_command(f"r axis0.pos_estimate {pos}")
        print(f"[INFO] set pos of Odrive: {self.port} to: {pos}")
        return None
    
    def identify_on(self): # --> verified
        """
        flashes LED of the Odrive (toggle on)
        """
        self._send_command("w identify 1")
        print(f"[INFO] Odrive at {self.port} identifying")
        return None
    
    def identify_off(self): # --> verified
        """
        flashes LED of the Odrive (toggle off)
        """
        self._send_command("w identify 0")
        print(f"[INFO] Odrive at {self.port} not identifying anymore")
        return None

    def move_pos(self, target_pos=0.0): # --> validated
        """
        move to a position setpoint (relative to estimated position).
        """
        self._send_command(f"t 0 {self.get_joint_position() + target_pos}")
        print(f"[INFO] Odrive at {self.port} moving to {self.get_joint_position() + target_pos}")
        return None
    
    def home(self):
        """
        request built in homing sequence of axis 0 of the ODrive 
        (limit swiches need to be connected)
        """
        self._send_command("w axis0.requested_state 11")
        print(f"[INFO] Odrive at {self.port} arming")
        return None
  
    def arm(self): # --> validated
        """
        Arms the motor.
        """
        self._send_command("w axis0.requested_state 8")
        print(f"[INFO] Odrive at {self.port} arming")
        return None
    
    def disarm(self): # --> validated
        """
        Disarms the motor.
        """
        self._send_command("w axis0.requested_state 1")
        print(f"[INFO] Odrive at {self.port} disarming")
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

