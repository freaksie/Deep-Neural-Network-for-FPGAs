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
    dut.bias.value=-50
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    print(dut.bias.value)
    print(dut.weight.value)
    print(dut.ans.value)


 