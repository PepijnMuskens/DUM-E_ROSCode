from odrive_uart_class import ODriveUART
import time

odrive1 = ODriveUART("/dev/ttyUSB0")
odrive2 = ODriveUART("/dev/ttyUSB1")

odrive1.clear_errors()
odrive2.clear_errors()

time.sleep(0.01)

print(f"current arming state 1: {odrive1.is_armed()}")
print(f"current arming state 2: {odrive2.is_armed()}")

time.sleep(0.01)

odrive1.arm()
odrive2.arm()

time.sleep(0.01)

print(f"current arming state 1: {odrive1.is_armed()}")
print(f"current arming state 2: {odrive2.is_armed()}")

time.sleep(0.01)

odrive1.move(-0.5)
odrive2.move(-0.5)

time.sleep(5)

print("ODrive 1 Position:", odrive1.get_joint_position())
print("ODrive 2 Position:", odrive2.get_joint_position())

time.sleep(0.01)

odrive1.move(0.5)
odrive2.move(0.5)

time.sleep(5)

odrive1.disarm()
odrive2.disarm()

print(f"current arming state 1: {odrive1.is_armed()}")
print(f"current arming state 2: {odrive2.is_armed()}")

time.sleep(3)
#odrive1.disarm()

time.sleep(1)

odrive1.close()
odrive2.close()