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
    dut.bias.value=-8
    await RisingEdge(dut.ap_clk)

    

    # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    print(dut.bias.value)
    print(dut.weight.value)
    print(dut.ans.value)

    # After 27 bit conversion
    # (27) Node0 = 000000000000100111111000111 = 0.15582    
    # (18) Bias =  111111111110011010 = -0.02490234375            
    # (27) Node0 + Bias =  000000000000100111101100001  = 0.15504   
    # Before
    # Correct 
    # (27) Node0 = 000000001001111110 = 0.15576171875    
    # (18) Bias =  111111111110011010 = -0.02490234375            
    # (18) Node0 + Bias =  000000001000011000 = 0.130859375

 