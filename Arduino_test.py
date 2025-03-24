from uart_classes import AruinoUART
import time

arduino1 = AruinoUART("/dev/ttyUSB2")

test_mode = True
time.sleep(5)

if test_mode:
    while True:
        print(f"motor positions: {arduino1.set_postition(90,0,0,0)}")

        time.sleep(5)

        print(f"motor position: {arduino1.set_postition(0,0,0,0)}")

        time.sleep(5)