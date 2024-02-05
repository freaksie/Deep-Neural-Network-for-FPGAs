import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer
from cocotb.result import TestFailure
import numpy as np
def getBinary(a):
    x= a
    integer,fraction=(divmod(x, 1))
    if (int(integer)>=0):
        integer_binary=str(bin(int(integer) & 0xFFFFFFFFF)[2:].zfill(32))
    else:
        integer_binary=str(bin(int(integer) & 0b11111111111111111111111111111111)[2:].zfill(32))

    return(integer_binary)
def getData(x1,x2):
    input1=getBinary(round(x1))
    input2=getBinary(round(x2))
    input=int(input2+input1,2)
    return (input)

@cocotb.test()
# 59491,27428
# 9469. -2776
# 21220.0, 35443.0
async def testbench(dut):
    x1,x2=462985,462985
    input=getData(x1,x2)
    clock = Clock(dut.ap_clk, 2, units="ns")
    cocotb.start_soon(clock.start())
    print("---Start---")
    # Initalization
    dut.input_2_V.value=input
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    
    print((("Input ",dut.input_2_V.value)))
    print((("Value1 ",dut.value1.value)))
    print((("Value2 ",dut.value2.value)))
    print('*****************')
    print((("Sum1 ",dut.sum1.value)))
    print((("Sum2 ",dut.sum2.value)))
    print('*****************')
    print((("Multi1 ",dut.multi1.value)))
    print(("Div1 ",dut.div1.value))
    print('*****************')

    print((("Dt1 ",dut.dt1.value)) , ((dut.dt2.value)))
    print('*****************')
    print((("final ",dut.ap_return.value)))
    print('*****************')
    print('*****************')

    for k in range(14):
            await RisingEdge(dut.ap_clk)

    print(dut.output_2_V.value)
    print(int(str(dut.output_2_V.value),2)/2*12)
    # await RisingEdge(dut.ap_clk)
    # await RisingEdge(dut.ap_clk)



# 16531329126153
# 3849
# 3849
# *****************
# 265992
# 265992
# *****************
# 100000011110000100000000000000 100000011110000100000000000000
# *****************
# 100000011110000000100000011110
# *****************
# *****************
# 000000001111111011
    

# 000000100000000000 000000100000000000

# 100000000000000000 100000000000

# 100000000000000000001111000010 100000000000000000001111000010

# 000010000000000000

# 000000100000000000000000000000000000