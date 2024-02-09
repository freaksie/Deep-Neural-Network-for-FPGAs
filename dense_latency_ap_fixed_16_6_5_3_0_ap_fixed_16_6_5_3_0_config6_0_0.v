// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0 (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        ap_return,
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
output  [DATA_WIDTH - 1:0] ap_return;
input   ap_ce;

reg signed [DATA_WIDTH - 1:0] data_0_V_read_int_reg;
reg signed [DATA_WIDTH - 1:0] data_1_V_read_int_reg;
reg signed [DATA_WIDTH - 1:0] data_2_V_read_int_reg;
reg signed [DATA_WIDTH - 1:0] data_3_V_read_int_reg;

reg signed [DATA_WIDTH - 1:0] return0;

reg   [DATA_WIDTH - 1:0] tmp_5_reg_247;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [DATA_WIDTH - 1:0] tmp_5_1_reg_252;
reg   [DATA_WIDTH - 1:0] tmp_5_2_reg_257;
reg   [DATA_WIDTH - 1:0] tmp_5_3_reg_262;
wire  signed [DATA_WIDTH - 1:0] r_V_6_2_fu_70_p0;
wire    ap_block_pp0_stage0;
wire  signed [DATA_WIDTH - 1:0] r_V_6_fu_71_p0;
wire  signed [DATA_WIDTH - 1:0] r_V_6_3_fu_72_p0;
wire  signed [DATA_WIDTH - 1:0] r_V_6_1_fu_73_p0;
wire   [DSPOUT_WIDTH - 1:0] r_V_6_fu_71_p2;
wire   [DSPOUT_WIDTH - 1:0] r_V_6_1_fu_73_p2;
wire   [DSPOUT_WIDTH - 1:0] r_V_6_2_fu_70_p2;
wire   [DSPOUT_WIDTH - 1:0] r_V_6_3_fu_72_p2;
wire   [DATA_WIDTH - 1:0] tmp2_fu_231_p2;
wire   [DATA_WIDTH - 1:0] tmp1_fu_236_p2;
wire   [DATA_WIDTH - 1:0] tmp_fu_227_p2;
wire   [DATA_WIDTH - 1:0] res_V_write_assign_fu_241_p2;
reg    ap_ce_reg;


reg signed [PARAM_WIDTH - 1:0] w0;
reg signed [PARAM_WIDTH - 1:0] w1;
reg signed [PARAM_WIDTH - 1:0] w2;
reg signed [PARAM_WIDTH - 1:0] w3;
reg signed [DATA_WIDTH - 1:0] b;
reg signed [DATA_WIDTH - 1:0] sum_01;
reg signed [DATA_WIDTH - 1:0] sum_23;
// Buffer for delays
reg signed [DATA_WIDTH - 1:0] node0;
reg signed [DATA_WIDTH - 1:0] node1;
reg signed [DATA_WIDTH - 1:0] node2;
reg signed [DATA_WIDTH - 1:0] node3;

always @(posedge ap_clk) begin
    w0 <= 3299;
    w1 <= 247774;
    w2 <= 258016;
    w3 <= 248723;
    b <= 731532;
end 

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        return0 <= res_V_write_assign_fu_241_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == 1'b1))) begin
        data_0_V_read_int_reg <= data_0_V_read;
        data_1_V_read_int_reg <= data_1_V_read;
        data_2_V_read_int_reg <= data_2_V_read;
        data_3_V_read_int_reg <= data_3_V_read;
        sum_01 <= tmp_fu_227_p2;
        sum_23 <= tmp1_fu_236_p2;
        tmp_5_1_reg_252 <= {{r_V_6_1_fu_73_p2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH]}};
        node1 <= tmp_5_1_reg_252;
        tmp_5_2_reg_257 <= {{r_V_6_2_fu_70_p2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH]}};
        node2 <= tmp_5_2_reg_257;
        tmp_5_3_reg_262 <= {{r_V_6_3_fu_72_p2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH]}};
        node3 <= tmp_5_3_reg_262;
        tmp_5_reg_247 <= {{r_V_6_fu_71_p2[DSPOUT_WIDTH - 1:DSPOUT_WIDTH-DATA_WIDTH]}};
        node0 <= tmp_5_reg_247;
    end
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign r_V_6_1_fu_73_p0 = data_1_V_read_int_reg;

assign r_V_6_1_fu_73_p2 = ($signed(r_V_6_1_fu_73_p0) * $signed(w1));

assign r_V_6_2_fu_70_p0 = data_2_V_read_int_reg;

assign r_V_6_2_fu_70_p2 = ($signed(r_V_6_2_fu_70_p0) * $signed(w2));

assign r_V_6_3_fu_72_p0 = data_3_V_read_int_reg;

assign r_V_6_3_fu_72_p2 = ($signed(r_V_6_3_fu_72_p0) * $signed(w3));

assign r_V_6_fu_71_p0 = data_0_V_read_int_reg;

assign r_V_6_fu_71_p2 = ($signed(r_V_6_fu_71_p0) * $signed(w0));

assign res_V_write_assign_fu_241_p2 = (sum_23 + sum_01);

assign tmp1_fu_236_p2 = (tmp2_fu_231_p2 + node2);

assign tmp2_fu_231_p2 = (node3 + b);

assign tmp_fu_227_p2 = (node0 + node1);

assign ap_return = return0;

endmodule //dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0