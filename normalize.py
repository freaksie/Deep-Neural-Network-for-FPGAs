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
    x1,x2=21220,35443
    input=getData(x1,x2)
    clock = Clock(dut.ap_clk, 2, units="ns")
    cocotb.start_soon(clock.start())
    print("---Start---")
    # Initalization
    dut.input_V.value=input
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    print(dut.input_V.value)
    print(dut.value1.value)
    print(dut.value2.value)
    print('*****************')
    print(dut.sum1.value)
    print(dut.sum2.value)
    print('*****************')
    print(dut.tmp1.value , dut.tmp2.value)
    print(dut.multi1.value , dut.multi2.value)
    print('*****************')
    print(dut.divid1.value , dut.divid2.value)
    print('*****************')
    print(dut.dt1.value , dut.dt2.value)
    print(dut.normalized1.value , dut.normalized2.value)
    print('*****************')
    print(dut.ap_return.value)
    print('*****************')
    print('*****************')

    for k in range(14):
        await RisingEdge(dut.ap_clk)
    # print(dut.myproject.input_2_V.value)
    # print('--- Input to HiddenLayer 1----')
    # print(dut.myproject.input_2_V_in_sig.value)
    # print("---Output from HiddenLayer 1----")
    # # Rising Edge to get output from HiddenLayer 1
    # # await RisingEdge(dut.ap_clk)
    # print(dut.myproject.layer2_out_0_V_reg_209.value)
    # print(dut.myproject.layer2_out_1_V_reg_214.value)
    # print(dut.myproject.layer2_out_2_V_reg_219.value)
    # print(dut.myproject.layer2_out_3_V_reg_224.value)
    # print(dut.myproject.layer2_out_4_V_reg_229.value)
    # print(dut.myproject.layer2_out_5_V_reg_234.value)
    # print(dut.myproject.layer2_out_6_V_reg_239.value)
    # print(dut.myproject.layer2_out_7_V_reg_244.value)


    # print('---Output from RelU----')
    # # Rising Edge to get output from Relu
    # # await RisingEdge(dut.ap_clk)
    # print(dut.myproject.layer3_out_0_V_reg_249.value)
    # print(dut.myproject.layer3_out_1_V_reg_254.value)
    # print(dut.myproject.layer3_out_2_V_reg_259.value)
    # print(dut.myproject.layer3_out_3_V_reg_264.value)
    # print(dut.myproject.layer3_out_4_V_reg_269.value)
    # print(dut.myproject.layer3_out_5_V_reg_274.value)
    # print(dut.myproject.layer3_out_6_V_reg_279.value)
    # print(dut.myproject.layer3_out_7_V_reg_284.value)



    # # await RisingEdge(dut.ap_clk)
    # # await RisingEdge(dut.ap_clk)
    # # await RisingEdge(dut.ap _clk)


    # # Rising Edge to get output from Hiddenlayer2
    # # await RisingEdge(dut.ap_clk)
    # print("---Output from HiddenLayer 2----")
    # print(dut.myproject.layer4_out_0_V_reg_289.value)
    # print(dut.myproject.layer4_out_1_V_reg_294.value)
    # print(dut.myproject.layer4_out_2_V_reg_299.value)
    # print(dut.myproject.layer4_out_3_V_reg_304.value)

    # # Rising Edge to get output from Relu2
    # # await RisingEdge(dut.ap_clk)
    # print("---Output from Relu 2----")
    # print(dut.myproject.layer5_out_0_V_reg_309.value)
    # print(dut.myproject.layer5_out_1_V_reg_314.value)
    # print(dut.myproject.layer5_out_2_V_reg_319.value)
    # print(dut.myproject.layer5_out_3_V_reg_324.value)

    # # Rising Edge to get output from OutputLayer


    # # await RisingEdge(dut.ap_clk)
    # # await RisingEdge(dut.ap_clk)
    
    # print("---Output from OutputLayer----")
    # print(dut.myproject.layer6_out_0_V_reg_329.value)

    # print("---Prediction----")
    # print(str(dut.myproject.layer7_out_0_V.value))

    # print(dut.output_V.value)
    # print(int(str(dut.output_V.value),2)/2**12)



    # 000000100100010100000000100010100101
    # 000000001001000100000000001000101001