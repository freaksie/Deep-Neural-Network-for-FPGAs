import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer
from cocotb.result import TestFailure
import os
import numpy as np
# 0.5073413848876953 0.6103839874267578 000000 100111000010 000000 100000011100 "654837788" "0.0146484"
# 0.3826313018798828 0.4987678527832031 000000 011111110111 000000 011000011100 "534513180" "0.996094"
# 0.5404739379882812 0.5676021575927734 000000 100100010100 000000 100010100101 "609224869" "0.0117188 "

def getBinary(a):
    x= a
    integer,fraction=(divmod(x, 1))
    acc_frac=int(fraction*(2**12))
    fraction_binary=str(bin(acc_frac & 0xFFFFF)[2:].zfill(12))
    if (int(integer)>=0):
        integer_binary=str(bin(int(integer) & 0xFFFFF)[2:].zfill(6))
    else:
        integer_binary=str(bin(int(integer) & 0b111111)[2:].zfill(6))

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
    x,y=getData('tb_data/Q3_x_text.npy','tb_data/Q3_y_test.npy')
    
    for i in range(2):
        # print(x[i])
        clock = Clock(dut.ap_clk, 2, units="ns")
        cocotb.start_soon(clock.start())
        # print("---Start---")
        # Initalization
        dut.ap_rst.value=0
        dut.ap_start.value=1
        dut.input_2_V_ap_vld.value=1
        # dut.ap_block_pp0_stage0_11001.value=0
        # dut.ap_CS_fsm_pp0_stage0.value=1
        dut.input_2_V.value=535299615
        

        for k in range(14):
            await RisingEdge(dut.ap_clk)


        # Rising Edge to send input to input_2_v_preg and input_2_V_in_sig
        # await RisingEdge(dut.ap_clk)
        print(dut.input_2_V.value)
        print('--- Input to HiddenLayer 1----')
        print(dut.input_2_V_in_sig.value)
        print("---Output from HiddenLayer 1----")
        # Rising Edge to get output from HiddenLayer 1
        # await RisingEdge(dut.ap_clk)
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
        # await RisingEdge(dut.ap_clk)
        print(dut.layer3_out_0_V_reg_249.value)
        print(dut.layer3_out_1_V_reg_254.value)
        print(dut.layer3_out_2_V_reg_259.value)
        print(dut.layer3_out_3_V_reg_264.value)
        print(dut.layer3_out_4_V_reg_269.value)
        print(dut.layer3_out_5_V_reg_274.value)
        print(dut.layer3_out_6_V_reg_279.value)
        print(dut.layer3_out_7_V_reg_284.value)



        # await RisingEdge(dut.ap_clk)
        # await RisingEdge(dut.ap_clk)
        # await RisingEdge(dut.ap _clk)


        # Rising Edge to get output from Hiddenlayer2
        # await RisingEdge(dut.ap_clk)
        print("---Output from HiddenLayer 2----")
        print(dut.layer4_out_0_V_reg_289.value)
        print(dut.layer4_out_1_V_reg_294.value)
        print(dut.layer4_out_2_V_reg_299.value)
        print(dut.layer4_out_3_V_reg_304.value)

        # Rising Edge to get output from Relu2
        # await RisingEdge(dut.ap_clk)
        print("---Output from Relu 2----")
        print(dut.layer5_out_0_V_reg_309.value)
        print(dut.layer5_out_1_V_reg_314.value)
        print(dut.layer5_out_2_V_reg_319.value)
        print(dut.layer5_out_3_V_reg_324.value)

        # Rising Edge to get output from OutputLayer


        # await RisingEdge(dut.ap_clk)
        # await RisingEdge(dut.ap_clk)
        
        print("---Output from OutputLayer----")
        print(dut.layer6_out_0_V_reg_329.value)
        print(dut.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_address0.value)
        print(dut.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_q0.value)
        # await RisingEdge(dut.ap_clk)
        # await RisingEdge(dut.ap_clk)
        print("---Prediction----")
        print(str(dut.layer7_out_0_V.value)) #64 
        print(int(str(dut.layer7_out_0_V.value),2)/2**12)

    #     y_pred=(int(str(dut.layer7_out_0_V.value),2)/2**12)
    #     pred.append(y_pred)
    # print(pred)
    # count=0
    # count1=0
    # for i in range(len(pred)):
    #     if y[i]==0:
    #         count+=1
    #         if pred[i]<0.5:
    #             count1+=1
    #         # else:
    #             # print(i+1,y[i],pred[i])
    # print(count1/count)

    # count=0
    # count1=0
    # for i in range(len(pred)):
    #     if y[i]==1:
    #         count+=1
    #         if pred[i]>0.5:
    #             count1+=1
    #         # else:
    #         #     print(i+1,y[i],pred[i])
    # print(count1/count)
    # # print(pred,y[0:10])