import struct


def test():
    packet = struct.pack(
    '>c B c h c h c h c h',     # Format string
    b'C', 5,                    # Command header (8-bit)
    b'B', 54,            # 'B' value (16-bit)
    b'W', 134,            # 'W' value (16-bit)
    b'R', 21234,            # 'R' value (16-bit)
    b'A', 454             # 'A' value (16-bit)
    )     

    packet_size = 14

    # Unpack the data
    if len(packet) == packet_size:
        unpacked_data = struct.unpack('>c B c h c h c h c h', packet)

        processed_data = []
        for item in unpacked_data:
            if not item  in (b'C', b'B', b'W', b'R', b"A"):
                processed_data.append(item) 
        processed_data.pop(0)

        return processed_data #format is [j1, j4, j5, j6]

    else:
        print("Error: Incomplete packet received.")
        return
    
def struct_size():
    packet_format = '>c B c h c h c h c h'
    packet_size = struct.calcsize(packet_format)
    print(f"struct size = {packet_size}")

#print(test())
struct_size()