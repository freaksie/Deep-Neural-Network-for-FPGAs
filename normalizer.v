`timescale 1 ns / 1 ps
module normalizer(
    clk,
    stb_start,
    accumulated_input,
    normalized_output,
    NN_startTrigger,
);
localparam outWidth = 17;
localparam inWidth = 31;

input clk;
input stb_start;
input [(inWidth*2)+1:0] accumulated_input;
output [(outWidth*2)+1:0] normalized_output;
output NN_startTrigger;

reg signed [outWidth+1:0] minimumI = 262143;
reg signed [outWidth+1:0] minimumQ = 262143;
reg signed [inWidth:0] sumI = 0;
reg signed [inWidth:0] sumQ = 0;
reg signed [(outWidth*2)+1:0] normalizedI = 0;
reg signed [(outWidth*2)+1:0] normalizedQ = 0;
reg signed [inWidth:0] dataI;
reg signed [inWidth:0] dataQ;

reg delay1 = 0;
reg delay2 = 0;
reg delay3 = 0;
reg delay4 = 0;
reg startNN = 0;

always @(posedge clk) begin
    delay1 <= stb_start;
    delay2 <= delay1;
    delay3 <= delay2;
    delay4 <= delay3;
    startNN <= delay4;
end
assign NN_startTrigger = startNN;

assign normalized_output = {normalizedQ[35:18],normalizedI[35:18]};

reg signed [inWidth:0] sumI_r = 0;
reg signed [inWidth:0] sumQ_r = 0;

always @(posedge clk) begin  
    dataI <= accumulated_input[31:0];
    sumI_r <= dataI + minimumI;
    sumI <= sumI_r; 
    normalizedI <= sumI << 11;
    
    dataQ <= accumulated_input[63:32];
    sumQ_r <= dataQ + minimumQ;
    sumQ <= sumQ_r;
    normalizedQ <= sumQ << 11;
end

endmodule

