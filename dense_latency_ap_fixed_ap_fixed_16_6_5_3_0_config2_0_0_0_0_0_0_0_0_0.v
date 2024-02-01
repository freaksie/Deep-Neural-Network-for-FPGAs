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
localparam DS = 17;
localparam MS = 29;
input  [DS+DS+1:0] data_V_read;
output  [DS:0] ap_return_0;
output  [DS:0] ap_return_1;
output  [DS:0] ap_return_2;
output  [DS:0] ap_return_3;
output  [DS:0] ap_return_4;
output  [DS:0] ap_return_5;
output  [DS:0] ap_return_6;
output  [DS:0] ap_return_7;
input   ap_ce;

reg[DS:0] return_0;
reg[DS:0] return_1;
reg[DS:0] return_2;
reg[DS:0] return_3;
reg[DS:0] return_4;
reg[DS:0] return_5;
reg[DS:0] return_6;
reg[DS:0] return_7;
 
reg  signed [DS:0] tmp_reg_1562;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg  signed [DS:0] tmp_3_reg_1568;
reg  signed [DS:0] tmp_s_reg_1573;
reg  signed [DS:0] tmp_33_0_2_reg_1578;
reg  signed [DS:0] tmp_33_0_3_reg_1583;
reg  signed [DS:0] tmp_33_0_4_reg_1588;
reg  signed [DS:0] tmp_33_0_6_reg_1593;
reg  signed [DS:0] tmp_33_0_7_reg_1598;
reg  signed [DS:0] tmp_33_1_reg_1603;
reg  signed [DS:0] tmp_33_1_1_reg_1608;
reg  signed [DS:0] tmp_33_1_2_reg_1613;
reg  signed [DS:0] tmp_33_1_3_reg_1618;
reg  signed [DS:0] tmp_33_1_4_reg_1623;
reg  signed [DS:0] tmp_36_reg_1628;
reg  signed [DS:0] tmp_33_1_6_reg_1633;
reg  signed [DS:0] tmp_29_reg_1638;
wire   ap_block_pp0_stage0;
wire signed [DS:0] r_V_10_0_2_fu_107_p1;
wire signed [DS:0] r_V_s_fu_110_p1;
wire signed [MS:0] r_V_s_fu_110_p2;
wire signed [MS:0] r_V_10_0_1_fu_104_p2;
wire signed [MS:0] r_V_10_0_2_fu_107_p2;
wire signed [MS:0] r_V_10_0_3_fu_101_p2;
wire signed [MS:0] r_V_10_0_4_fu_103_p2;
wire signed [MS:0] r_V_10_0_6_fu_105_p2;
wire signed [MS:0] r_V_10_0_7_fu_102_p2;
wire signed [MS:0] r_V_10_1_fu_108_p2;
wire signed [MS:0] r_V_10_1_1_fu_99_p2;
wire signed [MS:0] r_V_10_1_2_fu_109_p2;
wire signed [MS:0] r_V_10_1_3_fu_106_p2;
wire signed [MS:0] r_V_10_1_4_fu_98_p2;
wire signed [MS:0] r_V_10_1_5_fu_113_p2;
wire signed [MS:0] r_V_10_1_6_fu_111_p2;
wire signed [MS:0] r_V_10_1_7_fu_112_p2;
wire signed [DS:0] p_shl_fu_1382_p3;
wire signed [DS:0] p_shl1_fu_1393_p3;
wire signed [DS:0] p_shl_cast_fu_1389_p1;
wire signed [DS:0] p_shl1_cast_fu_1400_p1;
wire signed [MS:0] r_V_10_0_5_fu_1404_p2;
wire signed [DS:0] tmp2_fu_1426_p2;
wire signed [DS:0] tmp3_fu_1436_p2;
wire signed [DS:0] tmp4_fu_1447_p2;
wire signed [DS:0] tmp5_fu_1457_p2;
wire signed [DS:0] tmp6_fu_1467_p2;
reg  signed [DS:0] tmp_33_0_5_fu_1410_p4;
wire signed [DS:0] tmp7_cast_fu_1483_p1;
wire signed [DS:0] tmp8_fu_1493_p2;
wire signed [DS:0] tmp9_fu_1503_p2;
wire signed [DS:0] acc_0_V_fu_1441_p2;
wire signed [DS:0] acc_1_V_fu_1441_p2;
wire signed [DS:0] acc_2_V_fu_1452_p2;
wire signed [DS:0] acc_3_V_fu_1462_p2;
wire signed [DS:0] acc_4_V_fu_1472_p2;
wire signed [DS:0] acc_5_V_fu_1487_p2;
wire signed [DS:0] acc_6_V_fu_1498_p2;
wire signed [DS:0] acc_7_V_fu_1509_p2;
reg   ap_ce_reg;
reg  signed [DS:0] ap_return_0_int_reg;
reg  signed [DS:0] ap_return_1_int_reg;
reg  signed [DS:0] ap_return_2_int_reg;
reg  signed [DS:0] ap_return_3_int_reg;
reg  signed [DS:0] ap_return_4_int_reg;
reg  signed [DS:0] ap_return_5_int_reg;
reg  signed [DS:0] ap_return_6_int_reg;
reg  signed [DS:0] ap_return_7_int_reg;

wire signed [DS:0] dataQ;
wire signed [DS:0] dataI;
reg signed [DS:0] w0_0;
reg signed [DS:0] w0_1;
reg signed [DS:0] w0_2;
reg signed [DS:0] w0_3;
reg signed [DS:0] w0_4;
reg signed [DS:0] w0_5;
reg signed [DS:0] w0_6;
reg signed [DS:0] w0_7;
reg signed [DS:0] w1_0;
reg signed [DS:0] w1_1;
reg signed [DS:0] w1_2;
reg signed [DS:0] w1_3;
reg signed [DS:0] w1_4;
reg signed [DS:0] w1_5;
reg signed [DS:0] w1_6;
reg signed [DS:0] w1_7;
reg signed [DS:0] b0;
reg signed [DS:0] b1;
reg signed [DS:0] b2;
reg signed [DS:0] b3;
reg signed [DS:0] b4;
reg signed [DS:0] b5;
reg signed [DS:0] b6;
reg signed [DS:0] b7;

reg signed [DS:0] node0_0;
reg signed [DS:0] node0_1;
reg signed [DS:0] node0_2;
reg signed [DS:0] node0_3;
reg signed [DS:0] node0_4;
reg signed [DS:0] node0_5;
reg signed [DS:0] node0_6;
reg signed [DS:0] node0_7;
reg signed [DS:0] node1_0;
reg signed [DS:0] node1_1;
reg signed [DS:0] node1_2;
reg signed [DS:0] node1_3;
reg signed [DS:0] node1_4;
reg signed [DS:0] node1_5;
reg signed [DS:0] node1_6;
reg signed [DS:0] node1_7;

initial begin
w0_0 = 260183;
w0_1 = 4862;
w0_2 = 261334;
w0_3 = 260711;
w0_4 = 262141;
w0_5 = 259938;
w0_6 = 4215;
w0_7 = 4895;
w1_0 = 1258;
w1_1 = 4406;
w1_2 = 259194;
w1_3 = 260609;
w1_4 = 260881;
w1_5 = 261883;
w1_6 = 3074;
w1_7 = 2106;
b0   = 262042;
b1   = 259230;
b2   = 0;
b3   = 0;
b4   = 0;
b5   = 0;
b6   = 258988;
b7   = 259290;
end

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

assign dataQ = data_V_read[DS:0];
assign dataI = data_V_read[DS+DS+1:DS+1];


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
        tmp_29_reg_1638 <= {{r_V_10_1_7_fu_112_p2[MS:MS-DS]}};
        node1_7 <= tmp_29_reg_1638;
        tmp_33_0_2_reg_1578 <= {{r_V_10_0_2_fu_107_p2[MS:MS-DS]}};
        node0_2 <= tmp_33_0_2_reg_1578;
        tmp_33_0_3_reg_1583 <= {{r_V_10_0_3_fu_101_p2[MS:MS-DS]}};
        node0_3 <= tmp_33_0_3_reg_1583;
        tmp_33_0_4_reg_1588 <= {{r_V_10_0_4_fu_103_p2[MS:MS-DS]}};
        node0_4 <= tmp_33_0_4_reg_1588;
        tmp_33_0_6_reg_1593 <= {{r_V_10_0_6_fu_105_p2[MS:MS-DS]}};
        node0_6 <= tmp_33_0_6_reg_1593;
        tmp_33_0_7_reg_1598 <= {{r_V_10_0_7_fu_102_p2[MS:MS-DS]}};
        node0_7 <= tmp_33_0_7_reg_1598;
        tmp_33_1_1_reg_1608 <= {{r_V_10_1_1_fu_99_p2[MS:MS-DS]}};
        node1_1 <= tmp_33_1_1_reg_1608;
        tmp_33_1_2_reg_1613 <= {{r_V_10_1_2_fu_109_p2[MS:MS-DS]}};
        node1_2 <= tmp_33_1_2_reg_1613;
        tmp_33_1_3_reg_1618 <= {{r_V_10_1_3_fu_106_p2[MS:MS-DS]}};
        node1_3 <= tmp_33_1_3_reg_1618;
        tmp_33_1_4_reg_1623 <= {{r_V_10_1_4_fu_98_p2[MS:MS-DS]}};
        node1_4 <= tmp_33_1_4_reg_1623;
        tmp_33_1_6_reg_1633 <= {{r_V_10_1_6_fu_111_p2[MS:MS-DS]}};
        node1_6 <= tmp_33_1_6_reg_1633;
        tmp_33_1_reg_1603 <= {{r_V_10_1_fu_108_p2[MS:MS-DS]}};
        node1_0 <= tmp_33_1_reg_1603;
        tmp_36_reg_1628 <= {{r_V_10_1_5_fu_113_p2[MS:MS-DS]}};
        node1_5 <= tmp_36_reg_1628;
        tmp_3_reg_1568 <= {{r_V_s_fu_110_p2[MS:MS-DS]}};
        node0_0 <= tmp_3_reg_1568;
        tmp_s_reg_1573 <= {{r_V_10_0_1_fu_104_p2[MS:MS-DS]}};
        node0_1 <= tmp_s_reg_1573;
        tmp_33_0_5_fu_1410_p4 <= {{r_V_10_0_5_fu_1404_p2[MS:MS-DS]}};
        node0_5 <= tmp_33_0_5_fu_1410_p4;
    end
end


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


assign r_V_s_fu_110_p2 = (w0_0 * dataQ);

assign r_V_10_0_1_fu_104_p2 = (w0_1 * dataQ);

assign r_V_10_0_2_fu_107_p2 = (w0_2 * dataQ);

assign r_V_10_0_3_fu_101_p2 = (w0_3 * dataQ);

assign r_V_10_0_4_fu_103_p2 = (w0_4 * dataQ);

assign r_V_10_0_5_fu_1404_p2 = (w0_5 * dataQ);

assign r_V_10_0_6_fu_105_p2 = (w0_6 * dataQ);

assign r_V_10_0_7_fu_102_p2 = (w0_7 * dataQ);

assign r_V_10_1_fu_108_p2 = (w1_0 * dataI);

assign r_V_10_1_1_fu_99_p2 = (w1_1 * dataI);

assign r_V_10_1_2_fu_109_p2 = (w1_2 * dataI);

assign r_V_10_1_3_fu_106_p2 = (w1_3 * dataI);

assign r_V_10_1_4_fu_98_p2 = (w1_4 * dataI);

assign r_V_10_1_5_fu_113_p2 = (w1_5 * dataI);

assign r_V_10_1_6_fu_111_p2 = (w1_6 * dataI);

assign r_V_10_1_7_fu_112_p2 = (w1_7 * dataI);

assign acc_0_V_fu_1441_p2 = (node0_0 + tmp2_fu_1426_p2);

assign tmp2_fu_1426_p2 = (b0 + node1_0);

assign acc_1_V_fu_1441_p2 = (node0_1 + tmp3_fu_1436_p2);

assign tmp3_fu_1436_p2 = (b1 + node1_1);

assign acc_2_V_fu_1452_p2 = (node0_2 + tmp4_fu_1447_p2);

assign tmp4_fu_1447_p2 = (b2 + node1_2);

assign acc_3_V_fu_1462_p2 = (node0_3 + tmp5_fu_1457_p2);

assign tmp5_fu_1457_p2 = (b3 + node1_3);

assign acc_4_V_fu_1472_p2 = (node0_4 + tmp6_fu_1467_p2);

assign tmp6_fu_1467_p2 = (b4 + node1_4);

assign acc_5_V_fu_1487_p2 = (node0_5 + tmp7_cast_fu_1483_p1);

assign tmp7_cast_fu_1483_p1 = (b5 + node1_5);

assign acc_6_V_fu_1498_p2 = (node0_6 + tmp8_fu_1493_p2);

assign tmp8_fu_1493_p2 = (b6 + node1_6);

assign acc_7_V_fu_1509_p2 = (node0_7 + tmp9_fu_1503_p2);

assign tmp9_fu_1503_p2 = (b7 + node1_7);

assign ap_return_0 = return_0;

assign ap_return_1 = return_1;

assign ap_return_2 = return_2;

assign ap_return_3 = return_3;

assign ap_return_4 = return_4;

assign ap_return_5 = return_5;

assign ap_return_6 = return_6;

assign ap_return_7 = return_7;


endmodule //dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0