// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_ce,
        data_V_read,
        ap_return
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;
localparam DATA_WIDTH = 27;
localparam FRAC_WIDTH = 17;
input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   ap_ce;
input  [DATA_WIDTH - 1:0] data_V_read;
output  [(FRAC_WIDTH - 1):0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] sigmoid_table1_address0;
reg    sigmoid_table1_ce0;
wire   [9:0] sigmoid_table1_q0;
wire   [9:0] tmp_5_fu_175_p1;
reg   [9:0] tmp_5_reg_206;
reg   [5:0] tmp_6_reg_211;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] tmp_8_fu_201_p1;
wire   [15:0] tmp_fu_83_p4;
wire   [(DATA_WIDTH - 1)+10:0] r_V_fu_75_p3;
wire   [(FRAC_WIDTH - 1)-6:0] tmp_1_fu_103_p1;
wire   [(FRAC_WIDTH - 1):0] p_Result_2_fu_107_p3;
wire  signed [16:0] ret_V_cast_fu_93_p1;
wire   [0:0] tmp_3_fu_115_p2;
wire   [16:0] ret_V_fu_121_p2;
wire   [0:0] p_Result_s_fu_97_p2;
wire   [16:0] p_s_fu_127_p3;
wire   [16:0] p_2_fu_135_p3;
wire   [15:0] tmp_2_fu_143_p1;
wire   [16:0] index_fu_147_p2;
wire   [0:0] tmp_4_fu_159_p3;
wire   [15:0] index_cast_fu_153_p2;
wire   [15:0] p_1_fu_167_p3;
wire   [0:0] icmp_fu_189_p2;
wire   [9:0] index_1_fu_194_p3;
//Reg for sigmoid
reg signed [(DATA_WIDTH - 1)+10:0] comp;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to1;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
ap_CS_fsm = 1'd1;
ap_enable_reg_pp0_iter1 = 1'b0;
ap_enable_reg_pp0_iter2 = 1'b0;
comp = 37'd137438953457;
end

sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb #(
    .DataWidth( 10 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
sigmoid_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(sigmoid_table1_address0),
    .ce0(sigmoid_table1_ce0),
    .q0(sigmoid_table1_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_5_reg_206 <= tmp_5_fu_175_p1;
        tmp_6_reg_211 <= {{p_1_fu_167_p3[15:10]}};
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to1 = 1'b1;
    end else begin
        ap_idle_pp0_0to1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to1 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        sigmoid_table1_ce0 = 1'b1;
    end else begin
        sigmoid_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_start == 1'b0) & (ap_start == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((1'b0 == ap_ce) | ((ap_start == 1'b0) & (ap_start == 1'b1)));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start == 1'b0);
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

//Append zeros according to output width {{sigmoid_table1_q0}, {2'd0}};
assign ap_return = {{sigmoid_table1_q0}, {7'd0}};
//assign ap_return =sigmoid_table1_q0;  

assign icmp_fu_189_p2 = ((tmp_6_reg_211 != 6'd0) ? 1'b1 : 1'b0);

assign index_1_fu_194_p3 = ((icmp_fu_189_p2[0:0] === 1'b1) ? 10'd1023 : tmp_5_reg_206);

assign index_cast_fu_153_p2 = (16'd512 + tmp_2_fu_143_p1);

assign index_fu_147_p2 = (17'd512 + p_2_fu_135_p3);

assign p_1_fu_167_p3 = ((tmp_4_fu_159_p3[0:0] === 1'b1) ? 16'd0 : index_cast_fu_153_p2);

assign p_2_fu_135_p3 = ((p_Result_s_fu_97_p2[0:0] === 1'b1) ? p_s_fu_127_p3 : ret_V_cast_fu_93_p1);

assign p_Result_2_fu_107_p3 = {{tmp_1_fu_103_p1}, {6'd0}};

// $signed(26'd67108849) 26=DS+10, {111...10001}
assign p_Result_s_fu_97_p2 = (($signed(r_V_fu_75_p3) < $signed(comp)) ? 1'b1 : 1'b0);

assign p_s_fu_127_p3 = ((tmp_3_fu_115_p2[0:0] === 1'b1) ? ret_V_cast_fu_93_p1 : ret_V_fu_121_p2);

assign r_V_fu_75_p3 = {{data_V_read}, {10'd0}};

assign ret_V_cast_fu_93_p1 = $signed(tmp_fu_83_p4);

assign ret_V_fu_121_p2 = ($signed(17'd1) + $signed(ret_V_cast_fu_93_p1));

assign sigmoid_table1_address0 = tmp_8_fu_201_p1;

assign tmp_1_fu_103_p1 = data_V_read[(FRAC_WIDTH - 1)-6:0];

assign tmp_2_fu_143_p1 = p_2_fu_135_p3[15:0];

assign tmp_3_fu_115_p2 = ((p_Result_2_fu_107_p3 == 17'd0) ? 1'b1 : 1'b0);

assign tmp_4_fu_159_p3 = index_fu_147_p2[32'd16];

assign tmp_5_fu_175_p1 = p_1_fu_167_p3[9:0];

assign tmp_8_fu_201_p1 = index_1_fu_194_p3;

assign tmp_fu_83_p4 = {{data_V_read[(DATA_WIDTH - 1):(DATA_WIDTH - 1)-15]}};

endmodule //sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s
