import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer
from cocotb.result import TestFailure
# -5.306998228053506 -1.689911908168916  0 "111011 0100110000 111111 1010110001" "3979411121" (Done)
# 1.3555762579087454 0.9090259721609498   1  "000001 0101100011 000000 1110001101" "90375053" (Done)
#  -3.2523880383489785 -3.9578281837414293  0 "111101 0100000010 111101 1111010100"  "2055306218" (No)  0.0117188  -> 0.216796875
# 0.44321949251312315 4.138348135477942  1 "000000 0110111011 000100 0010001010" "29036682" (Done)
# 0.42268483320936573 2.7801798225075576 1 "000000 0110100110 000010 1100001100" "27659020" (Done)
# 0.04965539259466095 0.7637387313524499 1 "000000 0000110010 000000 1100001101" "3277581" (Done)
# -3.666517870767735 -6.078517754281665 0  "111101 1010101010 111010 0001010000" "4138395728" (No) 0.00195313 -> 0.021484375
# -4.349626083892827 -3.7573869312624804 0 "111100 0101100101 111101 1100000111" "4049991431" 0.0078125 -> 0.0263671875
# -2.421700539681354 0.04658452965293431 
@cocotb.test()
async def testbench(dut):
    clock = Clock(dut.ap_clk, 2, units="ns")
    cocotb.start_soon(clock.start())
    print("---Start---")
    # Initalization
    dut.ap_rst.value=0
    dut.ap_start.value=1
    dut.input_2_V_ap_vld.value=1
    dut.ap_block_pp0_stage0_11001.value=0
    dut.ap_CS_fsm_pp0_stage0.value=1
    dut.input_2_V.value=27659020
    await RisingEdge(dut.ap_clk)


    

    # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
    await RisingEdge(dut.ap_clk)
    print(dut.input_2_V.value)
    print('--- Input to HiddenLayer 1----')
    print(dut.input_2_V_in_sig.value)
    print("---Output from HiddenLayer 1----")
    # Rising Edge to get output from HiddenLayer 1
    await RisingEdge(dut.ap_clk)
    print(dut.layer2_out_0_V_reg_209.value)
    print(dut.layer2_out_1_V_reg_214.value)
    print(dut.layer2_out_2_V_reg_219.value)
    print(dut.layer2_out_3_V_reg_224.value)
    print(dut.layer2_out_4_V_reg_229.value)
    print(dut.layer2_out_5_V_reg_234.value)
    print(dut.layer2_out_6_V_reg_239.value)
    print(dut.layer2_out_7_V_reg_244.value)

  
    print('---Output from RelU----')
    # Rising Edge to get output from Relu
    await RisingEdge(dut.ap_clk)
    print(dut.layer3_out_0_V_reg_249.value)
    print(dut.layer3_out_1_V_reg_254.value)
    print(dut.layer3_out_2_V_reg_259.value)
    print(dut.layer3_out_3_V_reg_264.value)
    print(dut.layer3_out_4_V_reg_269.value)
    print(dut.layer3_out_5_V_reg_274.value)
    print(dut.layer3_out_6_V_reg_279.value)
    print(dut.layer3_out_7_V_reg_284.value)



    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)


    # Rising Edge to get output from Hiddenlayer2
    await RisingEdge(dut.ap_clk)
    print("---Output from HiddenLayer 2----")
    print(dut.layer4_out_0_V_reg_289.value)
    print(dut.layer4_out_1_V_reg_294.value)
    print(dut.layer4_out_2_V_reg_299.value)
    print(dut.layer4_out_3_V_reg_304.value)

    # Rising Edge to get output from Relu2
    await RisingEdge(dut.ap_clk)
    print("---Output from Relu 2----")
    print(dut.layer5_out_0_V_reg_309.value)
    print(dut.layer5_out_1_V_reg_314.value)
    print(dut.layer5_out_2_V_reg_319.value)
    print(dut.layer5_out_3_V_reg_324.value)

    # Rising Edge to get output from OutputLayer


    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    
    print("---Output from OutputLayer----")
    print(dut.layer6_out_0_V_reg_329.value)

    await RisingEdge(dut.ap_clk)
    await RisingEdge(dut.ap_clk)
    print("---Prediction----")
    print(str(dut.layer7_out_0_V.value))

    print(int(str(dut.layer7_out_0_V.value),2)/2**10)

    
    
