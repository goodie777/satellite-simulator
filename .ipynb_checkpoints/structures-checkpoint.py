from ctypes import *

""" This class defines a C-like struct for a TC(101) """
class TC_101(Structure):
    _fields_ = [("command_id", c_uint32)]

#class TC_102(Structure):
 #   _fields_ = [("command_id", c_uint32, deltaVx: float, DeltaVy: float, DeltaVz: float)]

class TC_103(Structure):
    _fields_ = [("command_id", c_uint32)]


