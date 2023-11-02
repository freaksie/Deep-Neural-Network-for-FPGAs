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
    dut.ap_start.value=1
    dut.input_2_V_ap_vld.value=1
    dut.input_2_V.value=4181650118
    await RisingEdge(dut.ap_clk)
    # 11111001001111101110101011000110
    # 1111100100111110  00000000000000001110101011000110

    # 1101101101111101 <-- 0000010010010011
    

    # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    print(dut.r_V_s_fu_110_p2.value)
    print(dut.tmp_3_reg_1568.value)
    print(end="\n")
    print(dut.r_V_10_1_fu_108_p2.value)
    print(dut.tmp_33_1_reg_1603.value)
    print(end="\n")
    print(dut.r_V_10_1_fu_108_p2.value)
    print(dut.res_0_V_write_assign_fu_1431_p2.value)

    print(dut.w0_0.value)


# 00000101111110000101000000
# 0000010111111000

# 11111101111111100110100000
# 1111110111111110


    