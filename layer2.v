`timescale 1 ns / 1 ps 
module layer2 (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_ce
);


input   ap_clk;
input   ap_rst;
localparam DS = 17;
localparam MS = 29;
input  [DS:0] data_0_V_read;
input  [DS:0] data_1_V_read;
input  [DS:0] data_2_V_read;
input  [DS:0] data_3_V_read;
input  [DS:0] data_4_V_read;
input  [DS:0] data_5_V_read;
input  [DS:0] data_6_V_read;
input  [DS:0] data_7_V_read;
output  [DS:0] ap_return_0;
output  [DS:0] ap_return_1;
output  [DS:0] ap_return_2;
output  [DS:0] ap_return_3;
input   ap_ce;

reg[DS:0] ap_return_0;
reg[DS:0] ap_return_1;
reg[DS:0] ap_return_2;
reg[DS:0] ap_return_3;
reg  signed [DS:0] data_7_V_read11_reg_3987;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg  signed [DS:0] data_6_V_read_2_reg_3995;
reg  signed [DS:0] data_5_V_read_2_reg_4003;
reg  signed [DS:0] data_4_V_read_2_reg_4009;
reg   [DS:0] tmp_1_reg_4017;
reg   [DS:0] tmp_17_0_1_reg_4022;
reg   [DS:0] tmp_17_0_2_reg_4027;
reg   [DS:0] tmp_4_reg_4032;
reg   [DS:0] tmp_17_1_reg_4037;
reg   [DS:0] tmp_7_reg_4042;
reg   [DS:0] tmp_17_1_2_reg_4047;
reg   [DS:0] tmp_17_1_3_reg_4052;
reg   [DS:0] tmp_s_reg_4057;
reg   [DS:0] tmp_17_2_1_reg_4062;
reg   [DS:0] tmp_17_2_2_reg_4067;
reg   [DS:0] tmp_17_2_3_reg_4072;
reg   [DS:0] tmp_3_reg_4077;
reg   [DS:0] tmp_17_3_1_reg_4082;
reg   [DS:0] tmp_17_3_2_reg_4087;
reg   [DS:0] tmp_17_3_3_reg_4092;
reg   [DS:0] tmp_9_reg_4097;
reg   [DS:0] tmp_17_4_1_reg_4102;
reg   [DS:0] tmp_11_reg_4107;
reg   [DS:0] tmp_13_reg_4112;
reg   [DS:0] tmp_17_5_reg_4117;
reg   [DS:0] tmp_17_5_1_reg_4122;
reg   [DS:0] tmp_17_5_2_reg_4127;
reg   [DS:0] tmp_15_reg_4132;
reg   [DS:0] tmp_17_6_reg_4137;
reg   [DS:0] tmp_18_reg_4142;
reg   [DS:0] tmp_19_reg_4147;
reg   [DS:0] tmp_21_reg_4152;
reg   [DS:0] tmp_17_7_reg_4157;
reg   [DS:0] tmp_24_reg_4162;
reg   [DS:0] tmp_26_reg_4167;
wire   [DS:0] tmp_fu_3769_p2;
reg   [DS:0] tmp_reg_4172;
wire   [DS:0] tmp15_fu_3784_p2;
reg   [DS:0] tmp15_reg_4177;
wire   [DS:0] tmp21_fu_3790_p2;
reg   [DS:0] tmp21_reg_4182;
wire   [DS:0] tmp22_fu_3804_p2;
reg   [DS:0] tmp22_reg_4187;
wire   [DS:0] tmp29_fu_3819_p2;
reg   [DS:0] tmp29_reg_4192;
wire  signed [DS:0] r_V_8_3_fu_192_p0;
wire    ap_block_pp0_stage0;
wire  signed [DS:0] r_V_8_6_2_fu_193_p0;
wire  signed [DS:0] r_V_8_5_3_fu_194_p0;
wire  signed [DS:0] r_V_8_5_fu_195_p0;
wire  signed [DS:0] r_V_5_cast_fu_3557_p1;
wire  signed [DS:0] r_V_8_4_2_fu_196_p0;
wire  signed [DS:0] r_V_4_cast_fu_3476_p1;
wire  signed [DS:0] r_V_8_0_2_fu_197_p0;
wire  signed [DS:0] r_V_cast_fu_3225_p1;
wire  signed [DS:0] r_V_8_3_3_fu_198_p0;
wire  signed [DS:0] r_V_3_cast1_fu_3412_p1;
wire  signed [DS:0] r_V_8_6_3_fu_200_p0;
wire  signed [DS:0] r_V_6_cast2_fu_3607_p1;
wire  signed [DS:0] r_V_8_3_1_fu_202_p0;
wire  signed [DS:0] r_V_8_1_1_fu_203_p0;
wire  signed [DS:0] r_V_8_2_1_fu_204_p0;
wire  signed [DS:0] r_V_2_cast1_fu_3360_p1;
wire  signed [DS:0] r_V_8_7_fu_205_p0;
wire  signed [DS:0] r_V_8_5_2_fu_206_p0;
wire  signed [DS:0] r_V_8_4_3_fu_207_p0;
wire  signed [DS:0] r_V_8_5_1_fu_208_p0;
wire  signed [DS:0] r_V_8_1_2_fu_210_p0;
wire  signed [DS:0] r_V_1_cast_fu_3313_p1;
wire  signed [DS:0] r_V_8_6_fu_211_p0;
wire  signed [DS:0] r_V_8_2_2_fu_212_p0;
wire  signed [DS:0] r_V_8_2_fu_213_p0;
wire  signed [DS:0] r_V_8_3_2_fu_214_p0;
wire  signed [DS:0] r_V_8_0_1_fu_215_p0;
wire  signed [DS:0] r_V_8_4_1_fu_216_p0;
wire  signed [DS:0] r_V_8_2_3_fu_217_p0;
wire  signed [DS:0] r_V_8_7_2_fu_218_p0;
wire  signed [DS:0] r_V_7_cast_fu_3672_p1;
wire  signed [DS:0] r_V_8_1_3_fu_219_p0;
wire  signed [DS:0] r_V_8_fu_221_p0;
wire  signed [DS:0] r_V_8_7_3_fu_222_p0;
wire  signed [DS:0] r_V_8_1_fu_223_p0;
wire  signed [DS:0] r_V_cast_fu_3225_p0;
wire   [MS:0] r_V_8_fu_221_p2;
wire   [MS:0] r_V_8_0_1_fu_215_p2;
wire   [MS:0] r_V_8_0_2_fu_197_p2;
wire  signed [DS:0] r_V_neel_D4_1;
wire signed [DS:0] r_V_neel_D6_2;
wire signed [DS:0] r_V_neel_D7_2;
wire signed [DS:0] r_V_neel_D0_3;
wire  [MS:0] r_V_8_0_3_fu_3292_p2;
wire  signed [DS:0] r_V_1_cast1_fu_3308_p0;
wire  signed [DS:0] r_V_1_cast_fu_3313_p0;
wire   [MS:0] r_V_8_1_fu_223_p2;
wire   [MS:0] r_V_8_1_1_fu_203_p2;
wire   [MS:0] r_V_8_1_2_fu_210_p2;
wire   [MS:0] r_V_8_1_3_fu_219_p2;
wire  signed [DS:0] r_V_2_cast1_fu_3360_p0;
wire  signed [DS:0] r_V_2_cast_fu_3367_p0;
wire   [MS:0] r_V_8_2_fu_213_p2;
wire   [MS:0] r_V_8_2_1_fu_204_p2;
wire   [MS:0] r_V_8_2_2_fu_212_p2;
wire   [MS:0] r_V_8_2_3_fu_217_p2;
wire  signed [DS:0] r_V_3_cast1_fu_3412_p0;
wire  signed [DS:0] r_V_3_cast_fu_3419_p0;
wire   [MS:0] r_V_8_3_fu_192_p2;
wire   [MS:0] r_V_8_3_1_fu_202_p2;
wire   [MS:0] r_V_8_3_2_fu_214_p2;
wire   [MS:0] r_V_8_3_3_fu_198_p2;
wire   [MS:0] r_V_8_4_fu_3507_p2;
wire   [MS:0] r_V_8_4_1_fu_216_p2;
wire   [MS:0] r_V_8_4_2_fu_196_p2;
wire   [MS:0] r_V_8_4_3_fu_207_p2;
wire   [MS:0] r_V_8_5_fu_195_p2;
wire   [MS:0] r_V_8_5_1_fu_208_p2;
wire   [MS:0] r_V_8_5_2_fu_206_p2;
wire   [MS:0] r_V_8_5_3_fu_194_p2;
wire   [MS:0] r_V_8_6_fu_211_p2;
wire   [MS:0] r_V_8_6_1_fu_3636_p2;
wire   [MS:0] r_V_8_6_2_fu_193_p2;
wire   [MS:0] r_V_8_6_3_fu_200_p2;
wire   [MS:0] r_V_8_7_fu_205_p2;
wire   [MS:0] r_V_8_7_1_fu_3719_p2;
reg   [DS:0] tmp_23_fu_3725_p4;
wire   [MS:0] r_V_8_7_2_fu_218_p2;
wire   [MS:0] r_V_8_7_3_fu_222_p2;
wire  signed [DS:0] tmp_6_fu_3473_p1;
wire  signed [DS:0] tmp_2_fu_3470_p1;
wire   [DS:0] tmp9_fu_3759_p2;
wire   [DS:0] tmp10_fu_3763_p2;
wire  signed [DS:0] tmp_8_fu_3467_p1;
wire   [DS:0] tmp16_fu_3775_p2;
wire   [DS:0] tmp17_fu_3780_p2;
wire  signed [DS:0] tmp_25_cast_fu_3735_p1;
wire   [DS:0] tmp23_fu_3796_p2;
wire   [DS:0] tmp24_fu_3800_p2;
wire  signed [DS:0] tmp_5_fu_3464_p1;
wire   [DS:0] tmp30_fu_3810_p2;
wire   [DS:0] tmp31_fu_3815_p2;
wire  signed [DS:0] tmp_10_fu_3825_p1;
wire   [DS:0] tmp14_fu_3857_p2;
wire   [DS:0] tmp12_fu_3852_p2;
wire   [DS:0] tmp13_fu_3862_p2;
wire   [DS:0] tmp11_fu_3867_p2;
wire  signed [DS:0] tmp_19_cast_fu_3837_p1;
wire  signed [DS:0] tmp21_cast_fu_3882_p1;
wire   [DS:0] tmp20_fu_3885_p2;
wire   [DS:0] tmp19_fu_3878_p2;
wire  signed [DS:0] tmp20_cast_fu_3891_p1;
wire   [DS:0] tmp18_fu_3895_p2;
wire  signed [DS:0] tmp_12_fu_3828_p1;
wire  signed [DS:0] tmp_25_fu_3846_p1;
wire  signed [DS:0] tmp_20_fu_3840_p1;
wire   [DS:0] tmp28_fu_3911_p2;
wire   [DS:0] tmp26_fu_3906_p2;
wire   [DS:0] tmp27_fu_3917_p2;
wire   [DS:0] tmp25_fu_3923_p2;
wire  signed [DS:0] tmp_16_fu_3834_p1;
wire  signed [DS:0] tmp_14_fu_3831_p1;
wire  signed [DS:0] tmp_27_fu_3849_p1;
wire  signed [DS:0] tmp_22_fu_3843_p1;
wire   [DS:0] tmp35_fu_3940_p2;
wire   [DS:0] tmp33_fu_3934_p2;
wire   [DS:0] tmp34_fu_3946_p2;
wire   [DS:0] tmp32_fu_3952_p2;
wire   [DS:0] res_0_V_write_assign_fu_3873_p2;
wire   [DS:0] acc_1_V_fu_3901_p2;
wire   [DS:0] acc_2_V_fu_3929_p2;
wire   [DS:0] acc_3_V_fu_3958_p2;
reg    ap_ce_reg;
reg   [DS:0] data_0_V_read_int_reg;
reg   [DS:0] data_1_V_read_int_reg;
reg   [DS:0] data_2_V_read_int_reg;
reg   [DS:0] data_3_V_read_int_reg;
reg   [DS:0] data_4_V_read_int_reg;
reg   [DS:0] data_5_V_read_int_reg;
reg   [DS:0] data_6_V_read_int_reg;
reg   [DS:0] data_7_V_read_int_reg;
reg   [DS:0] ap_return_0_int_reg;
reg   [DS:0] ap_return_1_int_reg;
reg   [DS:0] ap_return_2_int_reg;
reg   [DS:0] ap_return_3_int_reg;


reg signed [DS:0] w0_0;
reg signed[DS:0] w0_1;
reg signed [DS:0] w0_2;
reg signed [DS:0] w0_3;
reg signed [DS:0] w1_0;
reg signed [DS:0] w1_1;
reg signed [DS:0] w1_2;
reg signed [DS:0] w1_3;
reg signed [DS:0] w2_0;
reg signed [DS:0] w2_1;
reg signed [DS:0] w2_2;
reg signed [DS:0] w2_3;
reg signed [DS:0] w3_0;
reg signed [DS:0] w3_1;
reg signed [DS:0] w3_2;
reg signed [DS:0] w3_3;
reg signed [DS:0] w4_0;
reg signed [DS:0] w4_1;
reg signed [DS:0] w4_2;
reg signed [DS:0] w4_3;
reg signed [DS:0] w5_0;
reg signed [DS:0] w5_1;
reg signed [DS:0] w5_2;
reg signed [DS:0] w5_3;
reg signed [DS:0] w6_0;
reg signed [DS:0] w6_1;
reg signed [DS:0] w6_2;
reg signed [DS:0] w6_3;
reg signed [DS:0] w7_0;
reg signed [DS:0] w7_1;
reg signed [DS:0] w7_2;
reg signed [DS:0] w7_3;
reg signed [DS:0] b0;
reg signed [DS:0] b1;
reg signed [DS:0] b2;
reg signed [DS:0] b3;

initial begin
w0_0 = 260105 ;
w0_1 = 261076 ;
w0_2 = 1240 ;
w0_3 = 2377 ;
w1_0 = 260362 ;
w1_1 = 6050 ;
w1_2 = 261792 ;
w1_3 = 7072 ;
w2_0 = 261219 ;
w2_1 = 261083 ;
w2_2 = 231 ;
w2_3 = 2514 ;
w3_0 = 1992 ;
w3_1 = 2883 ;
w3_2 = 260124 ;
w3_3 = 260161 ;
w4_0 = 260317 ;
w4_1 = 259731 ;
w4_2 = 261824 ;
w4_3 = 261593 ;
w5_0 = 2757 ;
w5_1 = 261239 ;
w5_2 = 1128 ;
w5_3 = 259316 ;
w6_0 = 796 ;
w6_1 = 9162 ;
w6_2 = 260588 ;
w6_3 = 13399 ;
w7_0 = 2316 ;
w7_1 = 11726 ;
w7_2 = 80 ;
w7_3 = 8325 ;
b0 = 262129 ;
b1 = 259931 ;
b2 = 0 ;
b3 = 259739 ;
end 

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_0_int_reg <= res_0_V_write_assign_fu_3873_p2;
        ap_return_1_int_reg <= acc_1_V_fu_3901_p2;
        ap_return_2_int_reg <= acc_2_V_fu_3929_p2;
        ap_return_3_int_reg <= acc_3_V_fu_3958_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        data_0_V_read_int_reg <= data_0_V_read;
        data_1_V_read_int_reg <= data_1_V_read;
        data_2_V_read_int_reg <= data_2_V_read;
        data_3_V_read_int_reg <= data_3_V_read;
        data_4_V_read_int_reg <= data_4_V_read;
        data_5_V_read_int_reg <= data_5_V_read;
        data_6_V_read_int_reg <= data_6_V_read;
        data_7_V_read_int_reg <= data_7_V_read;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce_reg) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_4_V_read_2_reg_4009 <= data_4_V_read_int_reg;
        data_5_V_read_2_reg_4003 <= data_5_V_read_int_reg;
        data_6_V_read_2_reg_3995 <= data_6_V_read_int_reg;
        data_7_V_read11_reg_3987 <= data_7_V_read_int_reg;
        tmp15_reg_4177 <= tmp15_fu_3784_p2;
        tmp21_reg_4182 <= tmp21_fu_3790_p2;
        tmp22_reg_4187 <= tmp22_fu_3804_p2;
        tmp29_reg_4192 <= tmp29_fu_3819_p2;
        tmp_11_reg_4107 <= {{r_V_8_4_2_fu_196_p2[MS:MS-DS]}};
        tmp_13_reg_4112 <= {{r_V_8_4_3_fu_207_p2[MS:MS-DS]}};
        tmp_15_reg_4132 <= {{r_V_8_5_3_fu_194_p2[MS:MS-DS]}};
        tmp_17_0_1_reg_4022 <= {{r_V_8_0_1_fu_215_p2[MS:MS-DS]}};
        tmp_17_0_2_reg_4027 <= {{r_V_8_0_2_fu_197_p2[MS:MS-DS]}};
        tmp_17_1_2_reg_4047 <= {{r_V_8_1_2_fu_210_p2[MS:MS-DS]}};
        tmp_17_1_3_reg_4052 <= {{r_V_8_1_3_fu_219_p2[MS:MS-DS]}};
        tmp_17_1_reg_4037 <= {{r_V_8_1_fu_223_p2[MS:MS-DS]}};
        tmp_17_2_1_reg_4062 <= {{r_V_8_2_1_fu_204_p2[MS:MS-DS]}};
        tmp_17_2_2_reg_4067 <= {{r_V_8_2_2_fu_212_p2[MS:MS-DS]}};
        tmp_17_2_3_reg_4072 <= {{r_V_8_2_3_fu_217_p2[MS:MS-DS]}};
        tmp_17_3_1_reg_4082 <= {{r_V_8_3_1_fu_202_p2[MS:MS-DS]}};
        tmp_17_3_2_reg_4087 <= {{r_V_8_3_2_fu_214_p2[MS:MS-DS]}};
        tmp_17_3_3_reg_4092 <= {{r_V_8_3_3_fu_198_p2[MS:MS-DS]}};
        tmp_17_4_1_reg_4102 <= {{r_V_8_4_1_fu_216_p2[MS:MS-DS]}};
        tmp_17_5_1_reg_4122 <= {{r_V_8_5_1_fu_208_p2[MS:MS-DS]}};
        tmp_17_5_2_reg_4127 <= {{r_V_8_5_2_fu_206_p2[MS:MS-DS]}};
        tmp_17_5_reg_4117 <= {{r_V_8_5_fu_195_p2[MS:MS-DS]}};
        tmp_17_6_reg_4137 <= {{r_V_8_6_fu_211_p2[MS:MS-DS]}};
        tmp_17_7_reg_4157 <= {{r_V_8_7_fu_205_p2[MS:MS-DS]}};
        tmp_18_reg_4142 <= {{r_V_8_6_1_fu_3636_p2[MS:MS-DS]}};
        tmp_19_reg_4147 <= {{r_V_8_6_2_fu_193_p2[MS:MS-DS]}};
        tmp_1_reg_4017 <= {{r_V_8_fu_221_p2[MS:MS-DS]}};
        tmp_21_reg_4152 <= {{r_V_8_6_3_fu_200_p2[MS:MS-DS]}};
        tmp_24_reg_4162 <= {{r_V_8_7_2_fu_218_p2[MS:MS-DS]}};
        tmp_26_reg_4167 <= {{r_V_8_7_3_fu_222_p2[MS:MS-DS]}};
        tmp_3_reg_4077 <= {{r_V_8_3_fu_192_p2[MS:MS-DS]}};
        tmp_4_reg_4032 <= {{r_V_8_0_3_fu_3292_p2[MS:MS-DS]}};
        tmp_7_reg_4042 <= {{r_V_8_1_1_fu_203_p2[MS:MS-DS]}};
        tmp_9_reg_4097 <= {{r_V_8_4_fu_3507_p2[MS:MS-DS]}};
        tmp_reg_4172 <= tmp_fu_3769_p2;
        tmp_s_reg_4057 <= {{r_V_8_2_fu_213_p2[MS:MS-DS]}};
        tmp_23_fu_3725_p4 <= {{r_V_8_7_1_fu_3719_p2[MS:MS-DS]}};
    end
end
always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_0 = ap_return_0_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_0 = res_0_V_write_assign_fu_3873_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_1 = ap_return_1_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_1 = acc_1_V_fu_3901_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_2 = ap_return_2_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_2 = acc_2_V_fu_3929_p2;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return_3 = ap_return_3_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return_3 = acc_3_V_fu_3958_p2;
    end
end

assign acc_1_V_fu_3901_p2 = (tmp15_reg_4177 + tmp18_fu_3895_p2);

assign acc_2_V_fu_3929_p2 = (tmp22_reg_4187 + tmp25_fu_3923_p2);

assign acc_3_V_fu_3958_p2 = (tmp29_reg_4192 + tmp32_fu_3952_p2);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign r_V_neel_D0_3 = r_V_cast_fu_3225_p1;

assign r_V_neel_D7_2 = r_V_7_cast_fu_3672_p1;

assign r_V_neel_D6_2 = r_V_6_cast2_fu_3607_p1;

assign r_V_neel_D4_1 = r_V_4_cast_fu_3476_p1;

assign r_V_1_cast1_fu_3308_p0 = data_1_V_read_int_reg;

assign r_V_1_cast_fu_3313_p0 = data_1_V_read_int_reg;

assign r_V_1_cast_fu_3313_p1 = r_V_1_cast_fu_3313_p0;

assign r_V_2_cast1_fu_3360_p0 = data_2_V_read_int_reg;

assign r_V_2_cast1_fu_3360_p1 = r_V_2_cast1_fu_3360_p0;

assign r_V_2_cast_fu_3367_p0 = data_2_V_read_int_reg;

assign r_V_3_cast1_fu_3412_p0 = data_3_V_read_int_reg;

assign r_V_3_cast1_fu_3412_p1 = r_V_3_cast1_fu_3412_p0;

assign r_V_3_cast_fu_3419_p0 = data_3_V_read_int_reg;

assign r_V_4_cast_fu_3476_p1 = data_4_V_read_2_reg_4009;

assign r_V_5_cast_fu_3557_p1 = data_5_V_read_2_reg_4003;

assign r_V_6_cast2_fu_3607_p1 = data_6_V_read_2_reg_3995;

assign r_V_7_cast_fu_3672_p1 = data_7_V_read11_reg_3987;

assign r_V_8_0_1_fu_215_p0 = r_V_cast_fu_3225_p1;

assign r_V_8_0_1_fu_215_p2 = ($signed(r_V_8_0_1_fu_215_p0) * $signed(w0_1));

assign r_V_8_0_2_fu_197_p0 = r_V_cast_fu_3225_p1;

assign r_V_8_0_2_fu_197_p2 = ($signed(r_V_8_0_2_fu_197_p0) * $signed(w0_2));

assign r_V_8_0_3_fu_3292_p2 = ($signed(w0_3) * $signed(r_V_neel_D0_3));

assign r_V_8_1_1_fu_203_p0 = r_V_1_cast1_fu_3308_p0;

assign r_V_8_1_1_fu_203_p2 = ($signed(r_V_8_1_1_fu_203_p0) * $signed(w1_1));

assign r_V_8_1_2_fu_210_p0 = r_V_1_cast_fu_3313_p1;

assign r_V_8_1_2_fu_210_p2 = ($signed(r_V_8_1_2_fu_210_p0) * $signed(w1_2));

assign r_V_8_1_3_fu_219_p0 = r_V_1_cast_fu_3313_p1;

assign r_V_8_1_3_fu_219_p2 = ($signed(r_V_8_1_3_fu_219_p0) * $signed(w1_3));

assign r_V_8_1_fu_223_p0 = r_V_1_cast_fu_3313_p1;

assign r_V_8_1_fu_223_p2 = ($signed(r_V_8_1_fu_223_p0) * $signed(w1_0));

assign r_V_8_2_1_fu_204_p0 = r_V_2_cast1_fu_3360_p1;

assign r_V_8_2_1_fu_204_p2 = ($signed(r_V_8_2_1_fu_204_p0) * $signed(w2_1));

assign r_V_8_2_2_fu_212_p0 = r_V_2_cast1_fu_3360_p1;

assign r_V_8_2_2_fu_212_p2 = ($signed(r_V_8_2_2_fu_212_p0) * $signed(w2_2));

assign r_V_8_2_3_fu_217_p0 = r_V_2_cast1_fu_3360_p1;

assign r_V_8_2_3_fu_217_p2 = ($signed(r_V_8_2_3_fu_217_p0) * $signed(w2_3));

assign r_V_8_2_fu_213_p0 = r_V_2_cast_fu_3367_p0;

assign r_V_8_2_fu_213_p2 = ($signed(r_V_8_2_fu_213_p0) * $signed(w2_0));

assign r_V_8_3_1_fu_202_p0 = r_V_3_cast1_fu_3412_p1;

assign r_V_8_3_1_fu_202_p2 = ($signed(r_V_8_3_1_fu_202_p0) * $signed(w3_1));

assign r_V_8_3_2_fu_214_p0 = r_V_3_cast1_fu_3412_p1;

assign r_V_8_3_2_fu_214_p2 = ($signed(r_V_8_3_2_fu_214_p0) * $signed(w3_2));

assign r_V_8_3_3_fu_198_p0 = r_V_3_cast1_fu_3412_p1;

assign r_V_8_3_3_fu_198_p2 = ($signed(r_V_8_3_3_fu_198_p0) * $signed(w3_3));

assign r_V_8_3_fu_192_p0 = r_V_3_cast_fu_3419_p0;

assign r_V_8_3_fu_192_p2 = ($signed(r_V_8_3_fu_192_p0) * $signed(w3_0));

assign r_V_8_4_1_fu_216_p0 = data_4_V_read_2_reg_4009;

assign r_V_8_4_1_fu_216_p2 = ($signed(r_V_8_4_1_fu_216_p0) * $signed(w4_1));

assign r_V_8_4_2_fu_196_p0 = r_V_4_cast_fu_3476_p1;

assign r_V_8_4_2_fu_196_p2 = ($signed(r_V_8_4_2_fu_196_p0) * $signed(w4_2));

assign r_V_8_4_3_fu_207_p0 = r_V_4_cast_fu_3476_p1;

assign r_V_8_4_3_fu_207_p2 = ($signed(r_V_8_4_3_fu_207_p0) * $signed(w4_3));

assign r_V_8_4_fu_3507_p2 = ($signed(w4_0) * $signed(r_V_neel_D4_1));

assign r_V_8_5_1_fu_208_p0 = r_V_5_cast_fu_3557_p1;

assign r_V_8_5_1_fu_208_p2 = ($signed(r_V_8_5_1_fu_208_p0) * $signed(w5_1));

assign r_V_8_5_2_fu_206_p0 = r_V_5_cast_fu_3557_p1;

assign r_V_8_5_2_fu_206_p2 = ($signed(r_V_8_5_2_fu_206_p0) * $signed(w5_2));

assign r_V_8_5_3_fu_194_p0 = data_5_V_read_2_reg_4003;

assign r_V_8_5_3_fu_194_p2 = ($signed(r_V_8_5_3_fu_194_p0) * $signed(w5_3));

assign r_V_8_5_fu_195_p0 = r_V_5_cast_fu_3557_p1;

assign r_V_8_5_fu_195_p2 = ($signed(r_V_8_5_fu_195_p0) * $signed(w5_0));

assign r_V_8_6_1_fu_3636_p2 = ($signed(w6_1) * $signed(r_V_neel_D6_2));

assign r_V_8_6_2_fu_193_p0 = data_6_V_read_2_reg_3995;

assign r_V_8_6_2_fu_193_p2 = ($signed(r_V_8_6_2_fu_193_p0) * $signed(w6_2));

assign r_V_8_6_3_fu_200_p0 = r_V_6_cast2_fu_3607_p1;

assign r_V_8_6_3_fu_200_p2 = ($signed(r_V_8_6_3_fu_200_p0) * $signed(w6_3));

assign r_V_8_6_fu_211_p0 = data_6_V_read_2_reg_3995;

assign r_V_8_6_fu_211_p2 = ($signed(r_V_8_6_fu_211_p0) * $signed(w6_0));

assign r_V_8_7_1_fu_3719_p2 = ($signed(w7_1) * $signed(r_V_neel_D7_2));

assign r_V_8_7_2_fu_218_p0 = r_V_7_cast_fu_3672_p1;

assign r_V_8_7_2_fu_218_p2 = ($signed(r_V_8_7_2_fu_218_p0) * $signed(w7_2));

assign r_V_8_7_3_fu_222_p0 = r_V_7_cast_fu_3672_p1;

assign r_V_8_7_3_fu_222_p2 = ($signed(r_V_8_7_3_fu_222_p0) * $signed(w7_3));

assign r_V_8_7_fu_205_p0 = data_7_V_read11_reg_3987;

assign r_V_8_7_fu_205_p2 = ($signed(r_V_8_7_fu_205_p0) * $signed(w7_0));

assign r_V_8_fu_221_p0 = r_V_cast_fu_3225_p1;

assign r_V_8_fu_221_p2 = ($signed(r_V_8_fu_221_p0) * $signed(w0_0));

assign r_V_cast_fu_3225_p0 = data_0_V_read_int_reg;

assign r_V_cast_fu_3225_p1 = r_V_cast_fu_3225_p0;

assign res_0_V_write_assign_fu_3873_p2 = (tmp_reg_4172 + tmp11_fu_3867_p2);

assign tmp10_fu_3763_p2 = ($signed(tmp_6_fu_3473_p1) + $signed(tmp_2_fu_3470_p1));

assign tmp11_fu_3867_p2 = (tmp12_fu_3852_p2 + tmp13_fu_3862_p2);

assign tmp12_fu_3852_p2 = ($signed(tmp_17_5_reg_4117) + $signed(tmp_10_fu_3825_p1));

assign tmp13_fu_3862_p2 = (tmp_17_6_reg_4137 + tmp14_fu_3857_p2);

assign tmp14_fu_3857_p2 = ($signed(tmp_17_7_reg_4157) + $signed(b0));

assign tmp15_fu_3784_p2 = (tmp16_fu_3775_p2 + tmp17_fu_3780_p2);

assign tmp16_fu_3775_p2 = ($signed(tmp_8_fu_3467_p1) + $signed(tmp_17_0_1_reg_4022));

assign tmp17_fu_3780_p2 = (tmp_17_3_1_reg_4082 + tmp_17_2_1_reg_4062);

assign tmp18_fu_3895_p2 = ($signed(tmp19_fu_3878_p2) + $signed(tmp20_cast_fu_3891_p1));

assign tmp19_fu_3878_p2 = (tmp_17_5_1_reg_4122 + tmp_17_4_1_reg_4102);

assign tmp20_cast_fu_3891_p1 = $signed(tmp20_fu_3885_p2);

assign tmp20_fu_3885_p2 = ($signed(tmp_19_cast_fu_3837_p1) + $signed(tmp21_cast_fu_3882_p1));

assign tmp21_cast_fu_3882_p1 = $signed(tmp21_reg_4182);

assign tmp21_fu_3790_p2 = ($signed(tmp_25_cast_fu_3735_p1) + $signed(b1));

assign tmp22_fu_3804_p2 = (tmp23_fu_3796_p2 + tmp24_fu_3800_p2);

assign tmp23_fu_3796_p2 = (tmp_17_1_2_reg_4047 + tmp_17_0_2_reg_4027);

assign tmp24_fu_3800_p2 = (tmp_17_3_2_reg_4087 + tmp_17_2_2_reg_4067);

assign tmp25_fu_3923_p2 = (tmp26_fu_3906_p2 + tmp27_fu_3917_p2);

assign tmp26_fu_3906_p2 = ($signed(tmp_17_5_2_reg_4127) + $signed(tmp_12_fu_3828_p1));

assign tmp27_fu_3917_p2 = ($signed(tmp_20_fu_3840_p1) + $signed(tmp28_fu_3911_p2));

assign tmp28_fu_3911_p2 = ($signed(tmp_25_fu_3846_p1) + $signed(b2));

assign tmp29_fu_3819_p2 = (tmp30_fu_3810_p2 + tmp31_fu_3815_p2);

assign tmp30_fu_3810_p2 = ($signed(tmp_17_1_3_reg_4052) + $signed(tmp_5_fu_3464_p1));

assign tmp31_fu_3815_p2 = (tmp_17_3_3_reg_4092 + tmp_17_2_3_reg_4072);

assign tmp32_fu_3952_p2 = (tmp33_fu_3934_p2 + tmp34_fu_3946_p2);

assign tmp33_fu_3934_p2 = ($signed(tmp_16_fu_3834_p1) + $signed(tmp_14_fu_3831_p1));

assign tmp34_fu_3946_p2 = ($signed(tmp_22_fu_3843_p1) + $signed(tmp35_fu_3940_p2));

assign tmp35_fu_3940_p2 = ($signed(tmp_27_fu_3849_p1) + $signed(b3));

assign tmp9_fu_3759_p2 = (tmp_17_1_reg_4037 + tmp_1_reg_4017);

assign tmp_10_fu_3825_p1 = $signed(tmp_9_reg_4097);

assign tmp_12_fu_3828_p1 = $signed(tmp_11_reg_4107);

assign tmp_14_fu_3831_p1 = $signed(tmp_13_reg_4112);

assign tmp_16_fu_3834_p1 = $signed(tmp_15_reg_4132);

assign tmp_19_cast_fu_3837_p1 = $signed(tmp_18_reg_4142);

assign tmp_20_fu_3840_p1 = $signed(tmp_19_reg_4147);

assign tmp_22_fu_3843_p1 = $signed(tmp_21_reg_4152);

assign tmp_25_cast_fu_3735_p1 = $signed(tmp_23_fu_3725_p4);

assign tmp_25_fu_3846_p1 = $signed(tmp_24_reg_4162);

assign tmp_27_fu_3849_p1 = $signed(tmp_26_reg_4167);

assign tmp_2_fu_3470_p1 = $signed(tmp_s_reg_4057);

assign tmp_5_fu_3464_p1 = $signed(tmp_4_reg_4032);

assign tmp_6_fu_3473_p1 = $signed(tmp_3_reg_4077);

assign tmp_8_fu_3467_p1 = $signed(tmp_7_reg_4042);

assign tmp_fu_3769_p2 = (tmp9_fu_3759_p2 + tmp10_fu_3763_p2);

initial begin

    $dumpvars(1,layer2);
end

endmodule //test