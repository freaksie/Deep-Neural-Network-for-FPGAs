// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ap_clk,0,0);
        VL_IN8(ap_rst,0,0);
        VL_IN8(ap_ce,0,0);
        CData/*0:0*/ layer2__DOT__ap_clk;
        CData/*0:0*/ layer2__DOT__ap_rst;
        CData/*0:0*/ layer2__DOT__ap_ce;
        CData/*0:0*/ layer2__DOT__ap_block_state1_pp0_stage0_iter0;
        CData/*0:0*/ layer2__DOT__ap_block_state2_pp0_stage0_iter1;
        CData/*0:0*/ layer2__DOT__ap_block_state3_pp0_stage0_iter2;
        CData/*0:0*/ layer2__DOT__ap_block_pp0_stage0_11001;
        CData/*0:0*/ layer2__DOT__ap_block_pp0_stage0;
        CData/*0:0*/ layer2__DOT__ap_ce_reg;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ap_clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(data_0_V_read,17,0);
        VL_IN(data_1_V_read,17,0);
        VL_IN(data_2_V_read,17,0);
        VL_IN(data_3_V_read,17,0);
        VL_IN(data_4_V_read,17,0);
        VL_IN(data_5_V_read,17,0);
        VL_IN(data_6_V_read,17,0);
        VL_IN(data_7_V_read,17,0);
        VL_OUT(ap_return_0,17,0);
        VL_OUT(ap_return_1,17,0);
        VL_OUT(ap_return_2,17,0);
        VL_OUT(ap_return_3,17,0);
        IData/*17:0*/ layer2__DOT__data_0_V_read;
        IData/*17:0*/ layer2__DOT__data_1_V_read;
        IData/*17:0*/ layer2__DOT__data_2_V_read;
        IData/*17:0*/ layer2__DOT__data_3_V_read;
        IData/*17:0*/ layer2__DOT__data_4_V_read;
        IData/*17:0*/ layer2__DOT__data_5_V_read;
        IData/*17:0*/ layer2__DOT__data_6_V_read;
        IData/*17:0*/ layer2__DOT__data_7_V_read;
        IData/*17:0*/ layer2__DOT__ap_return_0;
        IData/*17:0*/ layer2__DOT__ap_return_1;
        IData/*17:0*/ layer2__DOT__ap_return_2;
        IData/*17:0*/ layer2__DOT__ap_return_3;
        IData/*17:0*/ layer2__DOT__data_7_V_read11_reg_3987;
        IData/*17:0*/ layer2__DOT__data_6_V_read_2_reg_3995;
        IData/*17:0*/ layer2__DOT__data_5_V_read_2_reg_4003;
        IData/*17:0*/ layer2__DOT__data_4_V_read_2_reg_4009;
        IData/*17:0*/ layer2__DOT__tmp_1_reg_4017;
        IData/*17:0*/ layer2__DOT__tmp_17_0_1_reg_4022;
        IData/*17:0*/ layer2__DOT__tmp_17_0_2_reg_4027;
        IData/*17:0*/ layer2__DOT__tmp_4_reg_4032;
        IData/*17:0*/ layer2__DOT__tmp_17_1_reg_4037;
        IData/*17:0*/ layer2__DOT__tmp_7_reg_4042;
        IData/*17:0*/ layer2__DOT__tmp_17_1_2_reg_4047;
        IData/*17:0*/ layer2__DOT__tmp_17_1_3_reg_4052;
        IData/*17:0*/ layer2__DOT__tmp_s_reg_4057;
        IData/*17:0*/ layer2__DOT__tmp_17_2_1_reg_4062;
        IData/*17:0*/ layer2__DOT__tmp_17_2_2_reg_4067;
        IData/*17:0*/ layer2__DOT__tmp_17_2_3_reg_4072;
        IData/*17:0*/ layer2__DOT__tmp_3_reg_4077;
        IData/*17:0*/ layer2__DOT__tmp_17_3_1_reg_4082;
        IData/*17:0*/ layer2__DOT__tmp_17_3_2_reg_4087;
        IData/*17:0*/ layer2__DOT__tmp_17_3_3_reg_4092;
        IData/*17:0*/ layer2__DOT__tmp_9_reg_4097;
        IData/*17:0*/ layer2__DOT__tmp_17_4_1_reg_4102;
        IData/*17:0*/ layer2__DOT__tmp_11_reg_4107;
        IData/*17:0*/ layer2__DOT__tmp_13_reg_4112;
        IData/*17:0*/ layer2__DOT__tmp_17_5_reg_4117;
        IData/*17:0*/ layer2__DOT__tmp_17_5_1_reg_4122;
    };
    struct {
        IData/*17:0*/ layer2__DOT__tmp_17_5_2_reg_4127;
        IData/*17:0*/ layer2__DOT__tmp_15_reg_4132;
        IData/*17:0*/ layer2__DOT__tmp_17_6_reg_4137;
        IData/*17:0*/ layer2__DOT__tmp_18_reg_4142;
        IData/*17:0*/ layer2__DOT__tmp_19_reg_4147;
        IData/*17:0*/ layer2__DOT__tmp_21_reg_4152;
        IData/*17:0*/ layer2__DOT__tmp_17_7_reg_4157;
        IData/*17:0*/ layer2__DOT__tmp_24_reg_4162;
        IData/*17:0*/ layer2__DOT__tmp_26_reg_4167;
        IData/*17:0*/ layer2__DOT__tmp_fu_3769_p2;
        IData/*17:0*/ layer2__DOT__tmp_reg_4172;
        IData/*17:0*/ layer2__DOT__tmp15_fu_3784_p2;
        IData/*17:0*/ layer2__DOT__tmp15_reg_4177;
        IData/*17:0*/ layer2__DOT__tmp21_fu_3790_p2;
        IData/*17:0*/ layer2__DOT__tmp21_reg_4182;
        IData/*17:0*/ layer2__DOT__tmp22_fu_3804_p2;
        IData/*17:0*/ layer2__DOT__tmp22_reg_4187;
        IData/*17:0*/ layer2__DOT__tmp29_fu_3819_p2;
        IData/*17:0*/ layer2__DOT__tmp29_reg_4192;
        IData/*17:0*/ layer2__DOT__r_V_8_3_fu_192_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_6_2_fu_193_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_5_3_fu_194_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_5_fu_195_p0;
        IData/*17:0*/ layer2__DOT__r_V_5_cast_fu_3557_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_4_2_fu_196_p0;
        IData/*17:0*/ layer2__DOT__r_V_4_cast_fu_3476_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_0_2_fu_197_p0;
        IData/*17:0*/ layer2__DOT__r_V_cast_fu_3225_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_3_3_fu_198_p0;
        IData/*17:0*/ layer2__DOT__r_V_3_cast1_fu_3412_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_6_3_fu_200_p0;
        IData/*17:0*/ layer2__DOT__r_V_6_cast2_fu_3607_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_3_1_fu_202_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_1_1_fu_203_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_2_1_fu_204_p0;
        IData/*17:0*/ layer2__DOT__r_V_2_cast1_fu_3360_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_7_fu_205_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_5_2_fu_206_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_4_3_fu_207_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_5_1_fu_208_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_1_2_fu_210_p0;
        IData/*17:0*/ layer2__DOT__r_V_1_cast_fu_3313_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_6_fu_211_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_2_2_fu_212_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_2_fu_213_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_3_2_fu_214_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_0_1_fu_215_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_4_1_fu_216_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_2_3_fu_217_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_7_2_fu_218_p0;
        IData/*17:0*/ layer2__DOT__r_V_7_cast_fu_3672_p1;
        IData/*17:0*/ layer2__DOT__r_V_8_1_3_fu_219_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_fu_221_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_7_3_fu_222_p0;
        IData/*17:0*/ layer2__DOT__r_V_8_1_fu_223_p0;
        IData/*17:0*/ layer2__DOT__r_V_cast_fu_3225_p0;
        IData/*29:0*/ layer2__DOT__r_V_8_fu_221_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_0_1_fu_215_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_0_2_fu_197_p2;
        IData/*17:0*/ layer2__DOT__r_V_neel_D4_1;
        IData/*17:0*/ layer2__DOT__r_V_neel_D6_2;
        IData/*17:0*/ layer2__DOT__r_V_neel_D7_2;
        IData/*17:0*/ layer2__DOT__r_V_neel_D0_3;
        IData/*29:0*/ layer2__DOT__r_V_8_0_3_fu_3292_p2;
    };
    struct {
        IData/*17:0*/ layer2__DOT__r_V_1_cast1_fu_3308_p0;
        IData/*17:0*/ layer2__DOT__r_V_1_cast_fu_3313_p0;
        IData/*29:0*/ layer2__DOT__r_V_8_1_fu_223_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_1_1_fu_203_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_1_2_fu_210_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_1_3_fu_219_p2;
        IData/*17:0*/ layer2__DOT__r_V_2_cast1_fu_3360_p0;
        IData/*17:0*/ layer2__DOT__r_V_2_cast_fu_3367_p0;
        IData/*29:0*/ layer2__DOT__r_V_8_2_fu_213_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_2_1_fu_204_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_2_2_fu_212_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_2_3_fu_217_p2;
        IData/*17:0*/ layer2__DOT__r_V_3_cast1_fu_3412_p0;
        IData/*17:0*/ layer2__DOT__r_V_3_cast_fu_3419_p0;
        IData/*29:0*/ layer2__DOT__r_V_8_3_fu_192_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_3_1_fu_202_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_3_2_fu_214_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_3_3_fu_198_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_4_fu_3507_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_4_1_fu_216_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_4_2_fu_196_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_4_3_fu_207_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_5_fu_195_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_5_1_fu_208_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_5_2_fu_206_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_5_3_fu_194_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_6_fu_211_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_6_1_fu_3636_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_6_2_fu_193_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_6_3_fu_200_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_7_fu_205_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_7_1_fu_3719_p2;
        IData/*17:0*/ layer2__DOT__tmp_23_fu_3725_p4;
        IData/*29:0*/ layer2__DOT__r_V_8_7_2_fu_218_p2;
        IData/*29:0*/ layer2__DOT__r_V_8_7_3_fu_222_p2;
        IData/*17:0*/ layer2__DOT__tmp_6_fu_3473_p1;
        IData/*17:0*/ layer2__DOT__tmp_2_fu_3470_p1;
        IData/*17:0*/ layer2__DOT__tmp9_fu_3759_p2;
        IData/*17:0*/ layer2__DOT__tmp10_fu_3763_p2;
        IData/*17:0*/ layer2__DOT__tmp_8_fu_3467_p1;
        IData/*17:0*/ layer2__DOT__tmp16_fu_3775_p2;
        IData/*17:0*/ layer2__DOT__tmp17_fu_3780_p2;
        IData/*17:0*/ layer2__DOT__tmp_25_cast_fu_3735_p1;
        IData/*17:0*/ layer2__DOT__tmp23_fu_3796_p2;
        IData/*17:0*/ layer2__DOT__tmp24_fu_3800_p2;
        IData/*17:0*/ layer2__DOT__tmp_5_fu_3464_p1;
        IData/*17:0*/ layer2__DOT__tmp30_fu_3810_p2;
        IData/*17:0*/ layer2__DOT__tmp31_fu_3815_p2;
        IData/*17:0*/ layer2__DOT__tmp_10_fu_3825_p1;
        IData/*17:0*/ layer2__DOT__tmp14_fu_3857_p2;
        IData/*17:0*/ layer2__DOT__tmp12_fu_3852_p2;
        IData/*17:0*/ layer2__DOT__tmp13_fu_3862_p2;
        IData/*17:0*/ layer2__DOT__tmp11_fu_3867_p2;
        IData/*17:0*/ layer2__DOT__tmp_19_cast_fu_3837_p1;
        IData/*17:0*/ layer2__DOT__tmp21_cast_fu_3882_p1;
        IData/*17:0*/ layer2__DOT__tmp20_fu_3885_p2;
        IData/*17:0*/ layer2__DOT__tmp19_fu_3878_p2;
        IData/*17:0*/ layer2__DOT__tmp20_cast_fu_3891_p1;
        IData/*17:0*/ layer2__DOT__tmp18_fu_3895_p2;
        IData/*17:0*/ layer2__DOT__tmp_12_fu_3828_p1;
        IData/*17:0*/ layer2__DOT__tmp_25_fu_3846_p1;
        IData/*17:0*/ layer2__DOT__tmp_20_fu_3840_p1;
        IData/*17:0*/ layer2__DOT__tmp28_fu_3911_p2;
        IData/*17:0*/ layer2__DOT__tmp26_fu_3906_p2;
    };
    struct {
        IData/*17:0*/ layer2__DOT__tmp27_fu_3917_p2;
        IData/*17:0*/ layer2__DOT__tmp25_fu_3923_p2;
        IData/*17:0*/ layer2__DOT__tmp_16_fu_3834_p1;
        IData/*17:0*/ layer2__DOT__tmp_14_fu_3831_p1;
        IData/*17:0*/ layer2__DOT__tmp_27_fu_3849_p1;
        IData/*17:0*/ layer2__DOT__tmp_22_fu_3843_p1;
        IData/*17:0*/ layer2__DOT__tmp35_fu_3940_p2;
        IData/*17:0*/ layer2__DOT__tmp33_fu_3934_p2;
        IData/*17:0*/ layer2__DOT__tmp34_fu_3946_p2;
        IData/*17:0*/ layer2__DOT__tmp32_fu_3952_p2;
        IData/*17:0*/ layer2__DOT__res_0_V_write_assign_fu_3873_p2;
        IData/*17:0*/ layer2__DOT__acc_1_V_fu_3901_p2;
        IData/*17:0*/ layer2__DOT__acc_2_V_fu_3929_p2;
        IData/*17:0*/ layer2__DOT__acc_3_V_fu_3958_p2;
        IData/*17:0*/ layer2__DOT__data_0_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_1_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_2_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_3_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_4_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_5_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_6_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__data_7_V_read_int_reg;
        IData/*17:0*/ layer2__DOT__ap_return_0_int_reg;
        IData/*17:0*/ layer2__DOT__ap_return_1_int_reg;
        IData/*17:0*/ layer2__DOT__ap_return_2_int_reg;
        IData/*17:0*/ layer2__DOT__ap_return_3_int_reg;
        IData/*17:0*/ layer2__DOT__w0_0;
        IData/*17:0*/ layer2__DOT__w0_1;
        IData/*17:0*/ layer2__DOT__w0_2;
        IData/*17:0*/ layer2__DOT__w0_3;
        IData/*17:0*/ layer2__DOT__w1_0;
        IData/*17:0*/ layer2__DOT__w1_1;
        IData/*17:0*/ layer2__DOT__w1_2;
        IData/*17:0*/ layer2__DOT__w1_3;
        IData/*17:0*/ layer2__DOT__w2_0;
        IData/*17:0*/ layer2__DOT__w2_1;
        IData/*17:0*/ layer2__DOT__w2_2;
        IData/*17:0*/ layer2__DOT__w2_3;
        IData/*17:0*/ layer2__DOT__w3_0;
        IData/*17:0*/ layer2__DOT__w3_1;
        IData/*17:0*/ layer2__DOT__w3_2;
        IData/*17:0*/ layer2__DOT__w3_3;
        IData/*17:0*/ layer2__DOT__w4_0;
        IData/*17:0*/ layer2__DOT__w4_1;
        IData/*17:0*/ layer2__DOT__w4_2;
        IData/*17:0*/ layer2__DOT__w4_3;
        IData/*17:0*/ layer2__DOT__w5_0;
        IData/*17:0*/ layer2__DOT__w5_1;
        IData/*17:0*/ layer2__DOT__w5_2;
        IData/*17:0*/ layer2__DOT__w5_3;
        IData/*17:0*/ layer2__DOT__w6_0;
        IData/*17:0*/ layer2__DOT__w6_1;
        IData/*17:0*/ layer2__DOT__w6_2;
        IData/*17:0*/ layer2__DOT__w6_3;
        IData/*17:0*/ layer2__DOT__w7_0;
        IData/*17:0*/ layer2__DOT__w7_1;
        IData/*17:0*/ layer2__DOT__w7_2;
        IData/*17:0*/ layer2__DOT__w7_3;
        IData/*17:0*/ layer2__DOT__b0;
        IData/*17:0*/ layer2__DOT__b1;
        IData/*17:0*/ layer2__DOT__b2;
        IData/*17:0*/ layer2__DOT__b3;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ layer2__DOT__DS = 0x00000011U;
    static constexpr IData/*31:0*/ layer2__DOT__MS = 0x0000001dU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
