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


reg signed [5:0] bias = 5'd8 ;
reg signed [10:0] weight = 10'd120 ;
reg signed [10:0] ans;

assign ans = bias + weight;

initial begin

    $dumpvars(1,test);
end

endmodule //test