from structures import *

data = TC_101(101)

print(data.command_id)


data2 = TC_102(102, 2.5,7.4,8.7)

print(data2.command_id)
print(data2.DeltaVx)
print(data2.DeltaVy)
print(data2.DeltaVz)


data3 = TC_103(7,16,58)

print(data3.command_id)
print(data3.operation_code)
print(data3.payload_id)

# TM 

TM_data1 = TM_201(201,7.5,8.9,10.0 )

print(TM_data1.status_code)
print(TM_data1.cpu_usage)
print(TM_data1.memory_usage )
print(TM_data1.battery_level)