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

always @(posedge clk) begin  
    
    sumI <= $signed(accumulated_input[31:0]) + $signed(minimum);
    multiI <= (sumI) * 10000;
    shiftI <= multiI >>19; 
    //0.4096 in (18 bit fraction)
    normalizedI <= shiftI * 18'd107374; 
    
    sumQ <= $signed(accumulated_input[63:32]) + $signed(minimum);
    multiQ <= sumQ * 10000;
    shiftQ <= multiQ >>19;
    //0.4096 in (18 bit fraction)
    normalizedQ <= shiftQ * 18'd107374;
end

endmodule

