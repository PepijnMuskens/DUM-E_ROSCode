from odrive_uart_class import ODriveUART
import time


odrive1 = ODriveUART("/dev/ttyUSB0")
odrive2 = ODriveUART("/dev/ttyUSB1")

odrive1.clear_errors()
odrive2.clear_errors()

print(f"Odrive 1 serial no: {odrive1.get_serial_number()}")
print(f"Odrive 2 serial no: {odrive2.get_serial_number()}")

odrive1.identify_on()
odrive2.identify_on()
time.sleep(5)

odrive1.identify_off()
odrive2.identify_off()

odrive1.close()
odrive2.close()