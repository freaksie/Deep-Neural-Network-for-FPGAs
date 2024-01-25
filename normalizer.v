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

reg [outWidth+1:0] minimum = 262143;
reg [inWidth:0] sumI = 0;
reg [inWidth:0] sumQ = 0;
reg [(outWidth*2)+1:0] normalizedI = 0;
reg [(outWidth*2)+1:0] normalizedQ = 0;
reg [outWidth:0] shiftI = 0;
reg [outWidth:0] shiftQ = 0;
reg [(inWidth*2)+1:0] multiI = 0;
reg [(inWidth*2)+1:0] multiQ = 0;

reg delay1 = 0;
reg delay2 = 0;
reg delay3 = 0;
reg delay4 = 0;
reg delay5 = 0;
reg delay6 = 0;
reg delay7 = 0;
reg delay8 = 0;
reg startNN = 0;

always @(posedge clk) begin
    delay1 <= stb_start;
    delay2 <= delay1;
    delay3 <= delay2;
    delay4 <= delay3;
    delay5 <= delay4;
    delay6 <= delay5;
    delay7 <= delay6;
    delay8 <= delay7;
    startNN <= delay8;
end
assign NN_startTrigger = startNN;

assign normalized_output = {normalizedQ[35:18],normalizedI[35:18]};

reg [inWidth:0] sumI_r = 0;
reg [inWidth:0] sumQ_r = 0;
reg [(outWidth*2)+1:0] normalizedI_r = 0;
reg [(outWidth*2)+1:0] normalizedQ_r = 0;
reg [(inWidth*2)+1:0] multiI_r1 = 0;
reg [(inWidth*2)+1:0] multiQ_r1 = 0;
reg [(inWidth*2)+1:0] multiI_r2 = 0;
reg [(inWidth*2)+1:0] multiQ_r2 = 0;

always @(posedge clk) begin  
    
    sumI_r <= $signed(accumulated_input[31:0]) + $signed(minimum);
    sumI <= sumI_r; 
    multiI_r1 <= (sumI) * 10000;
    multiI_r2 <= multiI_r1;
    multiI <= multiI_r2;
    shiftI <= multiI >>19; 
    //0.4096 in (18 bit fraction)
    normalizedI_r <= shiftI * 18'd107374;
    normalizedI <= normalizedI_r;
    
    sumQ_r <= $signed(accumulated_input[63:32]) + $signed(minimum);
    sumQ <= sumQ_r;
    multiQ_r1 <= sumQ * 10000;
    multiQ_r2 <= multiQ_r1;
    multiQ <= multiQ_r2;
    shiftQ <= multiQ >>19;
    //0.4096 in (18 bit fraction)
    normalizedQ_r <= shiftQ * 18'd107374;
    normalizedQ <= normalizedQ_r;
end

endmodule

