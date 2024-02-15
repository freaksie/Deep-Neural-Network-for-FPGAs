import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import numpy as np

def getBinary(a):
    integer,_=(divmod(a, 1))
    if (int(integer)>=0):
        integer_binary=str(bin(int(integer) & 0xFFFFFFFFF)[2:].zfill(32))
    else:
        integer_binary=str(bin(int(integer) & 0b11111111111111111111111111111111)[2:].zfill(32))
    return(integer_binary)

def getData(X,Y):
    inputList=[]
    outputList=[]
    x = np.load(X)
    y = np.load(Y)
    for i in range(x.shape[0]):
        input1=getBinary(round(x[i,0]))
        input2=getBinary(round(x[i,1]))
        inputList.append(int(input1+input2,2))
        outputList.append(y[i])
    return (inputList,outputList)

def convert2(X):
    binary_number= X[:18]
    integer_binary = binary_number[:6]
    fraction_binary = binary_number[6:]
    integer_value = int(integer_binary, 2)
    if integer_binary[0] == '1':
        integer_value -= 2**6 
    fraction_value = int(fraction_binary, 2)
    x = integer_value + (fraction_value / (2 ** len(fraction_binary)))
    return (f'{x:.5f}',binary_number)

def convert(X):
    binary_number= X[:27]
    integer_binary = binary_number[:10]
    fraction_binary = binary_number[10:]
    integer_value = int(integer_binary, 2)
    if integer_binary[0] == '1':
        integer_value -= 2**10 
    fraction_value = int(fraction_binary, 2)
    x = integer_value + (fraction_value / (2 ** len(fraction_binary)))
    return (f'{x:.5f}',binary_number)

@cocotb.test()
async def inference_test(dut):
    orig=[]
    pred=[]
    y_state=[]
    x,y=getData('tb_data/input_new.npy','tb_data/Q3_y_test.npy')

    filename = 'output.txt'
    format_str = '%d'  # Use '%f' for floating-point numbers

    # Save the array to a text file
    np.savetxt(filename, x, fmt=format_str)
    print("---Start---")
    for i in range(1000,1200):
        clock = Clock(dut.clk, 2, units="ns")
        cocotb.start_soon(clock.start())
        # Initalization
        # dut.input_V_ap_vld.value=1
        orig.append(int(y[i]))
        dut.accumulated_data.value= x[i]# 0b1111111111100001011110111000000000000000000111101000010010000000 #< 2**18
        dut.start_trigger.value=1
        await RisingEdge(dut.clk)
        dut.start_trigger.value=0
        for _ in range(4):
            await RisingEdge(dut.clk)

        # print(int(str(dut.accumulated_data.value),2))
        # print('*****************')
        # print('*****************')
        # print((str(dut.normalizer.sumI.value)))
        # print((str(dut.normalizer.normalizedI.value)))
        # print((str(dut.normalizer.normalizedQ.value)))
        # print(int(str(dut.normalized_data.value),2))
        # print('*****************')
        # print('*****************')

        for _ in range(23):
            await RisingEdge(dut.clk)
        # print('--- Input to HiddenLayer 1----')
        # print(int(str(dut.nn_model.input_2_V_in_sig.value),2))
        # print('inputI',convert(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.dataI.value))) 
        # print('weight0',convert2(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.w0_0.value))) 
        # print('inputQ',convert(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.dataQ.value))) 
        # print('weightQ',convert2(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.w1_0.value))) 
        # print('Bias',convert2(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.b0.value))) 
        # print('Bias + node1_0',convert(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.tmp2_fu_1426_p2.value))) 

        # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.r_V_s_fu_110_p2.value)))
        # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67.r_V_10_1_fu_108_p2.value)))
        # print("---Output from HiddenLayer 1----")
        # print(int(str(dut.nn_model.layer2_out_0_V_reg_209.value),2))
        # print(int(str(dut.nn_model.layer2_out_1_V_reg_214.value),2))
        # print(int(str(dut.nn_model.layer2_out_2_V_reg_219.value),2))
        # print(int(str(dut.nn_model.layer2_out_3_V_reg_224.value),2))
        # print(int(str(dut.nn_model.layer2_out_4_V_reg_229.value),2))
        # print(int(str(dut.nn_model.layer2_out_5_V_reg_234.value),2))
        # print(int(str(dut.nn_model.layer2_out_6_V_reg_239.value),2))
        # print(int(str(dut.nn_model.layer2_out_7_V_reg_244.value),2))
        # print('---Output from RelU----')
        # print(int(str(dut.nn_model.layer3_out_0_V_reg_249.value),2))
        # print(int(str(dut.nn_model.layer3_out_1_V_reg_254.value),2))
        # print(int(str(dut.nn_model.layer3_out_2_V_reg_259.value),2))
        # print(int(str(dut.nn_model.layer3_out_3_V_reg_264.value),2))
        # print(int(str(dut.nn_model.layer3_out_4_V_reg_269.value),2))
        # print(int(str(dut.nn_model.layer3_out_5_V_reg_274.value),2))
        # print(int(str(dut.nn_model.layer3_out_6_V_reg_279.value),2))
        # print(int(str(dut.nn_model.layer3_out_7_V_reg_284.value),2))
        # print("---Output from HiddenLayer 2----")
        # print(int(str(dut.nn_model.layer4_out_0_V_reg_289.value),2))
        # print(int(str(dut.nn_model.layer4_out_1_V_reg_294.value),2))
        # print(int(str(dut.nn_model.layer4_out_2_V_reg_299.value),2))
        # print(int(str(dut.nn_model.layer4_out_3_V_reg_304.value),2))
        # print("---Output from Relu 2----")
        # print(int(str(dut.nn_model.layer5_out_0_V_reg_309.value),2))
        # print(int(str(dut.nn_model.layer5_out_1_V_reg_314.value),2))
        # print(int(str(dut.nn_model.layer5_out_2_V_reg_319.value),2))
        # print(int(str(dut.nn_model.layer5_out_3_V_reg_324.value),2))
        # print("---Output from OutputLayer----")
        # # print(int(str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_address0.value),2))
        # # print(int(str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_q0.value),2))
        # # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92.node0.value)))
        # # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92.node1.value)))
        # # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92.node2.value)))
        # # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92.node3.value)))
        # # print(convert(str(dut.nn_model.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92.return0.value)))

        # print(convert(str(dut.nn_model.layer6_out_0_V_reg_329.value)))
        # print(int(str(dut.nn_model.layer6_out_0_V_reg_329.value),2))
        # print("---Prediction----")
        # # print(convert('0000000000'+str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.ap_return.value)))
        # print(int(str(dut.nn_model.state_probability.value),2))
        # print(int(str(dut.inference_prob.value)))
        # # print(int(str(dut.inference_prob.value),2))
        # # print(dut.inference_state.value)
        y_state.append(dut.inference_state.value)
        y_pred=(int(str(dut.inference_prob.value),2)/2**17)
        pred.append(y_pred)
    print(pred)
    print(y_state)
    print(orig)
    count=0
    count1=0
    for i in range(len(pred)):
        if orig[i]==0:
            count+=1
            if pred[i]<0.5:
                count1+=1
    print(count1/count)

    count=0
    count1=0
    for i in range(len(pred)):
        if orig[i]==1:
            count+=1
            if pred[i]>0.5:
                count1+=1
    print(count1/count)
