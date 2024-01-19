`timescale 1 ns / 1 ps 
module normalize(
    ap_clk,
    ap_start,
    ap_rst,
    input_V,
    input_V_ap_vld,
    output_V,
    output_V_ap_vld
);
input ap_clk;
//input ap_rst;
//input ap_ce;
input [63:0] input_V;
output [17:0] output_V;

localparam width = 17;
reg [31:0] value1;
reg [31:0] value2;
reg [width+1:0] min;
reg [31:0] sum1;
reg [63:0] multi1;
wire [63:0] tmp1;
wire [63:0] tmp2;
wire [35:0] dt1;
wire [35:0] dt2;
reg [17:0] divid1;
reg [17:0] normalized1;
reg [31:0] sum2;
reg [63:0] multi2;
reg [17:0] divid2;
reg [17:0] normalized2;
reg [35:0] ap_return;
wire [17:0] nn_out;
reg nn_start;
reg rst;
reg flag;
reg input_2_V_ap_vld;

initial begin
min = 262143 ;
flag = 0 ;
end

assign value2 = input_V[63:32];
assign value1 = input_V[31:0];

always @ (posedge ap_clk) begin
    if (flag == 1'b0) begin
        multi1 <= tmp1;
        multi2 <= tmp2;
        assign flag = 1;
    end
end

always @ (posedge ap_clk) begin
    if (flag == 1'b1) begin
        normalized1 <= dt1[35:18];
        normalized2 <= dt2[35:18];
        assign flag = 0;
    end
end

always @(*) begin
    assign ap_return = {normalized2,normalized1};
    assign nn_start = 1'b1;
    assign rst =1'b0;
    assign input_V_ap_vld = 1'b1;
end

assign sum1 = $signed(value1) + $signed(min);
assign tmp1 = sum1 * 10000;
assign divid1 = multi1 >>19; 
//0.4096 in (18 bit fraction)
assign dt1= divid1 * 18'd107374; 

assign sum2 = $signed(value2) + $signed(min);
assign tmp2 = sum2 * 10000;
assign divid2 = multi2 >>19;
assign dt2= divid2 * 18'd107374;

myproject myproject(
    .ap_clk(ap_clk),
    .ap_rst(rst),
    .ap_start(nn_start),
    .ap_done(),
    .ap_idle(),
    .ap_ready(),
    .input_2_V_ap_vld(input_V_ap_vld),
    .input_2_V(ap_return),
    .layer7_out_0_V(nn_out),
    .layer7_out_0_V_ap_vld(output_V_ap_vld),
);

assign output_V = nn_out;


initial begin

    $dumpvars(1,normalize);
end

endmodule
