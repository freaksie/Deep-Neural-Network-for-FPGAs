// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0 (
        ap_clk,
        ap_rst,
        data_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_ce
);


input   ap_clk;
input   ap_rst;
localparam PARAM_WIDTH = 18;
localparam DATA_WIDTH = 27;
localparam DSPOUT_WIDTH = 39;
input   [(DATA_WIDTH*2)-1:0] data_V_read;
output  [DATA_WIDTH - 1:0] ap_return_0;
output  [DATA_WIDTH - 1:0] ap_return_1;
output  [DATA_WIDTH - 1:0] ap_return_2;
output  [DATA_WIDTH - 1:0] ap_return_3;
output  [DATA_WIDTH - 1:0] ap_return_4;
output  [DATA_WIDTH - 1:0] ap_return_5;
output  [DATA_WIDTH - 1:0] ap_return_6;
output  [DATA_WIDTH - 1:0] ap_return_7;
input   ap_ce;

reg[DATA_WIDTH - 1:0] return_0;
reg[DATA_WIDTH - 1:0] return_1;
reg[DATA_WIDTH - 1:0] return_2;
reg[DATA_WIDTH - 1:0] return_3;
reg[DATA_WIDTH - 1:0] return_4;
reg[DATA_WIDTH - 1:0] return_5;
reg[DATA_WIDTH - 1:0] return_6;
reg[DATA_WIDTH - 1:0] return_7;
 
reg  signed [DATA_WIDTH - 1:0] tmp_reg_1562;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;

// Multi-Buffer
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_0_reg_1568;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_1_reg_1573;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_2_reg_1578;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_3_reg_1583;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_4_reg_1588;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_5_fu_1410_p4;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_6_reg_1593;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_0_7_reg_1598;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_reg_1603;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_1_reg_1608;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_2_reg_1613;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_3_reg_1618;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_4_reg_1623;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_5_reg_1628;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_6_reg_1633;
reg  signed [DSPOUT_WIDTH - 1:0] tmp_33_1_7_reg_1638;

reg  signed [DSPOUT_WIDTH - 1:0] node0_0;
reg  signed [DSPOUT_WIDTH - 1:0] node0_1;
reg  signed [DSPOUT_WIDTH - 1:0] node0_2;
reg  signed [DSPOUT_WIDTH - 1:0] node0_3;
reg  signed [DSPOUT_WIDTH - 1:0] node0_4;
reg  signed [DSPOUT_WIDTH - 1:0] node0_5;
reg  signed [DSPOUT_WIDTH - 1:0] node0_6;
reg  signed [DSPOUT_WIDTH - 1:0] node0_7;
reg  signed [DSPOUT_WIDTH - 1:0] node1_0;
reg  signed [DSPOUT_WIDTH - 1:0] node1_1;
reg  signed [DSPOUT_WIDTH - 1:0] node1_2;
reg  signed [DSPOUT_WIDTH - 1:0] node1_3;
reg  signed [DSPOUT_WIDTH - 1:0] node1_4;
reg  signed [DSPOUT_WIDTH - 1:0] node1_5;
reg  signed [DSPOUT_WIDTH - 1:0] node1_6;
reg  signed [DSPOUT_WIDTH - 1:0] node1_7;

wire  signed [DATA_WIDTH - 1:0] node0_0_w;
wire  signed [DATA_WIDTH - 1:0] node0_1_w;
wire  signed [DATA_WIDTH - 1:0] node0_2_w;
wire  signed [DATA_WIDTH - 1:0] node0_3_w;
wire  signed [DATA_WIDTH - 1:0] node0_4_w;
wire  signed [DATA_WIDTH - 1:0] node0_5_w;
wire  signed [DATA_WIDTH - 1:0] node0_6_w;
wire  signed [DATA_WIDTH - 1:0] node0_7_w;
wire  signed [DATA_WIDTH - 1:0] node1_0_w;
wire  signed [DATA_WIDTH - 1:0] node1_1_w;
wire  signed [DATA_WIDTH - 1:0] node1_2_w;
wire  signed [DATA_WIDTH - 1:0] node1_3_w;
wire  signed [DATA_WIDTH - 1:0] node1_4_w;
wire  signed [DATA_WIDTH - 1:0] node1_5_w;
wire  signed [DATA_WIDTH - 1:0] node1_6_w;
wire  signed [DATA_WIDTH - 1:0] node1_7_w;

wire   ap_block_pp0_stage0;
wire signed [DSPOUT_WIDTH - 1:0] r_V_s_fu_110_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_1_fu_104_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_2_fu_107_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_3_fu_101_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_4_fu_103_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_6_fu_105_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_7_fu_102_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_fu_108_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_1_fu_99_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_2_fu_109_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_3_fu_106_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_4_fu_98_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_5_fu_113_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_6_fu_111_p2;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_1_7_fu_112_p2;
wire signed [DATA_WIDTH - 1:0] p_shl_fu_1382_p3;
wire signed [DATA_WIDTH - 1:0] p_shl1_fu_1393_p3;
wire signed [DATA_WIDTH - 1:0] p_shl_cast_fu_1389_p1;
wire signed [DATA_WIDTH - 1:0] p_shl1_cast_fu_1400_p1;
wire signed [DSPOUT_WIDTH - 1:0] r_V_10_0_5_fu_1404_p2;
wire signed [DATA_WIDTH - 1:0] tmp2_fu_1426_p2;
wire signed [DATA_WIDTH - 1:0] tmp3_fu_1436_p2;
wire signed [DATA_WIDTH - 1:0] tmp4_fu_1447_p2;
wire signed [DATA_WIDTH - 1:0] tmp5_fu_1457_p2;
wire signed [DATA_WIDTH - 1:0] tmp6_fu_1467_p2;
wire signed [DATA_WIDTH - 1:0] tmp7_cast_fu_1483_p1;
wire signed [DATA_WIDTH - 1:0] tmp8_fu_1493_p2;
wire signed [DATA_WIDTH - 1:0] tmp9_fu_1503_p2;
wire signed [DATA_WIDTH - 1:0] acc_0_V_fu_1441_p2;
wire signed [DATA_WIDTH - 1:0] acc_1_V_fu_1441_p2;
wire signed [DATA_WIDTH - 1:0] acc_2_V_fu_1452_p2;
wire signed [DATA_WIDTH - 1:0] acc_3_V_fu_1462_p2;
wire signed [DATA_WIDTH - 1:0] acc_4_V_fu_1472_p2;
wire signed [DATA_WIDTH - 1:0] acc_5_V_fu_1487_p2;
wire signed [DATA_WIDTH - 1:0] acc_6_V_fu_1498_p2;
wire signed [DATA_WIDTH - 1:0] acc_7_V_fu_1509_p2;
reg   ap_ce_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_0_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_1_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_2_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_3_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_4_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_5_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_6_int_reg;
reg  signed [DATA_WIDTH - 1:0] ap_return_7_int_reg;

wire signed [DATA_WIDTH  - 1:0] dataQ;
wire signed [DATA_WIDTH  - 1:0] dataI;
reg signed [PARAM_WIDTH - 1:0] w0_0;
reg signed [PARAM_WIDTH - 1:0] w0_1;
reg signed [PARAM_WIDTH - 1:0] w0_2;
reg signed [PARAM_WIDTH - 1:0] w0_3;
reg signed [PARAM_WIDTH - 1:0] w0_4;
reg signed [PARAM_WIDTH - 1:0] w0_5;
reg signed [PARAM_WIDTH - 1:0] w0_6;
reg signed [PARAM_WIDTH - 1:0] w0_7;
reg signed [PARAM_WIDTH - 1:0] w1_0;
reg signed [PARAM_WIDTH - 1:0] w1_1;
reg signed [PARAM_WIDTH - 1:0] w1_2;
reg signed [PARAM_WIDTH - 1:0] w1_3;
reg signed [PARAM_WIDTH - 1:0] w1_4;
reg signed [PARAM_WIDTH - 1:0] w1_5;
reg signed [PARAM_WIDTH - 1:0] w1_6;
reg signed [PARAM_WIDTH - 1:0] w1_7;
reg signed [DATA_WIDTH  - 1:0] b0;
reg signed [DATA_WIDTH  - 1:0] b1;
reg signed [DATA_WIDTH  - 1:0] b2;
reg signed [DATA_WIDTH  - 1:0] b3;
reg signed [DATA_WIDTH  - 1:0] b4;
reg signed [DATA_WIDTH  - 1:0] b5;
reg signed [DATA_WIDTH  - 1:0] b6;
reg signed [DATA_WIDTH  - 1:0] b7;

initial begin
w0_0 = 260178;
w0_1 = 1073;
w0_2 = 260043;
w0_3 = 1847;
w0_4 = 260243;
w0_5 = 3292;
w0_6 = 260515;
w0_7 = 3440;
w1_0 = 6765;
w1_1 = 256881;
w1_2 = 260276;
w1_3 = 256151;
w1_4 = 6827;
w1_5 = 258611;
w1_6 = 259364;
w1_7 = 6326;
b0   = 134169141;
b1   = 105751;
b2   = 0;
b3   = 119115;
b4   = 134167071;
b5   = 98826;
b6   = 0;
b7   = 134109253;
end

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

assign dataQ = data_V_read[DATA_WIDTH - 1:0];
assign dataI = data_V_read[(DATA_WIDTH*2)-1:DATA_WIDTH];


always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= acc_0_V_fu_1441_p2;
        ap_return_1_int_reg <= acc_1_V_fu_1441_p2;
        ap_return_2_int_reg <= acc_2_V_fu_1452_p2;
        ap_return_3_int_reg <= acc_3_V_fu_1462_p2;
        ap_return_4_int_reg <= acc_4_V_fu_1472_p2;
        ap_return_5_int_reg <= acc_5_V_fu_1487_p2;
        ap_return_6_int_reg <= acc_6_V_fu_1498_p2;
        ap_return_7_int_reg <= acc_7_V_fu_1509_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_33_1_7_reg_1638 <= r_V_10_1_7_fu_112_p2;
        node1_7 <= tmp_33_1_7_reg_1638;
        tmp_33_0_2_reg_1578 <= r_V_10_0_2_fu_107_p2;
        node0_2 <= tmp_33_0_2_reg_1578;
        tmp_33_0_3_reg_1583 <= r_V_10_0_3_fu_101_p2;
        node0_3 <= tmp_33_0_3_reg_1583;
        tmp_33_0_4_reg_1588 <= r_V_10_0_4_fu_103_p2;
        node0_4 <= tmp_33_0_4_reg_1588;
        tmp_33_0_6_reg_1593 <= r_V_10_0_6_fu_105_p2;
        node0_6 <= tmp_33_0_6_reg_1593;
        tmp_33_0_7_reg_1598 <= r_V_10_0_7_fu_102_p2;
        node0_7 <= tmp_33_0_7_reg_1598;
        tmp_33_1_1_reg_1608 <= r_V_10_1_1_fu_99_p2;
        node1_1 <= tmp_33_1_1_reg_1608;
        tmp_33_1_2_reg_1613 <= r_V_10_1_2_fu_109_p2;
        node1_2 <= tmp_33_1_2_reg_1613;
        tmp_33_1_3_reg_1618 <= r_V_10_1_3_fu_106_p2;
        node1_3 <= tmp_33_1_3_reg_1618;
        tmp_33_1_4_reg_1623 <= r_V_10_1_4_fu_98_p2;
        node1_4 <= tmp_33_1_4_reg_1623;
        tmp_33_1_6_reg_1633 <= r_V_10_1_6_fu_111_p2;
        node1_6 <= tmp_33_1_6_reg_1633;
        tmp_33_1_reg_1603 <= r_V_10_1_fu_108_p2;
        node1_0 <= tmp_33_1_reg_1603;
        tmp_33_1_5_reg_1628 <= r_V_10_1_5_fu_113_p2;
        node1_5 <= tmp_33_1_5_reg_1628;
        tmp_33_0_0_reg_1568 <= r_V_s_fu_110_p2;
        node0_0 <= tmp_33_0_0_reg_1568;
        tmp_33_0_1_reg_1573 <= r_V_10_0_1_fu_104_p2;
        node0_1 <= tmp_33_0_1_reg_1573;
        tmp_33_0_5_fu_1410_p4 <= r_V_10_0_5_fu_1404_p2;
        node0_5 <= tmp_33_0_5_fu_1410_p4;
    end
end

assign node0_0_w = node0_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_1_w = node0_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_2_w = node0_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_3_w = node0_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_4_w = node0_4[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_5_w = node0_5[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_6_w = node0_6[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node0_7_w = node0_7[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_0_w = node1_0[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_1_w = node1_1[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_2_w = node1_2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_3_w = node1_3[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_4_w = node1_4[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_5_w = node1_5[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_6_w = node1_6[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign node1_7_w = node1_7[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH];

assign return_0 = ap_return_0_int_reg;

assign return_1 = ap_return_1_int_reg; 

assign return_2 = ap_return_2_int_reg;

assign return_3 = ap_return_3_int_reg;

assign return_4 = ap_return_4_int_reg;

assign return_5 = ap_return_5_int_reg;

assign return_6 = ap_return_6_int_reg;

assign return_7 = ap_return_7_int_reg;

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign r_V_s_fu_110_p2 = (w0_0 * dataI);

assign r_V_10_0_1_fu_104_p2 = (w0_1 * dataI);

assign r_V_10_0_2_fu_107_p2 = (w0_2 * dataI);

assign r_V_10_0_3_fu_101_p2 = (w0_3 * dataI);

assign r_V_10_0_4_fu_103_p2 = (w0_4 * dataI);

assign r_V_10_0_5_fu_1404_p2 = (w0_5 * dataI);

assign r_V_10_0_6_fu_105_p2 = (w0_6 * dataI);

assign r_V_10_0_7_fu_102_p2 = (w0_7 * dataI);

assign r_V_10_1_fu_108_p2 = (w1_0 * dataQ);

assign r_V_10_1_1_fu_99_p2 = (w1_1 * dataQ);

assign r_V_10_1_2_fu_109_p2 = (w1_2 * dataQ);

assign r_V_10_1_3_fu_106_p2 = (w1_3 * dataQ);

assign r_V_10_1_4_fu_98_p2 = (w1_4 * dataQ);

assign r_V_10_1_5_fu_113_p2 = (w1_5 * dataQ);

assign r_V_10_1_6_fu_111_p2 = (w1_6 * dataQ);

assign r_V_10_1_7_fu_112_p2 = (w1_7 * dataQ);

assign acc_0_V_fu_1441_p2 = (node0_0_w + tmp2_fu_1426_p2);

assign tmp2_fu_1426_p2 = (b0 + node1_0_w);

assign acc_1_V_fu_1441_p2 = (node0_1_w + tmp3_fu_1436_p2);

assign tmp3_fu_1436_p2 = (b1 + node1_1_w);

assign acc_2_V_fu_1452_p2 = (node0_2_w + tmp4_fu_1447_p2);

assign tmp4_fu_1447_p2 = (b2 + node1_2_w);

assign acc_3_V_fu_1462_p2 = (node0_3_w + tmp5_fu_1457_p2);

assign tmp5_fu_1457_p2 = (b3 + node1_3_w);

assign acc_4_V_fu_1472_p2 = (node0_4_w + tmp6_fu_1467_p2);

assign tmp6_fu_1467_p2 = (b4 + node1_4_w);

assign acc_5_V_fu_1487_p2 = (node0_5_w + tmp7_cast_fu_1483_p1);

assign tmp7_cast_fu_1483_p1 = (b5 + node1_5_w);

assign acc_6_V_fu_1498_p2 = (node0_6_w + tmp8_fu_1493_p2);

assign tmp8_fu_1493_p2 = (b6 + node1_6_w);

assign acc_7_V_fu_1509_p2 = (node0_7_w + tmp9_fu_1503_p2);

assign tmp9_fu_1503_p2 = (b7 + node1_7_w);

assign ap_return_0 = return_0;

assign ap_return_1 = return_1;

assign ap_return_2 = return_2;

assign ap_return_3 = return_3;

assign ap_return_4 = return_4;

assign ap_return_5 = return_5;

assign ap_return_6 = return_6;

assign ap_return_7 = return_7;


endmodule //dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0