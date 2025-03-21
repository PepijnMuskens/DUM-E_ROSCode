from odrive_uart_class import ODriveUART
import time


odrive1 = ODriveUART("/dev/ttyUSB0")
odrive2 = ODriveUART("/dev/ttyUSB1")

odrive1.clear_errors()
odrive2.clear_errors()

try:
    while True:
        #print("ODrive 1 Voltage:", odrive1.get_bus_voltage())
        #print("ODrive 2 Voltage:", odrive2.get_bus_voltage())
        #print("ODrive 1 Position:", odrive1.get_joint_position())
        #print("ODrive 2 Position:", odrive2.get_joint_position())
        #print("ODrive 1 Velocity:", odrive1.get_joint_velocity())
        #print("ODrive 2 Velocity:", odrive2.get_joint_velocity())
        print("ODrive 1 Current:", odrive1.get_bus_current())
        print("ODrive 2 Current:", odrive2.get_bus_current())
except KeyboardInterrupt:
    print("Exiting...")
finally:
    odrive1.close()
    odrive2.close()