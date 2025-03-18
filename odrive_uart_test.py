#!/usr/bin/env python3
import serial
import time


def send_command(ser, command, odrive_name):
    """
    Sends a command to an ODrive and retrieves the response.
    """
    full_command = f"{command}\n"  # ODrive expects newline-terminated commands
    ser.write(full_command.encode())  # Send command
    time.sleep(0.005)  # Short delay to allow response
    
    response = ser.read(ser.in_waiting)  # Read available response
    if response:
        print(f"[{odrive_name}] Response: {response.decode(errors='ignore')}")
    else:
        print(f"[{odrive_name}] No response received.")

def main():
    # Define UART ports (adjust based on your setup)
    uart_port_1 = '/dev/ttyUSB0'  # First ODrive
    uart_port_2 = '/dev/ttyUSB1'  # Second ODrive (may be /dev/ttyAMA1)

    baud_rate = 115200  # Default baud rate for ODrive S1

    try:
        # Open serial connections for both ODrives
        ser1 = serial.Serial(uart_port_1, baud_rate, timeout=1.0)
        ser2 = serial.Serial(uart_port_2, baud_rate, timeout=1.0)
        print(f"Connected to ODrives on {uart_port_1} and {uart_port_2} at {baud_rate} baud.")

        while True:
            command = input("Enter ODrive command (or 'exit' to quit): ")
            if command.lower() == "exit":
                break

            # Send the same command to both ODrives
            send_command(ser1, command, "ODrive 1")
            send_command(ser2, command, "ODrive 2")

    except Exception as e:
        print(f"Error: {e}")
    finally:
        ser1.close()
        ser2.close()
        print("UART connections closed.")

if __name__ == "__main__":
    main()
