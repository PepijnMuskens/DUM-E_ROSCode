from uart_classes import AruinoUART
import time

arduino = AruinoUART("/dev/ttyUSB1")

i=0
while i <1000:
    print(f"joint poses:     {arduino.get_positions()}")
    print(f"joint velocities:{arduino.get_velocities()}")

    i = i + 1

    time.sleep(1)

print("done")