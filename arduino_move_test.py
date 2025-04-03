from uart_classes import ArduinoUART
import time

arduino = ArduinoUART("/dev/ttyUSB0")



arduino.send_joint_targets_position(100, 900, 900, 900)
arduino.send_joint_targets_velocity(10, 100, 100, 100)


"""
i=0
while i <1000:

    print(f"joint poses:     {arduino.get_positions()}")

    time.sleep(2)
    print(f"joint velocities:{arduino.get_velocities()}")

    i = i + 1

    time.sleep(2)
"""

"""
j = 0
while True:
    if j < 450:
        j += 20
        arduino.set_postition(j, j, j, j)
    else:
        break
        
    time.sleep(1)
"""

print("done")