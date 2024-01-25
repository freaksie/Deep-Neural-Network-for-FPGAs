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
    for i in range(6):
        clock = Clock(dut.clk, 2, units="ns")
        cocotb.start_soon(clock.start())
        # Initalization
        # dut.input_V_ap_vld.value=1
        orig.append(int(y[i]))
        dut.accumulated_data.value=x[i]
        dut.start_trigger.value=1
        await RisingEdge(dut.clk)
        dut.start_trigger.value=0
        for _ in range(8):
            await RisingEdge(dut.clk)

        print(int(str(dut.accumulated_data.value),2))
        print('*****************')
        print('*****************')
        print(int(str(dut.normalized_data.value),2))
        print('*****************')
        print('*****************')

        for _ in range(16):
            await RisingEdge(dut.clk)
        print('--- Input to HiddenLayer 1----')
        print(int(str(dut.nn_model.input_2_V_in_sig.value),2))

        print("---Output from HiddenLayer 1----")
        print(int(str(dut.nn_model.layer2_out_0_V_reg_209.value)))
        print(int(str(dut.nn_model.layer2_out_1_V_reg_214.value)))
        print(int(str(dut.nn_model.layer2_out_2_V_reg_219.value)))
        print(int(str(dut.nn_model.layer2_out_3_V_reg_224.value)))
        print(int(str(dut.nn_model.layer2_out_4_V_reg_229.value)))
        print(int(str(dut.nn_model.layer2_out_5_V_reg_234.value)))
        print(int(str(dut.nn_model.layer2_out_6_V_reg_239.value)))
        print(int(str(dut.nn_model.layer2_out_7_V_reg_244.value)))
        print('---Output from RelU----')
        print(int(str(dut.nn_model.layer3_out_0_V_reg_249.value)))
        print(int(str(dut.nn_model.layer3_out_1_V_reg_254.value)))
        print(int(str(dut.nn_model.layer3_out_2_V_reg_259.value)))
        print(int(str(dut.nn_model.layer3_out_3_V_reg_264.value)))
        print(int(str(dut.nn_model.layer3_out_4_V_reg_269.value)))
        print(int(str(dut.nn_model.layer3_out_5_V_reg_274.value)))
        print(int(str(dut.nn_model.layer3_out_6_V_reg_279.value)))
        print(int(str(dut.nn_model.layer3_out_7_V_reg_284.value)))
        print("---Output from HiddenLayer 2----")
        print(int(str(dut.nn_model.layer4_out_0_V_reg_289.value)))
        print(int(str(dut.nn_model.layer4_out_1_V_reg_294.value)))
        print(int(str(dut.nn_model.layer4_out_2_V_reg_299.value)))
        print(int(str(dut.nn_model.layer4_out_3_V_reg_304.value)))
        print("---Output from Relu 2----")
        print(int(str(dut.nn_model.layer5_out_0_V_reg_309.value)))
        print(int(str(dut.nn_model.layer5_out_1_V_reg_314.value)))
        print(int(str(dut.nn_model.layer5_out_2_V_reg_319.value)))
        print(int(str(dut.nn_model.layer5_out_3_V_reg_324.value)))
        print("---Output from OutputLayer----")
        print(int(str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_address0.value)))
        print(int(str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.sigmoid_table1_q0.value)))
        print(int(str(dut.nn_model.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85.ap_return.value)))

        print(int(str(dut.nn_model.layer6_out_0_V_reg_329.value)))
        print("---Prediction----")
        print(int(str(dut.nn_model.state_probability.value)))
        print(int(str(dut.inference_prob.value)))
        print(int(str(dut.inference_prob.value),2)/2**12)
        print(dut.inference_state.value)
        print(dut.inference_prob.value)
        print("#######################\n#######################")

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
        







# 655099933
# ---Output from HiddenLayer 1----
# 111111111010110110
# 100010111111
# 111111011101011101
# 111111100110000000
# 111111110011111011
# 111111101100000001
# 1101011000
# 1110010000
# ---Output from RelU----
# 0
# 100010111111
# 0
# 0
# 0
# 0
# 1101011000
# 1110010000
# ---Output from HiddenLayer 2----
# 111111111011001011
# 1010111110010
# 111111111000001010
# 1011111100001
# ---Output from Relu 2----
# 0
# 1010111110010
# 0
# 1011111100001
# ---Output from OutputLayer----
# 11111001
# 10000
# 1000000
# 111011111000010000
# ---Prediction----
# 1000000
# 1000000
# 0.015625
# 0
# 000000000001000000