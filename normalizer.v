`timescale 1 ns / 1 ps
module normalizer(
    clk,
    stb_start,
    accumulated_input,
    normalized_output,
    NN_startTrigger,
);
localparam DATA_WIDTH  = 27;
localparam INPUT_WIDTH = 32;

input clk;
input stb_start;
input  [(INPUT_WIDTH*2)-1:0] accumulated_input;
output [(DATA_WIDTH*2)-1:0] normalized_output;
output NN_startTrigger;

// reg signed [INPUT_WIDTH - 1:0] minimumI_w = 262143;
// reg signed [INPUT_WIDTH - 1:0] minimumQ_w = 262143;
reg signed [INPUT_WIDTH - 1:0] minimumI;
reg signed [INPUT_WIDTH - 1:0] minimumQ;
reg [49:0] sumI = 0;
reg [49:0] sumQ = 0;
reg signed [DATA_WIDTH - 1:0] normalizedI = 0;
reg signed [DATA_WIDTH - 1:0] normalizedQ = 0;
reg signed [INPUT_WIDTH - 1:0] dataI;
reg signed [INPUT_WIDTH - 1:0] dataQ;

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
assign normalized_output = {normalizedI,normalizedQ};
reg [49:0] sumI_r = 0;
reg [49:0] sumQ_r = 0;

always @(posedge clk) begin  
    dataI <= accumulated_input[63:32];
    minimumI <= (1 << 18) - 1;
    sumI_r <= dataI + minimumI;
    sumI <= sumI_r; 
    normalizedI <= (sumI << 17) >> 19;
    
    dataQ <= accumulated_input[31:0];
    minimumQ <= (1 << 18) - 1;
    sumQ_r <= dataQ + minimumQ;
    sumQ <= sumQ_r;
    normalizedQ <= (sumQ << 17) >> 19;
end

endmodule

