import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import numpy as np
def getBinary(a):
    x= a
    integer,_=(divmod(x, 1))
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
        inputList.append(int(input2+input1,2))
        outputList.append(y[i])
    return (inputList,outputList)
@cocotb.test()
async def inference_test(dut):
    orig=[]
    pred=[]
    y_state=[]
    x,y=getData('tb_data/input.npy','tb_data/Q3_y_test.npy')
    filename = 'output.txt'
    format_str = '%d'  # Use '%f' for floating-point numbers

    # Save the array to a text file
    np.savetxt(filename, x, fmt=format_str)
    print("---Start---")
    for i in range(100):
        clock = Clock(dut.clk, 2, units="ns")
        cocotb.start_soon(clock.start())
        # Initalization
        # dut.input_V_ap_vld.value=1
        orig.append(int(y[i]))
        dut.accumulated_data.value=x[i]
        dut.start_trigger.value=1
        await RisingEdge(dut.clk)
        dut.start_trigger.value=0
        await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)

        # print(int(str(dut.accumulated_data.value),2))
        # print('*****************')
        # print('*****************')
        # print(int(str(dut.normalized_data.value),2))
        # print('*****************')
        # print('*****************')

        for _ in range(13):
            await RisingEdge(dut.clk)
        # print('--- Input to HiddenLayer 1----')
        # print(int(str(dut.nn_model.input_2_V_in_sig.value),2))

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
        # print(int(str(dut.nn_model.layer6_out_0_V_reg_329.value),2))
        # print("---Prediction----")
        # print(int(str(dut.nn_model.state_probability.value),2))
        # print(int(str(dut.inference_prob.value),2))
        # print(int(str(dut.inference_prob.value),2)/2**12)
        # print(dut.inference_state.value)
        # print(dut.inference_prob.value)
        # print("#######################\n###################")

        y_state.append(dut.inference_state.value)
        y_pred=(int(str(dut.inference_prob.value),2)/2**12)
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