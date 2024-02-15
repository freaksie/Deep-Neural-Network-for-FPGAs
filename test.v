`timescale 1 ns / 1 ps 
module test (
        ap_clk,
        ap_return
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;
input   ap_clk;
output ap_return;

reg signed [10:0] bias = 0 ;
reg signed [10:0] weight = -500 ;
reg signed [10:0] ans;

assign ans = bias + weight;

initial begin

    $dumpvars(1,test);
end

endmodule //test