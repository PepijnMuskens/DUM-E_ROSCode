from odrive_uart_class import ODriveUART
import time

odrive1 = ODriveUART("/dev/ttyUSB0")
odrive2 = ODriveUART("/dev/ttyUSB1")

odrive1.clear_errors()
odrive2.clear_errors()

odrive1.arm()

odrive2.home()
print("Odrive2 is homing")
while not odrive2.is_homed():
    pass

odrive1.disarm()
odrive2.arm()

time.sleep(1)

odrive1.home()
print("Odrive1 is homing")
while not odrive1.is_homed():
    pass


odrive2.disarm()
odrive1.arm()
odrive1.disarm()

time.sleep(1)

print("ODrive 1 Position:", odrive1.get_joint_position())
print("ODrive 2 Position:", odrive2.get_joint_position())

time.sleep(0.01)

odrive1.set_joint_position(0)
odrive2.set_joint_position(0)

time.sleep(0.01)

print("ODrive 1 Position:", odrive1.get_joint_position())
print("ODrive 2 Position:", odrive2.get_joint_position())

odrive1.close()
odrive2.close()
