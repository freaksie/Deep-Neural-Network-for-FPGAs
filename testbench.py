import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer
from cocotb.result import TestFailure
# -5.306998228053506 -1.689911908168916  0 "111010 1011000110 111110 0100111110" "4181650118" (Done)  0.0527344 
# 1.3555762579087454 0.9090259721609498   1  "000001 0101101011 000000 1110100010" "60949867" (Done)  0.895508
#  -3.2523880383489785 -3.9578281837414293  0 "111100 1011111101 111100 0000101100"  "4029477629" (No)  0.0117188 
# 0.44321949251312315 4.138348135477942  1 "000000 0110111011 000100 0010001010" "277479867" (Done)  0.958984 
# 0.42268483320936573 2.7801798225075576 1 "000000 0110100110 000010 1100001100" "185336230" (Done)  0.926758 
# 0.04965539259466095 0.7637387313524499 1 "000000 0000110010 000000 1100001101" "51183666" (Done)   0.821289 
# -3.666517870767735 -6.078517754281665 0  "111100 0101010110 111001 1110110000" "3887133014" (Done) 0.00195313
# -4.349626083892827 -3.7573869312624804 0 "111011 1010011010 111100 0011111000" "4042845850" (Done) 0.0078125 
# -2.9650099695396395 -2.1598113426445704 0 "111101 0000100011 111101 1101011101" "4150129699" (Done) 0.0703125 
import numpy as np
import os

def getBinary(a):
    x= a
    integer,fraction=(divmod(x, 1))
    acc_frac=int(fraction*(2**10))
    fraction_binary=str(bin(acc_frac & 0xFFFF)[2:].zfill(10))
    if (int(integer)>=0):
        integer_binary=str(bin(int(integer) & 0xFFFF)[2:].zfill(6))
    else:
        integer_binary=str(bin(int(integer) & 0b111111)[-6:].zfill(6))

    return(integer_binary+fraction_binary)
def getData(X,Y):
    inputList=[]
    outputList=[]
    x = np.load(X)
    y = np.load(Y)
    for i in range(x.shape[0]):
        input1=getBinary(round(x[i,0],3))
        input2=getBinary(round(x[i,1],3))
        inputList.append(int(input2+input1,2))
        outputList.append(y[i])
    return (inputList,outputList)

@cocotb.test()
async def testbench(dut):
    pred=[]
    x,y=getData('tb_data/x_test_her.npy','tb_data/y_test_her.npy')
    
    for i in range(1000):
        clock = Clock(dut.ap_clk, 2, units="ns")
        cocotb.start_soon(clock.start())
        # print("---Start---")
        # Initalization
        dut.ap_rst.value=0
        dut.ap_start.value=1
        dut.input_2_V_ap_vld.value=1
        dut.ap_block_pp0_stage0_11001.value=0
        dut.ap_CS_fsm_pp0_stage0.value=1
        dut.input_2_V.value=x[i]

        for k in range(13):
            await RisingEdge(dut.ap_clk)


        

        # # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
        # # await RisingEdge(dut.ap_clk)
        # print(dut.input_2_V.value)
        # print('--- Input to HiddenLayer 1----')
        # print(dut.input_2_V_in_sig.value)
        # print("---Output from HiddenLayer 1----")
        # # Rising Edge to get output from HiddenLayer 1
        # # await RisingEdge(dut.ap_clk)
        # print(dut.layer2_out_0_V_reg_209.value)
        # print(dut.layer2_out_1_V_reg_214.value)
        # print(dut.layer2_out_2_V_reg_219.value)
        # print(dut.layer2_out_3_V_reg_224.value)
        # print(dut.layer2_out_4_V_reg_229.value)
        # print(dut.layer2_out_5_V_reg_234.value)
        # print(dut.layer2_out_6_V_reg_239.value)
        # print(dut.layer2_out_7_V_reg_244.value)

    
        # print('---Output from RelU----')
        # # Rising Edge to get output from Relu
        # # await RisingEdge(dut.ap_clk)
        # print(dut.layer3_out_0_V_reg_249.value)
        # print(dut.layer3_out_1_V_reg_254.value)
        # print(dut.layer3_out_2_V_reg_259.value)
        # print(dut.layer3_out_3_V_reg_264.value)
        # print(dut.layer3_out_4_V_reg_269.value)
        # print(dut.layer3_out_5_V_reg_274.value)
        # print(dut.layer3_out_6_V_reg_279.value)
        # print(dut.layer3_out_7_V_reg_284.value)



        # # await RisingEdge(dut.ap_clk)
        # # await RisingEdge(dut.ap_clk)
        # # await RisingEdge(dut.ap _clk)


        # # Rising Edge to get output from Hiddenlayer2
        # # await RisingEdge(dut.ap_clk)
        # print("---Output from HiddenLayer 2----")
        # print(dut.layer4_out_0_V_reg_289.value)
        # print(dut.layer4_out_1_V_reg_294.value)
        # print(dut.layer4_out_2_V_reg_299.value)
        # print(dut.layer4_out_3_V_reg_304.value)

        # # Rising Edge to get output from Relu2
        # # await RisingEdge(dut.ap_clk)
        # print("---Output from Relu 2----")
        # print(dut.layer5_out_0_V_reg_309.value)
        # print(dut.layer5_out_1_V_reg_314.value)
        # print(dut.layer5_out_2_V_reg_319.value)
        # print(dut.layer5_out_3_V_reg_324.value)

        # # Rising Edge to get output from OutputLayer


        # # await RisingEdge(dut.ap_clk)
        # # await RisingEdge(dut.ap_clk)
        
        # print("---Output from OutputLayer----")
        # print(dut.layer6_out_0_V_reg_329.value)

        # # await RisingEdge(dut.ap_clk)
        # # await RisingEdge(dut.ap_clk)
        # print("---Prediction----")
        # print(str(dut.layer7_out_0_V.value))
        # print(int(str(dut.layer7_out_0_V.value),2)/2**10)

        y_pred=int(str(dut.layer7_out_0_V.value),2)/2**10
        pred.append(y_pred)
    count=0
    count1=0
    for i in range(len(pred)):
        if y[i]==0:
            count+=1
            if pred[i]<0.5:
                count1+=1
            # else:
                # print(i+1,y[i],pred[i])
    print(count1/count)

    count=0
    count1=0
    for i in range(len(pred)):
        if y[i]==1:
            count+=1
            if pred[i]>0.5:
                count1+=1
            # else:
            #     print(i+1,y[i],pred[i])
    print(count1/count)
    # print(pred,y[0:10])