`timescale 1 ns / 1 ps 
module ml_interface(
    clk,
    rst,
    start_trigger,
    accumulated_data,
    idle,
    ready,
    inference_prob,
    inference_state,
    done_trigger
);

localparam inWidth = 32;
localparam outWidth = 18;
//Input Signals
input clk;
input start_trigger;
input rst;
input [(inWidth*2)-1:0] accumulated_data;
// Output Signals
output idle;
output ready;
output [outWidth-1:0] inference_prob;
output inference_state;
output done_trigger;

reg [(outWidth*2)-1:0] normalized_data;
reg NN_startTrigger=0;

normalizer normalizer(
    .clk(clk),
    .stb_start(start_trigger),
    .accumulated_input(accumulated_data),
    .normalized_output(normalized_data),
    .NN_startTrigger(NN_startTrigger)
);

nn_model nn_model(
    .ap_clk(clk),
    .ap_rst(rst),
    .ap_start(NN_startTrigger),
    .input_2_V(normalized_data),
    .ap_idle(idle),
    .ap_ready(ready),
    .ap_done(done_trigger),
    .layer7_out_0_V(inference_prob),
    .layer7_state(inference_state)
);

initial begin

    $dumpvars(1,ml_interface);
end
endmodule