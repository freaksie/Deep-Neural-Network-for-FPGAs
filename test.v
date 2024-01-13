`timescale 1 ns / 1 ps 
module test (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_2_V_ap_vld,
        input_2_V,
        layer7_out_0_V,
        layer7_out_0_V_ap_vld
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;
input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   input_2_V_ap_vld;
input  [31:0] input_2_V;
output  [15:0] layer7_out_0_V;
output   layer7_out_0_V_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg layer7_out_0_V_ap_vld;
parameter DS = 15;
reg signed [DS:0] w0_0;
reg signed [DS:0] w1_0;
reg signed [15:0] div = 16'd65248;
reg signed [17:0] ans;

reg [31:0] sum;
reg [63:0] multi;
reg [17:0] divid;
reg [31:0] normalized;

initial begin 
w0_0 = 16'd65248;
w1_0 = 16'd304;
end

wire   [15:0] res_0_V_write_assign_fu_1431_p2;

reg   [15:0] tmp_33_1_reg_1603;
reg   [15:0] tmp_3_reg_1568;

wire   [15:0] tmp2_fu_1426_p2;

wire   [25:0] r_V_10_1_fu_108_p2;
wire   [25:0] r_V_s_fu_110_p2;

wire  signed [15:0] r_V_10_1_fu_108_p1;
wire  signed [15:0] r_V_s_fu_110_p1;

wire  signed [15:0] r_V_1_cast_fu_1289_p1;
wire  signed [15:0] r_V_cast3_fu_1184_p1;


wire  signed [15:0] tmp_2_fu_1269_p4;
reg  signed [15:0] tmp_fu_1180_p1;

assign res_0_V_write_assign_fu_1431_p2 = (tmp_3_reg_1568 + tmp2_fu_1426_p2);

assign tmp2_fu_1426_p2 = (16'd157 + tmp_33_1_reg_1603);

always @ (posedge ap_clk) begin
tmp_3_reg_1568 <= {{r_V_s_fu_110_p2[25:10]}};
tmp_33_1_reg_1603 <= {{r_V_10_1_fu_108_p2[25:10]}};
end


assign r_V_s_fu_110_p2 = ($signed(16'd65248) * $signed(r_V_s_fu_110_p1));
assign r_V_s_fu_110_p1 = r_V_cast3_fu_1184_p1;
assign r_V_cast3_fu_1184_p1 = tmp_fu_1180_p1;

//For input of 32bit, with min-max of 31 bit
//representation by <18,4>

//assign sum = $signed(32'd2294967296) + $signed(32'd2147483647);
//assign multi = sum * 10000;
//assign divid = multi >>32; 
//assign normalized = divid * 18'd26843; 


//For Q3 with range of 2^18
// working condition

assign sum = $signed(32'd4294767296) + $signed(19'd262143);
assign multi = sum * 10000;
assign divid = multi >>19; 
assign normalized = divid * 18'd26843; 

assign ans = normalized[31:14];

assign r_V_10_1_fu_108_p2 = ($signed(16'd304) * $signed(r_V_10_1_fu_108_p1));
assign r_V_10_1_fu_108_p1 = r_V_1_cast_fu_1289_p1;
assign r_V_1_cast_fu_1289_p1 = tmp_2_fu_1269_p4;

assign tmp_2_fu_1269_p4 = {{input_2_V[31:16]}};
assign tmp_fu_1180_p1 = input_2_V[15:0];

initial begin

    $dumpvars(1,test);
end

endmodule //test