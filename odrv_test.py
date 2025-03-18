import time
from odrive_uart_class import ODriveUART
import pigpio

# Define GPIO pins for Software Serial
ODRIVE_1_TX = 22  # Pi receives from ODrive 1
ODRIVE_1_RX = 23  # Pi sends to ODrive 1
ODRIVE_2_TX = 17  # Pi receives from ODrive 2
ODRIVE_2_RX = 27  # Pi sends to ODrive 2

# Initialize pigpio
gpio = pigpio.pi()
if not gpio.connected:
    raise RuntimeError("Failed to connect to pigpio daemon")

# Initialize ODrive objects using software serial
odrive1 = ODriveUART(gpio, ODRIVE_1_TX, ODRIVE_1_RX)
odrive2 = ODriveUART(gpio, ODRIVE_2_TX, ODRIVE_2_RX)

try:
    # Read DC bus voltage
    voltage1 = odrive1.get_parameter("vbus_voltage")
    voltage2 = odrive2.get_parameter("vbus_voltage")
    
    # Read motor position
    pos1, _ = odrive1.get_feedback()
    pos2, _ = odrive2.get_feedback()
    
    # Print results
    print(f"ODrive 1 - Bus Voltage: {voltage1}V, Motor Position: {pos1}")
    print(f"ODrive 2 - Bus Voltage: {voltage2}V, Motor Position: {pos2}")

except Exception as e:
    print("Error:", e)

finally:
    # Ensure proper cleanup
    odrive1.close()
    odrive2.close()
    gpio.stop()
    print("Connections closed.")
