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
input  [31:0] data_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;
output  [15:0] ap_return_5;
output  [15:0] ap_return_6;
output  [15:0] ap_return_7;
input   ap_ce;

reg[15:0] ap_return_0;
reg[15:0] ap_return_1;
reg[15:0] ap_return_2;
reg[15:0] ap_return_3;
reg[15:0] ap_return_4;
reg[15:0] ap_return_5;
reg[15:0] ap_return_6;
reg[15:0] ap_return_7;

wire  signed [15:0] tmp_fu_1180_p1;
reg  signed [15:0] tmp_reg_1562;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [15:0] tmp_3_reg_1568;
reg   [15:0] tmp_s_reg_1573;
reg   [15:0] tmp_33_0_2_reg_1578;
reg   [15:0] tmp_33_0_3_reg_1583;
reg   [15:0] tmp_33_0_4_reg_1588;
reg   [15:0] tmp_33_0_6_reg_1593;
reg   [15:0] tmp_33_0_7_reg_1598;
reg   [15:0] tmp_33_1_reg_1603;
reg   [15:0] tmp_33_1_1_reg_1608;
reg   [15:0] tmp_33_1_2_reg_1613;
reg   [15:0] tmp_33_1_3_reg_1618;
reg   [15:0] tmp_33_1_4_reg_1623;
reg   [15:0] tmp_36_reg_1628;
reg   [15:0] tmp_33_1_6_reg_1633;
reg   [15:0] tmp_29_reg_1638;
wire  signed [15:0] r_V_10_1_4_fu_98_p1;
wire  signed [15:0] r_V_1_cast_fu_1289_p1;
wire    ap_block_pp0_stage0;
wire  signed [15:0] r_V_10_1_1_fu_99_p1;
wire  signed [15:0] r_V_10_0_3_fu_101_p1;
wire  signed [15:0] r_V_cast3_fu_1184_p1;
wire  signed [15:0] r_V_10_0_7_fu_102_p1;
wire  signed [15:0] r_V_10_0_4_fu_103_p1;
wire  signed [15:0] r_V_10_0_1_fu_104_p1;
wire  signed [15:0] r_V_10_0_6_fu_105_p1;
wire  signed [15:0] r_V_10_1_3_fu_106_p1;
wire  signed [15:0] r_V_10_0_2_fu_107_p1;
wire  signed [15:0] r_V_10_1_fu_108_p1;
wire  signed [15:0] r_V_10_1_2_fu_109_p1;
wire  signed [15:0] r_V_s_fu_110_p1;
wire  signed [15:0] r_V_10_1_6_fu_111_p1;
wire  signed [15:0] r_V_10_1_7_fu_112_p1;
wire  signed [15:0] r_V_10_1_5_fu_113_p1;
wire   [25:0] r_V_s_fu_110_p2;
wire   [25:0] r_V_10_0_1_fu_104_p2;
wire   [25:0] r_V_10_0_2_fu_107_p2;
wire   [25:0] r_V_10_0_3_fu_101_p2;
wire   [25:0] r_V_10_0_4_fu_103_p2;
wire   [25:0] r_V_10_0_6_fu_105_p2;
wire   [25:0] r_V_10_0_7_fu_102_p2;
wire  signed [15:0] tmp_2_fu_1269_p4;
wire   [25:0] r_V_10_1_fu_108_p2;
wire   [25:0] r_V_10_1_1_fu_99_p2;
wire   [25:0] r_V_10_1_2_fu_109_p2;
wire   [25:0] r_V_10_1_3_fu_106_p2;
wire   [25:0] r_V_10_1_4_fu_98_p2;
wire   [25:0] r_V_10_1_5_fu_113_p2;
wire   [25:0] r_V_10_1_6_fu_111_p2;
wire   [25:0] r_V_10_1_7_fu_112_p2;
wire   [15:0] p_shl_fu_1382_p3;
wire   [15:0] p_shl1_fu_1393_p3;
wire  signed [15:0] p_shl_cast_fu_1389_p1;
wire  signed [15:0] p_shl1_cast_fu_1400_p1;
wire   [25:0] r_V_10_0_5_fu_1404_p2;
wire   [15:0] tmp2_fu_1426_p2;
wire  signed [15:0] tmp_28_fu_1379_p1;
wire   [15:0] tmp3_fu_1436_p2;
wire   [15:0] tmp4_fu_1447_p2;
wire   [15:0] tmp5_fu_1457_p2;
wire   [15:0] tmp6_fu_1467_p2;
wire  signed [15:0] tmp_32_cast_fu_1420_p1;
wire   [15:0] tmp7_fu_1477_p2;
reg   [15:0] tmp_33_0_5_fu_1410_p4;
wire  signed [15:0] tmp7_cast_fu_1483_p1;
wire   [15:0] tmp8_fu_1493_p2;
wire  signed [15:0] tmp_30_fu_1423_p1;
wire   [15:0] tmp9_fu_1503_p2;
wire   [15:0] res_0_V_write_assign_fu_1431_p2;
wire   [15:0] acc_1_V_fu_1441_p2;
wire   [15:0] acc_2_V_fu_1452_p2;
wire   [15:0] acc_3_V_fu_1462_p2;
wire   [15:0] acc_4_V_fu_1472_p2;
wire   [15:0] acc_5_V_fu_1487_p2;
wire   [15:0] acc_6_V_fu_1498_p2;
wire   [15:0] acc_7_V_fu_1509_p2;
reg    ap_ce_reg;
reg   [15:0] ap_return_0_int_reg;
reg   [15:0] ap_return_1_int_reg;
reg   [15:0] ap_return_2_int_reg;
reg   [15:0] ap_return_3_int_reg;
reg   [15:0] ap_return_4_int_reg;
reg   [15:0] ap_return_5_int_reg;
reg   [15:0] ap_return_6_int_reg;
reg   [15:0] ap_return_7_int_reg;

localparam DS = 15;
reg signed [DS:0] w0_0;
reg signed[DS:0] w0_1;
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

initial begin
w0_0 = 16'd65248;
w0_1 = 16'd65288;
w0_2 = 16'd65031;
w0_3 = 16'd346;
w0_4 = 16'd405;
w0_5 = 16'd509;
w0_6 = 16'd869;
w0_7 = 16'd581;
w1_0 = 16'd304;
w1_1 = 16'd65043;
w1_2 = 16'd65242;
w1_3 = 16'd319;
w1_4 = 16'd64877;
w1_5 = 16'd124;
w1_6 = 16'd65192;
w1_7 = 16'd65348;
b0 = 16'd157;
b1 = 16'd111;
b2 = 16'd240;
b3 = 16'd325;
b4 = 16'd65370;
b5 = 16'd65487;
b6 = 16'd38;
b7 = 16'd65448;
end 

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= res_0_V_write_assign_fu_1431_p2;
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
        tmp_29_reg_1638 <= {{r_V_10_1_7_fu_112_p2[25:10]}};
        tmp_33_0_2_reg_1578 <= {{r_V_10_0_2_fu_107_p2[25:10]}};
        tmp_33_0_3_reg_1583 <= {{r_V_10_0_3_fu_101_p2[25:10]}};
        tmp_33_0_4_reg_1588 <= {{r_V_10_0_4_fu_103_p2[25:10]}};
        tmp_33_0_6_reg_1593 <= {{r_V_10_0_6_fu_105_p2[25:10]}};
        tmp_33_0_7_reg_1598 <= {{r_V_10_0_7_fu_102_p2[25:10]}};
        tmp_33_1_1_reg_1608 <= {{r_V_10_1_1_fu_99_p2[25:10]}};
        tmp_33_1_2_reg_1613 <= {{r_V_10_1_2_fu_109_p2[25:10]}};
        tmp_33_1_3_reg_1618 <= {{r_V_10_1_3_fu_106_p2[25:10]}};
        tmp_33_1_4_reg_1623 <= {{r_V_10_1_4_fu_98_p2[25:10]}};
        tmp_33_1_6_reg_1633 <= {{r_V_10_1_6_fu_111_p2[25:10]}};
        tmp_33_1_reg_1603 <= {{r_V_10_1_fu_108_p2[25:10]}};
        tmp_36_reg_1628 <= {{r_V_10_1_5_fu_113_p2[25:10]}};
        tmp_3_reg_1568 <= {{r_V_s_fu_110_p2[25:10]}};
        tmp_reg_1562 <= tmp_fu_1180_p1;
        tmp_s_reg_1573 <= {{r_V_10_0_1_fu_104_p2[25:10]}};
        tmp_33_0_5_fu_1410_p4 <= {{r_V_10_0_5_fu_1404_p2[25:10]}};
    end
end
always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_0 = ap_return_0_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_0 = res_0_V_write_assign_fu_1431_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_1 = ap_return_1_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_1 = acc_1_V_fu_1441_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_2 = ap_return_2_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_2 = acc_2_V_fu_1452_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_3 = ap_return_3_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_3 = acc_3_V_fu_1462_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_4 = ap_return_4_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_4 = acc_4_V_fu_1472_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_5 = ap_return_5_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_5 = acc_5_V_fu_1487_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_6 = ap_return_6_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_6 = acc_6_V_fu_1498_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_7 = ap_return_7_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_7 = acc_7_V_fu_1509_p2;
    end
end

assign acc_1_V_fu_1441_p2 = ($signed(tmp_28_fu_1379_p1) + $signed(tmp3_fu_1436_p2));

assign acc_2_V_fu_1452_p2 = (tmp_33_0_2_reg_1578 + tmp4_fu_1447_p2);

assign acc_3_V_fu_1462_p2 = (tmp_33_0_3_reg_1583 + tmp5_fu_1457_p2);

assign acc_4_V_fu_1472_p2 = (tmp_33_0_4_reg_1588 + tmp6_fu_1467_p2);

assign acc_5_V_fu_1487_p2 = ($signed(tmp_33_0_5_fu_1410_p4) + $signed(tmp7_cast_fu_1483_p1));

assign acc_6_V_fu_1498_p2 = (tmp_33_0_6_reg_1593 + tmp8_fu_1493_p2);

assign acc_7_V_fu_1509_p2 = (tmp_33_0_7_reg_1598 + tmp9_fu_1503_p2);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign p_shl1_cast_fu_1400_p1 = $signed(p_shl1_fu_1393_p3);

assign p_shl1_fu_1393_p3 = {{tmp_reg_1562}, {1'd0}};

assign p_shl_cast_fu_1389_p1 = $signed(p_shl_fu_1382_p3);

assign p_shl_fu_1382_p3 = {{tmp_reg_1562}, {9'd0}};

assign r_V_10_0_1_fu_104_p1 = tmp_fu_1180_p1;

assign r_V_10_0_1_fu_104_p2 = ($signed(w0_1) * $signed(r_V_10_0_1_fu_104_p1));

assign r_V_10_0_2_fu_107_p1 = r_V_cast3_fu_1184_p1;

assign r_V_10_0_2_fu_107_p2 = ($signed(w0_2) * $signed(r_V_10_0_2_fu_107_p1));

assign r_V_10_0_3_fu_101_p1 = r_V_cast3_fu_1184_p1;

assign r_V_10_0_3_fu_101_p2 = ($signed(w0_3) * $signed(r_V_10_0_3_fu_101_p1));


assign r_V_10_0_4_fu_103_p1 = r_V_cast3_fu_1184_p1;

assign r_V_10_0_4_fu_103_p2 = ($signed(w0_4) * $signed(r_V_10_0_4_fu_103_p1));

assign r_V_10_0_5_fu_1404_p2 = ($signed(w0_5) * $signed(r_V_10_0_4_fu_103_p1));

assign r_V_10_0_6_fu_105_p1 = r_V_cast3_fu_1184_p1;

assign r_V_10_0_6_fu_105_p2 = ($signed(w0_6) * $signed(r_V_10_0_6_fu_105_p1));

assign r_V_10_0_7_fu_102_p1 = r_V_cast3_fu_1184_p1;

assign r_V_10_0_7_fu_102_p2 = ($signed(w0_7) * $signed(r_V_10_0_7_fu_102_p1));

assign r_V_10_1_1_fu_99_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_1_fu_99_p2 = ($signed(w1_1) * $signed(r_V_10_1_1_fu_99_p1));

assign r_V_10_1_2_fu_109_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_2_fu_109_p2 = ($signed(w1_2) * $signed(r_V_10_1_2_fu_109_p1));

assign r_V_10_1_3_fu_106_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_3_fu_106_p2 = ($signed(w1_3) * $signed(r_V_10_1_3_fu_106_p1));

assign r_V_10_1_4_fu_98_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_4_fu_98_p2 = ($signed(w1_4) * $signed(r_V_10_1_4_fu_98_p1));

assign r_V_10_1_5_fu_113_p1 = tmp_2_fu_1269_p4;

assign r_V_10_1_5_fu_113_p2 = ($signed(w1_5) * $signed(r_V_10_1_5_fu_113_p1));

assign r_V_10_1_6_fu_111_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_6_fu_111_p2 = ($signed(w1_6) * $signed(r_V_10_1_6_fu_111_p1));

assign r_V_10_1_7_fu_112_p1 = tmp_2_fu_1269_p4;

assign r_V_10_1_7_fu_112_p2 = ($signed(w1_7) * $signed(r_V_10_1_7_fu_112_p1));

assign r_V_10_1_fu_108_p1 = r_V_1_cast_fu_1289_p1;

assign r_V_10_1_fu_108_p2 = ($signed(w1_0) * $signed(r_V_10_1_fu_108_p1));

assign r_V_1_cast_fu_1289_p1 = tmp_2_fu_1269_p4;

assign r_V_cast3_fu_1184_p1 = tmp_fu_1180_p1;

assign r_V_s_fu_110_p1 = r_V_cast3_fu_1184_p1;

assign r_V_s_fu_110_p2 = ($signed(w0_0) * $signed(r_V_s_fu_110_p1));

assign res_0_V_write_assign_fu_1431_p2 = (tmp_3_reg_1568 + tmp2_fu_1426_p2);

assign tmp2_fu_1426_p2 = ($signed(b0) + tmp_33_1_reg_1603);

assign tmp3_fu_1436_p2 = ($signed(b1) + tmp_33_1_1_reg_1608);

assign tmp4_fu_1447_p2 = ($signed(b2) + tmp_33_1_2_reg_1613);

assign tmp5_fu_1457_p2 = ($signed(b3) + tmp_33_1_3_reg_1618);

assign tmp6_fu_1467_p2 = ($signed(b4) + $signed(tmp_33_1_4_reg_1623));

assign tmp7_cast_fu_1483_p1 = $signed(tmp7_fu_1477_p2);

assign tmp7_fu_1477_p2 = ($signed(b5) + $signed(tmp_32_cast_fu_1420_p1));

assign tmp8_fu_1493_p2 = ($signed(b6) + tmp_33_1_6_reg_1633);

assign tmp9_fu_1503_p2 = ($signed(b7) + $signed(tmp_30_fu_1423_p1));

assign tmp_28_fu_1379_p1 = $signed(tmp_s_reg_1573);

assign tmp_2_fu_1269_p4 = {{data_V_read[31:16]}};

assign tmp_30_fu_1423_p1 = $signed(tmp_29_reg_1638);

assign tmp_32_cast_fu_1420_p1 = $signed(tmp_36_reg_1628);



assign tmp_fu_1180_p1 = data_V_read[15:0];


endmodule //dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0