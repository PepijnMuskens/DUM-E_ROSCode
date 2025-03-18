import pigpio
import time

# Start pigpio daemon
pi = pigpio.pi()

# Define TX and RX pins for each ODrive
TX1, RX1 = 17, 27  # ODrive 1
TX2, RX2 = 22, 23  # ODrive 2

# Set RX pins as input
pi.set_mode(RX1, pigpio.INPUT)
pi.set_mode(RX2, pigpio.INPUT)

# Enable Software UARTs (Bit-banged serial on GPIO)
pi.bb_serial_read_open(RX1, 19200)
pi.bb_serial_read_open(RX2, 19200)

def send_command(tx_pin, rx_pin, command):
    """Send ASCII command and read response using software UART."""
    pi.wave_clear()

    # Create a waveform for TX
    wf = []
    for bit in command + "\n":
        wf.append(pigpio.pulse(1 << tx_pin, 0, 104))  # Set high for one bit duration
        wf.append(pigpio.pulse(0, 1 << tx_pin, 104))  # Set low for one bit duration
    
    pi.wave_add_generic(wf)
    wid = pi.wave_create()
    
    # Send the waveform (bit-banged serial TX)
    pi.wave_send_once(wid)
    while pi.wave_tx_busy():
        time.sleep(0.01)

    pi.wave_delete(wid)

    time.sleep(0.01)

    # Read response from RX
    (count, data) = pi.bb_serial_read(rx_pin)
    return data.decode().strip() if count else None

def check_odrive_connection(tx_pin, rx_pin):
    """Check if ODrive is responding by querying DC bus voltage."""
    response = send_command(tx_pin, rx_pin, "vbus")
    if response:
        print(f"ODrive detected on TX:{tx_pin}, RX:{rx_pin} - DC Bus Voltage: {response}V")
        return True
    else:
        print(f"ODrive NOT detected on TX:{tx_pin}, RX:{rx_pin}")
        return False

# **1. Check connection to ODrives**
print("\nChecking connection to ODrives...")

odrive1_connected = check_odrive_connection(TX1, RX1)
odrive2_connected = check_odrive_connection(TX2, RX2)

if not odrive1_connected and not odrive2_connected:
    print("No ODrives detected! Check wiring and power supply.")
    exit(1)

print("\nODrive(s) detected. Reading DC Bus Voltage and Motor Position...\n")

# **2. Read DC Bus Voltage & Motor Position in Real-Time**
while True:
    try:
        if odrive1_connected:
            vbus1 = send_command(TX1, RX1, "vbus")
            pos1 = send_command(TX1, RX1, "f 0")
            print(f"ODrive1 - DC Bus Voltage: {vbus1}V | Position: {pos1}")

        if odrive2_connected:
            vbus2 = send_command(TX2, RX2, "vbus")
            pos2 = send_command(TX2, RX2, "f 0")
            print(f"ODrive2 - DC Bus Voltage: {vbus2}V | Position: {pos2}")

        time.sleep(1)  # Read every second

    except KeyboardInterrupt:
        print("\nStopping script and closing serial connections...")
        pi.bb_serial_read_close(RX1)
        pi.bb_serial_read_close(RX2)
        break
