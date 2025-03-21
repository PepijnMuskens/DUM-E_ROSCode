import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/pepijn/Desktop/git/DUM-E_ROSCode/ros2_ws/install/py_srvcli'
