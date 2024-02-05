`timescale 1 ns / 1 ps 
module normalize(
    ap_clk,
    input_2_V,
    output_2_V,
);
input ap_clk;
//input ap_rst;
//input ap_ce;
input [63:0] input_2_V;
output [17:0] output_2_V;

localparam width = 31;
reg signed [31:0] value1;
reg signed [31:0] value2;
reg signed [width:0] min;
reg  [32:0] sum1;
wire signed [35:0] dt1;
wire signed [35:0] dt2;
reg signed [17:0] normalized1;
reg [33:0] sum2;
reg signed [17:0] normalized2;
reg signed [35:0] ap_return;
wire signed [17:0] nn_out;
reg  nn_start;
reg rst;
reg flag;
reg input_2_V_ap_vld;

initial begin
min = 2097151;
flag = 0 ;
end

assign value2 = input_2_V[63:32];
assign value1 = input_2_V[31:0];

reg [63:0] multi1 ;
reg [17:0] div1 ;
always @(*) begin
    assign ap_return = {dt2[35:18],dt1[35:18]};
    assign nn_start = 1'b1;
    assign rst =1'b0;
    assign input_2_V_ap_vld = 1'b1;
end

assign sum1 = value1 + min;
assign dt1 = sum1 << 8;

assign sum2 = value2 + min;
assign dt2 = sum2 << 8;

myproject myproject(
    .ap_clk(ap_clk),
    .ap_rst(rst),
    .ap_start(nn_start),
    .ap_done(),
    .ap_idle(),
    .ap_ready(),
    .input_2_V_ap_vld(input_2_V_ap_vld),
    .input_2_V(ap_return),
    .layer7_out_0_V(nn_out)
);

assign output_2_V = nn_out;


initial begin

    $dumpvars(1,normalize);
end

endmodule
