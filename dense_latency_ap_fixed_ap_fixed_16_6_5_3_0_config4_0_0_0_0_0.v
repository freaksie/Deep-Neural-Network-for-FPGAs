// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0 (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_ce
);


input   ap_clk;
input   ap_rst;
localparam PARAM_WIDTH = 18;
localparam DATA_WIDTH = 27;
localparam DSPOUT_WIDTH = 39;
input  [DATA_WIDTH - 1:0] data_0_V_read;
input  [DATA_WIDTH - 1:0] data_1_V_read;
input  [DATA_WIDTH - 1:0] data_2_V_read;
input  [DATA_WIDTH - 1:0] data_3_V_read;
input  [DATA_WIDTH - 1:0] data_4_V_read;
input  [DATA_WIDTH - 1:0] data_5_V_read;
input  [DATA_WIDTH - 1:0] data_6_V_read;
input  [DATA_WIDTH - 1:0] data_7_V_read;
output  [DATA_WIDTH - 1:0] ap_return_0;
output  [DATA_WIDTH - 1:0] ap_return_1;
output  [DATA_WIDTH - 1:0] ap_return_2;
output  [DATA_WIDTH - 1:0] ap_return_3;
input   ap_ce;

reg signed [DATA_WIDTH - 1:0] return_0;
reg signed [DATA_WIDTH - 1:0] return_1;
reg signed [DATA_WIDTH - 1:0] return_2;
reg signed [DATA_WIDTH - 1:0] return_3;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg  signed [DATA_WIDTH - 1:0] data_7_V_read11_reg_3987;
reg  signed [DATA_WIDTH - 1:0] data_0_V_read_2_reg_4000; 
reg  signed [DATA_WIDTH - 1:0] data_1_V_read_2_reg_4001; 
reg  signed [DATA_WIDTH - 1:0] data_2_V_read_2_reg_4002; 
reg  signed [DATA_WIDTH - 1:0] data_3_V_read_2_reg_4003; 
reg  signed [DATA_WIDTH - 1:0] data_6_V_read_2_reg_3995;
reg  signed [DATA_WIDTH - 1:0] data_5_V_read_2_reg_4003;
reg  signed [DATA_WIDTH - 1:0] data_4_V_read_2_reg_4009;

//Multiplier buffer
reg  signed [DSPOUT_WIDTH - 1:0] tmp_1_0_0_reg_4017;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_0_1_reg_4022;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_0_2_reg_4027;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_4_0_3_reg_4032;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_1_reg_4037;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_7_1_1_reg_4042;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_1_2_reg_4047;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_1_3_reg_4052;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_s_2_0_reg_4057;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_2_1_reg_4062;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_2_2_reg_4067;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_2_3_reg_4072;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_3_3_0_reg_4077;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_3_1_reg_4082;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_3_2_reg_4087;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_3_3_reg_4092;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_9_4_0_reg_4097;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_4_1_reg_4102;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_11_4_2_reg_4107;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_13_4_3_reg_4112;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_5_reg_4117;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_5_1_reg_4122;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_5_2_reg_4127;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_15_5_3_reg_4132;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_6_reg_4137;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_18_6_1_reg_4142;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_19_6_2_reg_4147;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_21_6_3_reg_4152;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_17_7_reg_4157;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_24_7_2_reg_4162;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_26_7_3_reg_4167;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_23_7_1_fu_3725_p4;

reg  signed [DSPOUT_WIDTH - 1:0] node0_0;
reg  signed [DSPOUT_WIDTH - 1:0] node0_1;
reg  signed [DSPOUT_WIDTH - 1:0] node0_2;
reg  signed [DSPOUT_WIDTH - 1:0] node0_3;
reg  signed [DSPOUT_WIDTH - 1:0] node1_0;
reg  signed [DSPOUT_WIDTH - 1:0] node1_1;
reg  signed [DSPOUT_WIDTH - 1:0] node1_2;
reg  signed [DSPOUT_WIDTH - 1:0] node1_3;
reg  signed [DSPOUT_WIDTH - 1:0] node2_0;
reg  signed [DSPOUT_WIDTH - 1:0] node2_1;
reg  signed [DSPOUT_WIDTH - 1:0] node2_2;
reg  signed [DSPOUT_WIDTH - 1:0] node2_3;
reg  signed [DSPOUT_WIDTH - 1:0] node3_0;
reg  signed [DSPOUT_WIDTH - 1:0] node3_1;
reg  signed [DSPOUT_WIDTH - 1:0] node3_2;
reg  signed [DSPOUT_WIDTH - 1:0] node3_3;
reg  signed [DSPOUT_WIDTH - 1:0] node4_0;
reg  signed [DSPOUT_WIDTH - 1:0] node4_1;
reg  signed [DSPOUT_WIDTH - 1:0] node4_2;
reg  signed [DSPOUT_WIDTH - 1:0] node4_3;
reg  signed [DSPOUT_WIDTH - 1:0] node5_0;
reg  signed [DSPOUT_WIDTH - 1:0] node5_1;
reg  signed [DSPOUT_WIDTH - 1:0] node5_2;
reg  signed [DSPOUT_WIDTH - 1:0] node5_3;
reg  signed [DSPOUT_WIDTH - 1:0] node6_0;
reg  signed [DSPOUT_WIDTH - 1:0] node6_1;
reg  signed [DSPOUT_WIDTH - 1:0] node6_2;
reg  signed [DSPOUT_WIDTH - 1:0] node6_3;
reg  signed [DSPOUT_WIDTH - 1:0] node7_0;
reg  signed [DSPOUT_WIDTH - 1:0] node7_1;
reg  signed [DSPOUT_WIDTH - 1:0] node7_2;
reg  signed [DSPOUT_WIDTH - 1:0] node7_3;

wire signed [DSPOUT_WIDTH - 1:0] node0_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node0_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node0_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node0_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node1_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node1_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node1_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node1_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node2_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node2_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node2_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node2_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node3_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node3_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node3_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node3_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node4_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node4_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node4_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node4_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node5_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node5_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node5_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node5_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node6_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node6_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node6_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node6_3_w;
wire signed [DSPOUT_WIDTH - 1:0] node7_0_w;
wire signed [DSPOUT_WIDTH - 1:0] node7_1_w;
wire signed [DSPOUT_WIDTH - 1:0] node7_2_w;
wire signed [DSPOUT_WIDTH - 1:0] node7_3_w;
wire signed [DATA_WIDTH - 1:0] tmp_fu_3769_p2;
wire signed [DATA_WIDTH - 1:0] tmp15_fu_3784_p2;
wire signed [DATA_WIDTH - 1:0] tmp21_fu_3790_p2;
reg  signed [DATA_WIDTH - 1:0] tmp21_reg_4182;
wire signed [DATA_WIDTH - 1:0] tmp22_fu_3804_p2;
wire signed [DATA_WIDTH - 1:0] tmp29_fu_3819_p2;
wire    ap_block_pp0_stage0;
wire  signed [DATA_WIDTH - 1:0] r_V_6_cast2_fu_3607_p1;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_fu_221_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_0_1_fu_215_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_0_2_fu_197_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_0_3_fu_3292_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_1_fu_223_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_1_1_fu_203_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_1_2_fu_210_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_1_3_fu_219_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_2_fu_213_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_2_1_fu_204_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_2_2_fu_212_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_2_3_fu_217_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_3_fu_192_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_3_1_fu_202_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_3_2_fu_214_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_3_3_fu_198_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_4_fu_3507_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_4_1_fu_216_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_4_2_fu_196_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_4_3_fu_207_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_5_fu_195_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_5_1_fu_208_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_5_2_fu_206_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_5_3_fu_194_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_6_fu_211_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_6_1_fu_3636_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_6_2_fu_193_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_6_3_fu_200_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_7_fu_205_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_7_1_fu_3719_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_7_2_fu_218_p2;
wire  signed [DSPOUT_WIDTH - 1:0] r_V_8_7_3_fu_222_p2;
wire  signed [DATA_WIDTH - 1:0] tmp_2_fu_3470_p1;
wire  signed [DATA_WIDTH - 1:0] tmp9_fu_3759_p2;
wire  signed [DATA_WIDTH - 1:0] tmp10_fu_3763_p2;
wire  signed [DATA_WIDTH - 1:0] tmp16_fu_3775_p2;
wire  signed [DATA_WIDTH - 1:0] tmp17_fu_3780_p2;
wire  signed [DATA_WIDTH - 1:0] tmp23_fu_3796_p2;
wire  signed [DATA_WIDTH - 1:0] tmp24_fu_3800_p2;
wire  signed [DATA_WIDTH - 1:0] tmp30_fu_3810_p2;
wire  signed [DATA_WIDTH - 1:0] tmp31_fu_3815_p2;
wire  signed [DATA_WIDTH - 1:0] tmp14_fu_3857_p2;
wire  signed [DATA_WIDTH - 1:0] tmp12_fu_3852_p2;
wire  signed [DATA_WIDTH - 1:0] tmp13_fu_3862_p2;
wire  signed [DATA_WIDTH - 1:0] tmp11_fu_3867_p2;
wire  signed [DATA_WIDTH - 1:0] tmp21_cast_fu_3882_p1;
wire  signed [DATA_WIDTH - 1:0] tmp20_fu_3885_p2;
wire  signed [DATA_WIDTH - 1:0] tmp19_fu_3878_p2;
wire  signed [DATA_WIDTH - 1:0] tmp18_fu_3895_p2;
wire  signed [DATA_WIDTH - 1:0] tmp28_fu_3911_p2;
wire  signed [DATA_WIDTH - 1:0] tmp26_fu_3906_p2;
wire  signed [DATA_WIDTH - 1:0] tmp27_fu_3917_p2;
wire  signed [DATA_WIDTH - 1:0] tmp25_fu_3923_p2;
wire  signed [DATA_WIDTH - 1:0] tmp35_fu_3940_p2;
wire  signed [DATA_WIDTH - 1:0] tmp33_fu_3934_p2;
wire  signed [DATA_WIDTH - 1:0] tmp34_fu_3946_p2;
wire  signed [DATA_WIDTH - 1:0] tmp32_fu_3952_p2;
wire  signed [DATA_WIDTH - 1:0] res_0_V_write_assign_fu_3873_p2;
wire  signed [DATA_WIDTH - 1:0] acc_1_V_fu_3901_p2;
wire  signed [DATA_WIDTH - 1:0] acc_2_V_fu_3929_p2;
wire  signed [DATA_WIDTH - 1:0] acc_3_V_fu_3958_p2;
reg  signed [DATA_WIDTH - 1:0] data_0_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_1_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_2_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_3_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_4_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_5_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_6_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] data_7_V_read_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_0_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_1_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_2_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_3_int_reg;
reg    ap_ce_reg;

reg signed [PARAM_WIDTH - 1:0] w0_0;
reg signed [PARAM_WIDTH - 1:0] w0_1;
reg signed [PARAM_WIDTH - 1:0] w0_2;
reg signed [PARAM_WIDTH - 1:0] w0_3;
reg signed [PARAM_WIDTH - 1:0] w1_0;
reg signed [PARAM_WIDTH - 1:0] w1_1;
reg signed [PARAM_WIDTH - 1:0] w1_2;
reg signed [PARAM_WIDTH - 1:0] w1_3;
reg signed [PARAM_WIDTH - 1:0] w2_0;
reg signed [PARAM_WIDTH - 1:0] w2_1;
reg signed [PARAM_WIDTH - 1:0] w2_2;
reg signed [PARAM_WIDTH - 1:0] w2_3;
reg signed [PARAM_WIDTH - 1:0] w3_0;
reg signed [PARAM_WIDTH - 1:0] w3_1;
reg signed [PARAM_WIDTH - 1:0] w3_2;
reg signed [PARAM_WIDTH - 1:0] w3_3;
reg signed [PARAM_WIDTH - 1:0] w4_0;
reg signed [PARAM_WIDTH - 1:0] w4_1;
reg signed [PARAM_WIDTH - 1:0] w4_2;
reg signed [PARAM_WIDTH - 1:0] w4_3;
reg signed [PARAM_WIDTH - 1:0] w5_0;
reg signed [PARAM_WIDTH - 1:0] w5_1;
reg signed [PARAM_WIDTH - 1:0] w5_2;
reg signed [PARAM_WIDTH - 1:0] w5_3;
reg signed [PARAM_WIDTH - 1:0] w6_0;
reg signed [PARAM_WIDTH - 1:0] w6_1;
reg signed [PARAM_WIDTH - 1:0] w6_2;
reg signed [PARAM_WIDTH - 1:0] w6_3;
reg signed [PARAM_WIDTH - 1:0] w7_0;
reg signed [PARAM_WIDTH - 1:0] w7_1;
reg signed [PARAM_WIDTH - 1:0] w7_2;
reg signed [PARAM_WIDTH - 1:0] w7_3;
reg signed [DATA_WIDTH - 1:0] b0;
reg signed [DATA_WIDTH - 1:0] b1;
reg signed [DATA_WIDTH - 1:0] b2;
reg signed [DATA_WIDTH - 1:0] b3;


// summation buffer
reg signed [DATA_WIDTH - 1:0] sum_0_0;
reg signed [DATA_WIDTH - 1:0] sum_1_0;
reg signed [DATA_WIDTH - 1:0] sum_0_1;
reg signed [DATA_WIDTH - 1:0] sum_1_1;
reg signed [DATA_WIDTH - 1:0] sum_0_2;
reg signed [DATA_WIDTH - 1:0] sum_1_2;
reg signed [DATA_WIDTH - 1:0] sum_0_3;
reg signed [DATA_WIDTH - 1:0] sum_1_3;

reg signed [DATA_WIDTH - 1:0] sum_01_0;
reg signed [DATA_WIDTH - 1:0] sum_23_0;
reg signed [DATA_WIDTH - 1:0] sum_45_0;
reg signed [DATA_WIDTH - 1:0] sum_67_0;

reg signed [DATA_WIDTH - 1:0] sum_01_1;
reg signed [DATA_WIDTH - 1:0] sum_23_1;
reg signed [DATA_WIDTH - 1:0] sum_45_1;
reg signed [DATA_WIDTH - 1:0] sum_67_1;

reg signed [DATA_WIDTH - 1:0] sum_01_2;
reg signed [DATA_WIDTH - 1:0] sum_23_2;
reg signed [DATA_WIDTH - 1:0] sum_45_2;
reg signed [DATA_WIDTH - 1:0] sum_67_2;

reg signed [DATA_WIDTH - 1:0] sum_01_3;
reg signed [DATA_WIDTH - 1:0] sum_23_3;
reg signed [DATA_WIDTH - 1:0] sum_45_3;
reg signed [DATA_WIDTH - 1:0] sum_67_3;

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
    w0_0 <= 253961;
    w0_1 <= 253960;
    w0_2 <= 255165;
    w0_3 <= 259527;
    w1_0 <= 8167;
    w1_1 <= 8167;
    w1_2 <= 8167;
    w1_3 <= 259631;
    w2_0 <= 620;
    w2_1 <= 1959;
    w2_2 <= 260340;
    w2_3 <= 260193;
    w3_0 <= 8166;
    w3_1 <= 7110;
    w3_2 <= 8166;
    w3_3 <= 259897;
    w4_0 <= 253960;
    w4_1 <= 255886;
    w4_2 <= 253959;
    w4_3 <= 261277;
    w5_0 <= 2882;
    w5_1 <= 3777;
    w5_2 <= 4252;
    w5_3 <= 1516;
    w6_0 <= 261763;
    w6_1 <= 261448;
    w6_2 <= 261466;
    w6_3 <= 2623;
    w7_0 <= 257077;
    w7_1 <= 256191;
    w7_2 <= 255158;
    w7_3 <= 260487;
    b0   <= 95335;
    b1   <= 81629;
    b2   <= 86003;
    b3   <= 0;
end 
end

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= res_0_V_write_assign_fu_3873_p2;
        ap_return_1_int_reg <= acc_1_V_fu_3901_p2;
        ap_return_2_int_reg <= acc_2_V_fu_3929_p2;
        ap_return_3_int_reg <= acc_3_V_fu_3958_p2;
    end
end

always @ (posedge ap_clk) begin
        data_0_V_read_2_reg_4000 <= data_0_V_read;
        data_1_V_read_2_reg_4001 <= data_1_V_read;
        data_2_V_read_2_reg_4002 <= data_2_V_read;
        data_3_V_read_2_reg_4003 <= data_3_V_read;
        data_4_V_read_2_reg_4009 <= data_4_V_read;
        data_5_V_read_2_reg_4003 <= data_5_V_read;
        data_6_V_read_2_reg_3995 <= data_6_V_read;
        data_7_V_read11_reg_3987 <= data_7_V_read;
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce_reg) & (1'b0 == ap_block_pp0_stage0_11001))) begin

        //Node 0
        sum_0_0 <= tmp_fu_3769_p2;  //0-3
        sum_01_0 <= tmp9_fu_3759_p2;
        sum_23_0 <= tmp10_fu_3763_p2;
        sum_1_0 <= tmp11_fu_3867_p2; //4-7
        sum_45_0 <= tmp12_fu_3852_p2;
        sum_67_0 <= tmp13_fu_3862_p2;
        //Node 1
        sum_0_1 <= tmp15_fu_3784_p2;  
        sum_01_1 <= tmp16_fu_3775_p2;
        sum_23_1 <= tmp17_fu_3780_p2;
        sum_1_1 <= tmp18_fu_3895_p2;  
        sum_45_1 <= tmp19_fu_3878_p2;
        sum_67_1 <= tmp20_fu_3885_p2;
        //Node 2
        sum_0_2 <= tmp22_fu_3804_p2;   
        sum_01_2 <= tmp23_fu_3796_p2;
        sum_23_2 <= tmp24_fu_3800_p2;
        sum_1_2 <= tmp25_fu_3923_p2;   
        sum_45_2 <= tmp26_fu_3906_p2;
        sum_67_2 <= tmp27_fu_3917_p2;
        //Node 3
        sum_0_3 <= tmp29_fu_3819_p2;  
        sum_01_3 <= tmp30_fu_3810_p2;
        sum_23_3 <= tmp31_fu_3815_p2;
        sum_1_3 <= tmp32_fu_3952_p2;  
        sum_45_3 <= tmp33_fu_3934_p2;
        sum_67_3 <= tmp34_fu_3946_p2;

        //Multipliers
        tmp_11_4_2_reg_4107 <= r_V_8_4_2_fu_196_p2;
        node4_2 <= tmp_11_4_2_reg_4107;
        tmp_13_4_3_reg_4112 <= r_V_8_4_3_fu_207_p2;
        node4_3 <= tmp_13_4_3_reg_4112;
        tmp_15_5_3_reg_4132 <= r_V_8_5_3_fu_194_p2;
        node5_3 <= tmp_15_5_3_reg_4132;
        tmp_17_0_1_reg_4022 <= r_V_8_0_1_fu_215_p2;
        node0_1 <= tmp_17_0_1_reg_4022;
        tmp_17_0_2_reg_4027 <= r_V_8_0_2_fu_197_p2;
        node0_2 <= tmp_17_0_2_reg_4027;
        tmp_17_1_2_reg_4047 <= r_V_8_1_2_fu_210_p2;
        node1_2 <= tmp_17_1_2_reg_4047;
        tmp_17_1_3_reg_4052 <= r_V_8_1_3_fu_219_p2;
        node1_3 <= tmp_17_1_3_reg_4052;
        tmp_17_1_reg_4037 <= r_V_8_1_fu_223_p2;
        node1_0 <= tmp_17_1_reg_4037;
        tmp_17_2_1_reg_4062 <= r_V_8_2_1_fu_204_p2;
        node2_1 <= tmp_17_2_1_reg_4062;
        tmp_17_2_2_reg_4067 <= r_V_8_2_2_fu_212_p2;
        node2_2 <= tmp_17_2_2_reg_4067;
        tmp_17_2_3_reg_4072 <= r_V_8_2_3_fu_217_p2;
        node2_3 <=  tmp_17_2_3_reg_4072;
        tmp_17_3_1_reg_4082 <= r_V_8_3_1_fu_202_p2;
        node3_1 <= tmp_17_3_1_reg_4082;
        tmp_17_3_2_reg_4087 <= r_V_8_3_2_fu_214_p2;
        node3_2 <= tmp_17_3_2_reg_4087;
        tmp_17_3_3_reg_4092 <= r_V_8_3_3_fu_198_p2;
        node3_3 <= tmp_17_3_3_reg_4092;
        tmp_17_4_1_reg_4102 <= r_V_8_4_1_fu_216_p2;
        node4_1 <= tmp_17_4_1_reg_4102;
        tmp_17_5_1_reg_4122 <= r_V_8_5_1_fu_208_p2;
        node5_1 <= tmp_17_5_1_reg_4122;
        tmp_17_5_2_reg_4127 <= r_V_8_5_2_fu_206_p2;
        node5_2 <= tmp_17_5_2_reg_4127;
        tmp_17_5_reg_4117 <= r_V_8_5_fu_195_p2;
        node5_0 <= tmp_17_5_reg_4117;
        tmp_17_6_reg_4137 <= r_V_8_6_fu_211_p2;
        node6_0 <= tmp_17_6_reg_4137;
        tmp_17_7_reg_4157 <= r_V_8_7_fu_205_p2;
        node7_0 <= tmp_17_7_reg_4157;
        tmp_18_6_1_reg_4142 <= r_V_8_6_1_fu_3636_p2;
        node6_1 <= tmp_18_6_1_reg_4142;
        tmp_19_6_2_reg_4147 <= r_V_8_6_2_fu_193_p2;
        node6_2 <= tmp_19_6_2_reg_4147;
        tmp_1_0_0_reg_4017 <= r_V_8_fu_221_p2;
        node0_0 <= tmp_1_0_0_reg_4017;
        tmp_21_6_3_reg_4152 <= r_V_8_6_3_fu_200_p2;
        node6_3 <= tmp_21_6_3_reg_4152;
        tmp_24_7_2_reg_4162 <= r_V_8_7_2_fu_218_p2;
        node7_2 <= tmp_24_7_2_reg_4162;
        tmp_26_7_3_reg_4167 <= r_V_8_7_3_fu_222_p2;
        node7_3 <= tmp_26_7_3_reg_4167;
        tmp_3_3_0_reg_4077 <= r_V_8_3_fu_192_p2;
        node3_0 <= tmp_3_3_0_reg_4077;
        tmp_4_0_3_reg_4032 <= r_V_8_0_3_fu_3292_p2;
        node0_3 <= tmp_4_0_3_reg_4032;
        tmp_7_1_1_reg_4042 <= r_V_8_1_1_fu_203_p2;
        node1_1 <= tmp_7_1_1_reg_4042;
        tmp_9_4_0_reg_4097 <= r_V_8_4_fu_3507_p2;
        node4_0 <= tmp_9_4_0_reg_4097;
        tmp_s_2_0_reg_4057 <= r_V_8_2_fu_213_p2;
        node2_0 <= tmp_s_2_0_reg_4057;
        tmp_23_7_1_fu_3725_p4 <= r_V_8_7_1_fu_3719_p2;
        node7_1 <= tmp_23_7_1_fu_3725_p4;
    end
end

assign return_0 = ap_return_0_int_reg;
assign return_1 = ap_return_1_int_reg;
assign return_2 = ap_return_2_int_reg;
assign return_3 = ap_return_3_int_reg;

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign node0_0_w = node0_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_1_w = node0_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_2_w = node0_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_3_w = node0_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_0_w = node1_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_1_w = node1_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_2_w = node1_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_3_w = node1_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node2_0_w = node2_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node2_1_w = node2_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node2_2_w = node2_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node2_3_w = node2_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node3_0_w = node3_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node3_1_w = node3_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node3_2_w = node3_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node3_3_w = node3_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node4_0_w = node4_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node4_1_w = node4_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node4_2_w = node4_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node4_3_w = node4_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node5_0_w = node5_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node5_1_w = node5_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node5_2_w = node5_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node5_3_w = node5_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node6_0_w = node6_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node6_1_w = node6_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node6_2_w = node6_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node6_3_w = node6_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node7_0_w = node7_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node7_1_w = node7_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node7_2_w = node7_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node7_3_w = node7_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];


assign r_V_8_3_1_fu_202_p2 = (data_3_V_read_2_reg_4003 * w3_1);

assign r_V_8_3_2_fu_214_p2 = (data_3_V_read_2_reg_4003 * w3_2);

assign r_V_8_3_3_fu_198_p2 = (data_3_V_read_2_reg_4003 * w3_3);

assign r_V_8_3_fu_192_p2 = (data_3_V_read_2_reg_4003 * w3_0);

assign r_V_8_4_1_fu_216_p2 = (data_4_V_read_2_reg_4009 * w4_1);

assign r_V_8_4_2_fu_196_p2 = (data_4_V_read_2_reg_4009 * w4_2);

assign r_V_8_4_3_fu_207_p2 = (data_4_V_read_2_reg_4009 * w4_3);

assign r_V_8_4_fu_3507_p2 = (w4_0 * data_4_V_read_2_reg_4009);

assign r_V_8_5_1_fu_208_p2 = (data_5_V_read_2_reg_4003 * w5_1);

assign r_V_8_5_2_fu_206_p2 = (data_5_V_read_2_reg_4003 * w5_2);

assign r_V_8_5_3_fu_194_p2 = (data_5_V_read_2_reg_4003 * w5_3);

assign r_V_8_5_fu_195_p2 = (data_5_V_read_2_reg_4003 * w5_0);

assign r_V_8_6_1_fu_3636_p2 = (w6_1 * data_6_V_read_2_reg_3995);

assign r_V_8_6_2_fu_193_p2 = (data_6_V_read_2_reg_3995 * w6_2);

assign r_V_8_6_3_fu_200_p2 = (data_6_V_read_2_reg_3995 * w6_3);

assign r_V_8_6_fu_211_p2 = (data_6_V_read_2_reg_3995 * w6_0);

assign r_V_8_7_1_fu_3719_p2 = (w7_1 * data_7_V_read11_reg_3987);

assign r_V_8_7_2_fu_218_p2 = (data_7_V_read11_reg_3987 * w7_2);

assign r_V_8_7_3_fu_222_p2 = (data_7_V_read11_reg_3987 * w7_3);

assign r_V_8_7_fu_205_p2 = (data_7_V_read11_reg_3987 * w7_0);

assign r_V_8_fu_221_p2 = (data_0_V_read_2_reg_4000 * w0_0);

assign r_V_8_0_1_fu_215_p2 = (data_0_V_read_2_reg_4000 * w0_1);

assign r_V_8_0_2_fu_197_p2 = (data_0_V_read_2_reg_4000 * w0_2);

assign r_V_8_0_3_fu_3292_p2 = (w0_3 * data_0_V_read_2_reg_4000);

assign r_V_8_1_1_fu_203_p2 = (data_1_V_read_2_reg_4001 * w1_1);

assign r_V_8_1_2_fu_210_p2 = (data_1_V_read_2_reg_4001 * w1_2);

assign r_V_8_1_3_fu_219_p2 = (data_1_V_read_2_reg_4001 * w1_3);

assign r_V_8_1_fu_223_p2 = (data_1_V_read_2_reg_4001 * w1_0);

assign r_V_8_2_1_fu_204_p2 = (data_2_V_read_2_reg_4002 * w2_1);

assign r_V_8_2_2_fu_212_p2 = (data_2_V_read_2_reg_4002 * w2_2);

assign r_V_8_2_3_fu_217_p2 = (data_2_V_read_2_reg_4002 * w2_3);

assign r_V_8_2_fu_213_p2 = (data_2_V_read_2_reg_4002 * w2_0);



//Summation 3
assign acc_3_V_fu_3958_p2 = (sum_0_3 + sum_1_3);

assign tmp29_fu_3819_p2 = (sum_01_3 + sum_23_3);

assign tmp32_fu_3952_p2 = (sum_45_3 + sum_67_3);

assign tmp30_fu_3810_p2 = (node1_3_w + node0_3_w);

assign tmp31_fu_3815_p2 = (node3_3_w + node2_3_w);

assign tmp33_fu_3934_p2 = (node5_3_w + node4_3_w);

assign tmp34_fu_3946_p2 = (node6_3_w + tmp35_fu_3940_p2);

assign tmp35_fu_3940_p2 = (node7_3_w + b3);


//Summation 2
assign acc_2_V_fu_3929_p2 = (sum_0_2 + sum_1_2);

assign tmp22_fu_3804_p2 = (sum_01_2 + sum_23_2);

assign tmp25_fu_3923_p2 = (sum_45_2 + sum_67_2);

assign tmp23_fu_3796_p2 = (node1_2_w + node0_2_w);

assign tmp24_fu_3800_p2 = (node3_2_w + node2_2_w);

assign tmp26_fu_3906_p2 = (node5_2_w + node4_2_w);

assign tmp27_fu_3917_p2 = (node6_2_w + tmp28_fu_3911_p2);

assign tmp28_fu_3911_p2 = (node7_2_w + b2);


//Node 1
assign acc_1_V_fu_3901_p2 = (sum_0_1 + sum_1_1);

assign tmp15_fu_3784_p2 = (sum_01_1 + sum_23_1);

assign tmp18_fu_3895_p2 = (sum_45_1 + sum_67_1);

assign tmp16_fu_3775_p2 = (node1_1_w + node0_1_w);

assign tmp17_fu_3780_p2 = (node3_1_w + node2_1_w);

assign tmp19_fu_3878_p2 = (node5_1_w + node4_1_w);

assign tmp20_fu_3885_p2 = (node6_1_w + tmp21_fu_3790_p2);

assign tmp21_fu_3790_p2 = (node7_1_w + b1);


//Node 0
assign res_0_V_write_assign_fu_3873_p2 = (sum_0_0 + sum_1_0);

assign tmp_fu_3769_p2 = (sum_01_0 + sum_23_0);

assign tmp11_fu_3867_p2 = (sum_45_0 + sum_67_0);

assign tmp9_fu_3759_p2 = (node1_0_w + node0_0_w);

assign tmp10_fu_3763_p2 = (node3_0_w + node2_0_w);

assign tmp12_fu_3852_p2 = (node5_0_w + node4_0_w);

assign tmp13_fu_3862_p2 = (node6_0_w + tmp14_fu_3857_p2);

assign tmp14_fu_3857_p2 = (node7_0_w + b0);

assign ap_return_0 = return_0;

assign ap_return_1 = return_1;

assign ap_return_2 = return_2;

assign ap_return_3 = return_3;

endmodule //dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0