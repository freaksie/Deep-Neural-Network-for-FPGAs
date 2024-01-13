import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer
from cocotb.result import TestFailure
@cocotb.test()
async def testbench(dut):
    clock = Clock(dut.ap_clk, 2, units="ns")
    cocotb.start_soon(clock.start())
    print("---Start---")
    # Initalization
    dut.ap_rst.value=0
    dut.ap_ce.value=1
    # dut.input_2_V_ap_vld.value=1
    dut.data_0_V_read.value=0
    dut.data_1_V_read.value=1134
    dut.data_2_V_read.value=0
    dut.data_3_V_read.value=0
    dut.data_4_V_read.value=0
    dut.data_5_V_read.value=0
    dut.data_6_V_read.value=0
    dut.data_7_V_read.value=63
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)

    # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    
    print(dut.ap_return_0.value)    
    print(dut.ap_return_1.value)
    print(dut.ap_return_2.value)
    print(dut.ap_return_3.value)
    # print(dut.tmp_33_0_5_fu_1410_p4.value)
    # print(dut.tmp7_cast_fu_1483_p1.value)
    # print(dut.acc_5_V_fu_1487_p2.value)