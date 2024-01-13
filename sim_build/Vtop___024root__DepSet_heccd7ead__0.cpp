// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->layer2__DOT__ap_clk = vlSelf->ap_clk;
    vlSelf->layer2__DOT__ap_rst = vlSelf->ap_rst;
    vlSelf->layer2__DOT__data_0_V_read = vlSelf->data_0_V_read;
    vlSelf->layer2__DOT__data_1_V_read = vlSelf->data_1_V_read;
    vlSelf->layer2__DOT__data_2_V_read = vlSelf->data_2_V_read;
    vlSelf->layer2__DOT__data_3_V_read = vlSelf->data_3_V_read;
    vlSelf->layer2__DOT__data_4_V_read = vlSelf->data_4_V_read;
    vlSelf->layer2__DOT__data_5_V_read = vlSelf->data_5_V_read;
    vlSelf->layer2__DOT__data_6_V_read = vlSelf->data_6_V_read;
    vlSelf->layer2__DOT__data_7_V_read = vlSelf->data_7_V_read;
    vlSelf->layer2__DOT__ap_ce = vlSelf->ap_ce;
    vlSelf->layer2__DOT__tmp_10_fu_3825_p1 = vlSelf->layer2__DOT__tmp_9_reg_4097;
    vlSelf->layer2__DOT__tmp_25_cast_fu_3735_p1 = vlSelf->layer2__DOT__tmp_23_fu_3725_p4;
    vlSelf->layer2__DOT__tmp_12_fu_3828_p1 = vlSelf->layer2__DOT__tmp_11_reg_4107;
    vlSelf->layer2__DOT__tmp_20_fu_3840_p1 = vlSelf->layer2__DOT__tmp_19_reg_4147;
    vlSelf->layer2__DOT__tmp_25_fu_3846_p1 = vlSelf->layer2__DOT__tmp_24_reg_4162;
    vlSelf->layer2__DOT__tmp_16_fu_3834_p1 = vlSelf->layer2__DOT__tmp_15_reg_4132;
    vlSelf->layer2__DOT__tmp_14_fu_3831_p1 = vlSelf->layer2__DOT__tmp_13_reg_4112;
    vlSelf->layer2__DOT__tmp_22_fu_3843_p1 = vlSelf->layer2__DOT__tmp_21_reg_4152;
    vlSelf->layer2__DOT__tmp_27_fu_3849_p1 = vlSelf->layer2__DOT__tmp_26_reg_4167;
    vlSelf->layer2__DOT__tmp_19_cast_fu_3837_p1 = vlSelf->layer2__DOT__tmp_18_reg_4142;
    vlSelf->layer2__DOT__tmp21_cast_fu_3882_p1 = vlSelf->layer2__DOT__tmp21_reg_4182;
    vlSelf->layer2__DOT__tmp_8_fu_3467_p1 = vlSelf->layer2__DOT__tmp_7_reg_4042;
    vlSelf->layer2__DOT__tmp_5_fu_3464_p1 = vlSelf->layer2__DOT__tmp_4_reg_4032;
    vlSelf->layer2__DOT__tmp_6_fu_3473_p1 = vlSelf->layer2__DOT__tmp_3_reg_4077;
    vlSelf->layer2__DOT__tmp_2_fu_3470_p1 = vlSelf->layer2__DOT__tmp_s_reg_4057;
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_1))));
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_2))));
    vlSelf->layer2__DOT__r_V_8_fu_221_p2 = (0x3fffffffU 
                                            & VL_MULS_III(30, 
                                                          (0x3fffffffU 
                                                           & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                          (0x3fffffffU 
                                                           & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_0))));
    vlSelf->layer2__DOT__r_V_8_0_3_fu_3292_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_3)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg))));
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_2))));
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_3))));
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_0))));
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_1))));
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_1))));
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_2))));
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_3))));
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_0))));
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_1))));
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_2))));
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_3))));
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_0))));
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_2))));
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_3))));
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_1))));
    vlSelf->layer2__DOT__r_V_8_4_fu_3507_p2 = (0x3fffffffU 
                                               & VL_MULS_III(30, 
                                                             (0x3fffffffU 
                                                              & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_0)), 
                                                             (0x3fffffffU 
                                                              & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009))));
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_3))));
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_1))));
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_2))));
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_0))));
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_0))));
    vlSelf->layer2__DOT__r_V_8_6_1_fu_3636_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_1)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995))));
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_2))));
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_3))));
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_0))));
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_2))));
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_3))));
    vlSelf->layer2__DOT__r_V_8_7_1_fu_3719_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_1)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987))));
    vlSelf->layer2__DOT__tmp21_fu_3790_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b1 
                                                + vlSelf->layer2__DOT__tmp_23_fu_3725_p4));
    vlSelf->layer2__DOT__tmp16_fu_3775_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_0_1_reg_4022 
                                                + vlSelf->layer2__DOT__tmp_7_reg_4042));
    vlSelf->layer2__DOT__tmp17_fu_3780_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_1_reg_4062 
                                                + vlSelf->layer2__DOT__tmp_17_3_1_reg_4082));
    vlSelf->layer2__DOT__tmp23_fu_3796_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_0_2_reg_4027 
                                                + vlSelf->layer2__DOT__tmp_17_1_2_reg_4047));
    vlSelf->layer2__DOT__tmp24_fu_3800_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_2_reg_4067 
                                                + vlSelf->layer2__DOT__tmp_17_3_2_reg_4087));
    vlSelf->layer2__DOT__tmp30_fu_3810_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_1_3_reg_4052 
                                                + vlSelf->layer2__DOT__tmp_4_reg_4032));
    vlSelf->layer2__DOT__tmp31_fu_3815_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_3_reg_4072 
                                                + vlSelf->layer2__DOT__tmp_17_3_3_reg_4092));
    vlSelf->layer2__DOT__tmp9_fu_3759_p2 = (0x3ffffU 
                                            & (vlSelf->layer2__DOT__tmp_17_1_reg_4037 
                                               + vlSelf->layer2__DOT__tmp_1_reg_4017));
    vlSelf->layer2__DOT__tmp10_fu_3763_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_3_reg_4077 
                                                + vlSelf->layer2__DOT__tmp_s_reg_4057));
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0 = vlSelf->layer2__DOT__data_4_V_read_2_reg_4009;
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0 = vlSelf->layer2__DOT__data_5_V_read_2_reg_4003;
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0 = vlSelf->layer2__DOT__data_6_V_read_2_reg_3995;
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p0 = vlSelf->layer2__DOT__data_7_V_read11_reg_3987;
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0 = vlSelf->layer2__DOT__data_0_V_read_int_reg;
    vlSelf->layer2__DOT__tmp12_fu_3852_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_5_reg_4117 
                                                + vlSelf->layer2__DOT__tmp_9_reg_4097));
    vlSelf->layer2__DOT__tmp26_fu_3906_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_11_reg_4107 
                                                + vlSelf->layer2__DOT__tmp_17_5_2_reg_4127));
    vlSelf->layer2__DOT__tmp33_fu_3934_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_13_reg_4112 
                                                + vlSelf->layer2__DOT__tmp_15_reg_4132));
    vlSelf->layer2__DOT__tmp19_fu_3878_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_4_1_reg_4102 
                                                + vlSelf->layer2__DOT__tmp_17_5_1_reg_4122));
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0 = vlSelf->layer2__DOT__data_1_V_read_int_reg;
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0 = vlSelf->layer2__DOT__data_2_V_read_int_reg;
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p0 = vlSelf->layer2__DOT__data_3_V_read_int_reg;
    vlSelf->layer2__DOT__tmp20_fu_3885_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp21_reg_4182 
                                                + vlSelf->layer2__DOT__tmp_18_reg_4142));
    vlSelf->layer2__DOT__tmp14_fu_3857_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b0 
                                                + vlSelf->layer2__DOT__tmp_17_7_reg_4157));
    vlSelf->layer2__DOT__tmp28_fu_3911_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b2 
                                                + vlSelf->layer2__DOT__tmp_24_reg_4162));
    vlSelf->layer2__DOT__tmp35_fu_3940_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b3 
                                                + vlSelf->layer2__DOT__tmp_26_reg_4167));
    vlSelf->layer2__DOT__tmp15_fu_3784_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp16_fu_3775_p2 
                                                + vlSelf->layer2__DOT__tmp17_fu_3780_p2));
    vlSelf->layer2__DOT__tmp22_fu_3804_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp23_fu_3796_p2 
                                                + vlSelf->layer2__DOT__tmp24_fu_3800_p2));
    vlSelf->layer2__DOT__tmp29_fu_3819_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp30_fu_3810_p2 
                                                + vlSelf->layer2__DOT__tmp31_fu_3815_p2));
    vlSelf->layer2__DOT__tmp_fu_3769_p2 = (0x3ffffU 
                                           & (vlSelf->layer2__DOT__tmp9_fu_3759_p2 
                                              + vlSelf->layer2__DOT__tmp10_fu_3763_p2));
    vlSelf->layer2__DOT__r_V_4_cast_fu_3476_p1 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_neel_D4_1 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p0 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p0 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_5_cast_fu_3557_p1 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_6_cast2_fu_3607_p1 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_neel_D6_2 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p0 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p0 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_7_cast_fu_3672_p1 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_neel_D7_2 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p0 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p0 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p1 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_neel_D0_3 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_8_fu_221_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_1_cast1_fu_3308_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p1 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p1 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_2_cast_fu_3367_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p1 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_3_cast_fu_3419_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__tmp20_cast_fu_3891_p1 = vlSelf->layer2__DOT__tmp20_fu_3885_p2;
    vlSelf->layer2__DOT__tmp18_fu_3895_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp19_fu_3878_p2 
                                                + vlSelf->layer2__DOT__tmp20_fu_3885_p2));
    vlSelf->layer2__DOT__tmp13_fu_3862_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_6_reg_4137 
                                                + vlSelf->layer2__DOT__tmp14_fu_3857_p2));
    vlSelf->layer2__DOT__tmp27_fu_3917_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_19_reg_4147 
                                                + vlSelf->layer2__DOT__tmp28_fu_3911_p2));
    vlSelf->layer2__DOT__tmp34_fu_3946_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_21_reg_4152 
                                                + vlSelf->layer2__DOT__tmp35_fu_3940_p2));
    vlSelf->layer2__DOT__acc_1_V_fu_3901_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp15_reg_4177 
                                                  + vlSelf->layer2__DOT__tmp18_fu_3895_p2));
    vlSelf->layer2__DOT__tmp11_fu_3867_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp12_fu_3852_p2 
                                                + vlSelf->layer2__DOT__tmp13_fu_3862_p2));
    vlSelf->layer2__DOT__tmp25_fu_3923_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp26_fu_3906_p2 
                                                + vlSelf->layer2__DOT__tmp27_fu_3917_p2));
    vlSelf->layer2__DOT__tmp32_fu_3952_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp33_fu_3934_p2 
                                                + vlSelf->layer2__DOT__tmp34_fu_3946_p2));
    vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2 
        = (0x3ffffU & (vlSelf->layer2__DOT__tmp_reg_4172 
                       + vlSelf->layer2__DOT__tmp11_fu_3867_p2));
    vlSelf->layer2__DOT__acc_2_V_fu_3929_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp22_reg_4187 
                                                  + vlSelf->layer2__DOT__tmp25_fu_3923_p2));
    vlSelf->layer2__DOT__acc_3_V_fu_3958_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp29_reg_4192 
                                                  + vlSelf->layer2__DOT__tmp32_fu_3952_p2));
    if (vlSelf->layer2__DOT__ap_ce_reg) {
        if (vlSelf->layer2__DOT__ap_ce_reg) {
            vlSelf->layer2__DOT__ap_return_1 = vlSelf->layer2__DOT__acc_1_V_fu_3901_p2;
            vlSelf->layer2__DOT__ap_return_0 = vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2;
            vlSelf->layer2__DOT__ap_return_2 = vlSelf->layer2__DOT__acc_2_V_fu_3929_p2;
            vlSelf->layer2__DOT__ap_return_3 = vlSelf->layer2__DOT__acc_3_V_fu_3958_p2;
        }
    } else {
        vlSelf->layer2__DOT__ap_return_1 = vlSelf->layer2__DOT__ap_return_1_int_reg;
        vlSelf->layer2__DOT__ap_return_0 = vlSelf->layer2__DOT__ap_return_0_int_reg;
        vlSelf->layer2__DOT__ap_return_2 = vlSelf->layer2__DOT__ap_return_2_int_reg;
        vlSelf->layer2__DOT__ap_return_3 = vlSelf->layer2__DOT__ap_return_3_int_reg;
    }
    vlSelf->ap_return_1 = vlSelf->layer2__DOT__ap_return_1;
    vlSelf->ap_return_0 = vlSelf->layer2__DOT__ap_return_0;
    vlSelf->ap_return_2 = vlSelf->layer2__DOT__ap_return_2;
    vlSelf->ap_return_3 = vlSelf->layer2__DOT__ap_return_3;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->layer2__DOT__ap_ce_reg) & 
         (~ (IData)(vlSelf->layer2__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->layer2__DOT__tmp_23_fu_3725_p4 = (0x3ffffU 
                                                  & (vlSelf->layer2__DOT__r_V_8_7_1_fu_3719_p2 
                                                     >> 0xcU));
        vlSelf->layer2__DOT__tmp_1_reg_4017 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_fu_221_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_0_1_reg_4022 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_3_3_reg_4092 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_0_2_reg_4027 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_1_2_reg_4047 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_1_3_reg_4052 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_1_reg_4037 = (0x3ffffU 
                                                  & (vlSelf->layer2__DOT__r_V_8_1_fu_223_p2 
                                                     >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_2_1_reg_4062 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_2_2_reg_4067 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_2_3_reg_4072 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_3_1_reg_4082 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_3_2_reg_4087 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_s_reg_4057 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_2_fu_213_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_7_reg_4042 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_4_reg_4032 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_0_3_fu_3292_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_3_reg_4077 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_3_fu_192_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_reg_4172 = vlSelf->layer2__DOT__tmp_fu_3769_p2;
        vlSelf->layer2__DOT__tmp29_reg_4192 = vlSelf->layer2__DOT__tmp29_fu_3819_p2;
        vlSelf->layer2__DOT__tmp22_reg_4187 = vlSelf->layer2__DOT__tmp22_fu_3804_p2;
        vlSelf->layer2__DOT__tmp15_reg_4177 = vlSelf->layer2__DOT__tmp15_fu_3784_p2;
        vlSelf->layer2__DOT__tmp_17_4_1_reg_4102 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_5_1_reg_4122 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_5_2_reg_4127 = 
            (0x3ffffU & (vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p2 
                         >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_5_reg_4117 = (0x3ffffU 
                                                  & (vlSelf->layer2__DOT__r_V_8_5_fu_195_p2 
                                                     >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_6_reg_4137 = (0x3ffffU 
                                                  & (vlSelf->layer2__DOT__r_V_8_6_fu_211_p2 
                                                     >> 0xcU));
        vlSelf->layer2__DOT__tmp_9_reg_4097 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__r_V_8_4_fu_3507_p2 
                                                  >> 0xcU));
        vlSelf->layer2__DOT__tmp_21_reg_4152 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_19_reg_4147 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_15_reg_4132 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_11_reg_4107 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_13_reg_4112 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_17_7_reg_4157 = (0x3ffffU 
                                                  & (vlSelf->layer2__DOT__r_V_8_7_fu_205_p2 
                                                     >> 0xcU));
        vlSelf->layer2__DOT__tmp_18_reg_4142 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_6_1_fu_3636_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp21_reg_4182 = vlSelf->layer2__DOT__tmp21_fu_3790_p2;
        vlSelf->layer2__DOT__tmp_26_reg_4167 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__tmp_24_reg_4162 = (0x3ffffU 
                                                & (vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p2 
                                                   >> 0xcU));
        vlSelf->layer2__DOT__data_7_V_read11_reg_3987 
            = vlSelf->layer2__DOT__data_7_V_read_int_reg;
        vlSelf->layer2__DOT__data_6_V_read_2_reg_3995 
            = vlSelf->layer2__DOT__data_6_V_read_int_reg;
        vlSelf->layer2__DOT__data_5_V_read_2_reg_4003 
            = vlSelf->layer2__DOT__data_5_V_read_int_reg;
        vlSelf->layer2__DOT__data_4_V_read_2_reg_4009 
            = vlSelf->layer2__DOT__data_4_V_read_int_reg;
    }
    if (vlSelf->ap_ce) {
        vlSelf->layer2__DOT__data_0_V_read_int_reg 
            = vlSelf->data_0_V_read;
        vlSelf->layer2__DOT__data_3_V_read_int_reg 
            = vlSelf->data_3_V_read;
        vlSelf->layer2__DOT__data_2_V_read_int_reg 
            = vlSelf->data_2_V_read;
        vlSelf->layer2__DOT__data_1_V_read_int_reg 
            = vlSelf->data_1_V_read;
        vlSelf->layer2__DOT__data_7_V_read_int_reg 
            = vlSelf->data_7_V_read;
        vlSelf->layer2__DOT__data_6_V_read_int_reg 
            = vlSelf->data_6_V_read;
        vlSelf->layer2__DOT__data_5_V_read_int_reg 
            = vlSelf->data_5_V_read;
        vlSelf->layer2__DOT__data_4_V_read_int_reg 
            = vlSelf->data_4_V_read;
    }
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_1))));
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_2))));
    vlSelf->layer2__DOT__r_V_8_fu_221_p2 = (0x3fffffffU 
                                            & VL_MULS_III(30, 
                                                          (0x3fffffffU 
                                                           & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg)), 
                                                          (0x3fffffffU 
                                                           & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_0))));
    vlSelf->layer2__DOT__r_V_8_0_3_fu_3292_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w0_3)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_0_V_read_int_reg))));
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0 = vlSelf->layer2__DOT__data_0_V_read_int_reg;
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_1))));
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_2))));
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_3))));
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_3_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w3_0))));
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p0 = vlSelf->layer2__DOT__data_3_V_read_int_reg;
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_1))));
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_2))));
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_3))));
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_2_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w2_0))));
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0 = vlSelf->layer2__DOT__data_2_V_read_int_reg;
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_2))));
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_3))));
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_0))));
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_1_V_read_int_reg)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w1_1))));
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0 = vlSelf->layer2__DOT__data_1_V_read_int_reg;
    vlSelf->layer2__DOT__tmp_25_cast_fu_3735_p1 = vlSelf->layer2__DOT__tmp_23_fu_3725_p4;
    vlSelf->layer2__DOT__tmp21_fu_3790_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b1 
                                                + vlSelf->layer2__DOT__tmp_23_fu_3725_p4));
    vlSelf->layer2__DOT__tmp23_fu_3796_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_0_2_reg_4027 
                                                + vlSelf->layer2__DOT__tmp_17_1_2_reg_4047));
    vlSelf->layer2__DOT__tmp9_fu_3759_p2 = (0x3ffffU 
                                            & (vlSelf->layer2__DOT__tmp_17_1_reg_4037 
                                               + vlSelf->layer2__DOT__tmp_1_reg_4017));
    vlSelf->layer2__DOT__tmp31_fu_3815_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_3_reg_4072 
                                                + vlSelf->layer2__DOT__tmp_17_3_3_reg_4092));
    vlSelf->layer2__DOT__tmp17_fu_3780_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_1_reg_4062 
                                                + vlSelf->layer2__DOT__tmp_17_3_1_reg_4082));
    vlSelf->layer2__DOT__tmp24_fu_3800_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_2_2_reg_4067 
                                                + vlSelf->layer2__DOT__tmp_17_3_2_reg_4087));
    vlSelf->layer2__DOT__tmp_2_fu_3470_p1 = vlSelf->layer2__DOT__tmp_s_reg_4057;
    vlSelf->layer2__DOT__tmp_8_fu_3467_p1 = vlSelf->layer2__DOT__tmp_7_reg_4042;
    vlSelf->layer2__DOT__tmp16_fu_3775_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_0_1_reg_4022 
                                                + vlSelf->layer2__DOT__tmp_7_reg_4042));
    vlSelf->layer2__DOT__tmp_5_fu_3464_p1 = vlSelf->layer2__DOT__tmp_4_reg_4032;
    vlSelf->layer2__DOT__tmp30_fu_3810_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_1_3_reg_4052 
                                                + vlSelf->layer2__DOT__tmp_4_reg_4032));
    vlSelf->layer2__DOT__tmp_6_fu_3473_p1 = vlSelf->layer2__DOT__tmp_3_reg_4077;
    vlSelf->layer2__DOT__tmp10_fu_3763_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_3_reg_4077 
                                                + vlSelf->layer2__DOT__tmp_s_reg_4057));
    vlSelf->layer2__DOT__tmp19_fu_3878_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_4_1_reg_4102 
                                                + vlSelf->layer2__DOT__tmp_17_5_1_reg_4122));
    vlSelf->layer2__DOT__tmp_10_fu_3825_p1 = vlSelf->layer2__DOT__tmp_9_reg_4097;
    vlSelf->layer2__DOT__tmp12_fu_3852_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_5_reg_4117 
                                                + vlSelf->layer2__DOT__tmp_9_reg_4097));
    vlSelf->layer2__DOT__tmp_22_fu_3843_p1 = vlSelf->layer2__DOT__tmp_21_reg_4152;
    vlSelf->layer2__DOT__tmp_20_fu_3840_p1 = vlSelf->layer2__DOT__tmp_19_reg_4147;
    vlSelf->layer2__DOT__tmp_16_fu_3834_p1 = vlSelf->layer2__DOT__tmp_15_reg_4132;
    vlSelf->layer2__DOT__tmp_12_fu_3828_p1 = vlSelf->layer2__DOT__tmp_11_reg_4107;
    vlSelf->layer2__DOT__tmp26_fu_3906_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_11_reg_4107 
                                                + vlSelf->layer2__DOT__tmp_17_5_2_reg_4127));
    vlSelf->layer2__DOT__tmp_14_fu_3831_p1 = vlSelf->layer2__DOT__tmp_13_reg_4112;
    vlSelf->layer2__DOT__tmp33_fu_3934_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_13_reg_4112 
                                                + vlSelf->layer2__DOT__tmp_15_reg_4132));
    vlSelf->layer2__DOT__tmp14_fu_3857_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b0 
                                                + vlSelf->layer2__DOT__tmp_17_7_reg_4157));
    vlSelf->layer2__DOT__tmp_19_cast_fu_3837_p1 = vlSelf->layer2__DOT__tmp_18_reg_4142;
    vlSelf->layer2__DOT__tmp21_cast_fu_3882_p1 = vlSelf->layer2__DOT__tmp21_reg_4182;
    vlSelf->layer2__DOT__tmp20_fu_3885_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp21_reg_4182 
                                                + vlSelf->layer2__DOT__tmp_18_reg_4142));
    vlSelf->layer2__DOT__tmp_27_fu_3849_p1 = vlSelf->layer2__DOT__tmp_26_reg_4167;
    vlSelf->layer2__DOT__tmp35_fu_3940_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b3 
                                                + vlSelf->layer2__DOT__tmp_26_reg_4167));
    vlSelf->layer2__DOT__tmp_25_fu_3846_p1 = vlSelf->layer2__DOT__tmp_24_reg_4162;
    vlSelf->layer2__DOT__tmp28_fu_3911_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__b2 
                                                + vlSelf->layer2__DOT__tmp_24_reg_4162));
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_0))));
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_2))));
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_3))));
    vlSelf->layer2__DOT__r_V_8_7_1_fu_3719_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w7_1)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_7_V_read11_reg_3987))));
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p0 = vlSelf->layer2__DOT__data_7_V_read11_reg_3987;
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_0))));
    vlSelf->layer2__DOT__r_V_8_6_1_fu_3636_p2 = (0x3fffffffU 
                                                 & VL_MULS_III(30, 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_1)), 
                                                               (0x3fffffffU 
                                                                & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995))));
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_2))));
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_6_V_read_2_reg_3995)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w6_3))));
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0 = vlSelf->layer2__DOT__data_6_V_read_2_reg_3995;
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_3))));
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_1))));
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_2))));
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p2 = (0x3fffffffU 
                                              & VL_MULS_III(30, 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_5_V_read_2_reg_4003)), 
                                                            (0x3fffffffU 
                                                             & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w5_0))));
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0 = vlSelf->layer2__DOT__data_5_V_read_2_reg_4003;
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_2))));
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_3))));
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p2 = (0x3fffffffU 
                                                & VL_MULS_III(30, 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009)), 
                                                              (0x3fffffffU 
                                                               & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_1))));
    vlSelf->layer2__DOT__r_V_8_4_fu_3507_p2 = (0x3fffffffU 
                                               & VL_MULS_III(30, 
                                                             (0x3fffffffU 
                                                              & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__w4_0)), 
                                                             (0x3fffffffU 
                                                              & VL_EXTENDS_II(30,18, vlSelf->layer2__DOT__data_4_V_read_2_reg_4009))));
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0 = vlSelf->layer2__DOT__data_4_V_read_2_reg_4009;
    if (vlSelf->layer2__DOT__ap_ce_reg) {
        vlSelf->layer2__DOT__ap_return_3_int_reg = vlSelf->layer2__DOT__acc_3_V_fu_3958_p2;
        vlSelf->layer2__DOT__ap_return_2_int_reg = vlSelf->layer2__DOT__acc_2_V_fu_3929_p2;
        vlSelf->layer2__DOT__ap_return_1_int_reg = vlSelf->layer2__DOT__acc_1_V_fu_3901_p2;
        vlSelf->layer2__DOT__ap_return_0_int_reg = vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2;
    }
    vlSelf->layer2__DOT__ap_ce_reg = vlSelf->ap_ce;
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p1 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_neel_D0_3 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_8_fu_221_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p0 = vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p1 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_3_cast_fu_3419_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p0 = vlSelf->layer2__DOT__r_V_8_3_fu_192_p0;
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p1 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_2_cast_fu_3367_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p0 = vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->layer2__DOT__r_V_1_cast1_fu_3308_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p1 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p0 = vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->layer2__DOT__tmp22_fu_3804_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp23_fu_3796_p2 
                                                + vlSelf->layer2__DOT__tmp24_fu_3800_p2));
    vlSelf->layer2__DOT__tmp15_fu_3784_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp16_fu_3775_p2 
                                                + vlSelf->layer2__DOT__tmp17_fu_3780_p2));
    vlSelf->layer2__DOT__tmp29_fu_3819_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp30_fu_3810_p2 
                                                + vlSelf->layer2__DOT__tmp31_fu_3815_p2));
    vlSelf->layer2__DOT__tmp_fu_3769_p2 = (0x3ffffU 
                                           & (vlSelf->layer2__DOT__tmp9_fu_3759_p2 
                                              + vlSelf->layer2__DOT__tmp10_fu_3763_p2));
    vlSelf->layer2__DOT__tmp13_fu_3862_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_17_6_reg_4137 
                                                + vlSelf->layer2__DOT__tmp14_fu_3857_p2));
    vlSelf->layer2__DOT__tmp20_cast_fu_3891_p1 = vlSelf->layer2__DOT__tmp20_fu_3885_p2;
    vlSelf->layer2__DOT__tmp18_fu_3895_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp19_fu_3878_p2 
                                                + vlSelf->layer2__DOT__tmp20_fu_3885_p2));
    vlSelf->layer2__DOT__tmp34_fu_3946_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_21_reg_4152 
                                                + vlSelf->layer2__DOT__tmp35_fu_3940_p2));
    vlSelf->layer2__DOT__tmp27_fu_3917_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp_19_reg_4147 
                                                + vlSelf->layer2__DOT__tmp28_fu_3911_p2));
    vlSelf->layer2__DOT__r_V_7_cast_fu_3672_p1 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_neel_D7_2 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p0 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p0 = vlSelf->layer2__DOT__r_V_8_7_fu_205_p0;
    vlSelf->layer2__DOT__r_V_6_cast2_fu_3607_p1 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_neel_D6_2 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p0 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p0 = vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->layer2__DOT__r_V_5_cast_fu_3557_p1 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p0 = vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->layer2__DOT__r_V_4_cast_fu_3476_p1 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_neel_D4_1 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p0 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p0 = vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->layer2__DOT__tmp11_fu_3867_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp12_fu_3852_p2 
                                                + vlSelf->layer2__DOT__tmp13_fu_3862_p2));
    vlSelf->layer2__DOT__acc_1_V_fu_3901_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp15_reg_4177 
                                                  + vlSelf->layer2__DOT__tmp18_fu_3895_p2));
    vlSelf->layer2__DOT__tmp32_fu_3952_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp33_fu_3934_p2 
                                                + vlSelf->layer2__DOT__tmp34_fu_3946_p2));
    vlSelf->layer2__DOT__tmp25_fu_3923_p2 = (0x3ffffU 
                                             & (vlSelf->layer2__DOT__tmp26_fu_3906_p2 
                                                + vlSelf->layer2__DOT__tmp27_fu_3917_p2));
    vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2 
        = (0x3ffffU & (vlSelf->layer2__DOT__tmp_reg_4172 
                       + vlSelf->layer2__DOT__tmp11_fu_3867_p2));
    vlSelf->layer2__DOT__acc_3_V_fu_3958_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp29_reg_4192 
                                                  + vlSelf->layer2__DOT__tmp32_fu_3952_p2));
    vlSelf->layer2__DOT__acc_2_V_fu_3929_p2 = (0x3ffffU 
                                               & (vlSelf->layer2__DOT__tmp22_reg_4187 
                                                  + vlSelf->layer2__DOT__tmp25_fu_3923_p2));
    if (vlSelf->layer2__DOT__ap_ce_reg) {
        if (vlSelf->layer2__DOT__ap_ce_reg) {
            vlSelf->layer2__DOT__ap_return_1 = vlSelf->layer2__DOT__acc_1_V_fu_3901_p2;
            vlSelf->layer2__DOT__ap_return_0 = vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2;
            vlSelf->layer2__DOT__ap_return_3 = vlSelf->layer2__DOT__acc_3_V_fu_3958_p2;
            vlSelf->layer2__DOT__ap_return_2 = vlSelf->layer2__DOT__acc_2_V_fu_3929_p2;
        }
    } else {
        vlSelf->layer2__DOT__ap_return_1 = vlSelf->layer2__DOT__ap_return_1_int_reg;
        vlSelf->layer2__DOT__ap_return_0 = vlSelf->layer2__DOT__ap_return_0_int_reg;
        vlSelf->layer2__DOT__ap_return_3 = vlSelf->layer2__DOT__ap_return_3_int_reg;
        vlSelf->layer2__DOT__ap_return_2 = vlSelf->layer2__DOT__ap_return_2_int_reg;
    }
    vlSelf->ap_return_1 = vlSelf->layer2__DOT__ap_return_1;
    vlSelf->ap_return_0 = vlSelf->layer2__DOT__ap_return_0;
    vlSelf->ap_return_3 = vlSelf->layer2__DOT__ap_return_3;
    vlSelf->ap_return_2 = vlSelf->layer2__DOT__ap_return_2;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/layer2.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/layer2.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/layer2.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ap_clk & 0xfeU))) {
        Verilated::overWidthError("ap_clk");}
    if (VL_UNLIKELY((vlSelf->ap_rst & 0xfeU))) {
        Verilated::overWidthError("ap_rst");}
    if (VL_UNLIKELY((vlSelf->data_0_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_0_V_read");}
    if (VL_UNLIKELY((vlSelf->data_1_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_1_V_read");}
    if (VL_UNLIKELY((vlSelf->data_2_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_2_V_read");}
    if (VL_UNLIKELY((vlSelf->data_3_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_3_V_read");}
    if (VL_UNLIKELY((vlSelf->data_4_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_4_V_read");}
    if (VL_UNLIKELY((vlSelf->data_5_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_5_V_read");}
    if (VL_UNLIKELY((vlSelf->data_6_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_6_V_read");}
    if (VL_UNLIKELY((vlSelf->data_7_V_read & 0xfffc0000U))) {
        Verilated::overWidthError("data_7_V_read");}
    if (VL_UNLIKELY((vlSelf->ap_ce & 0xfeU))) {
        Verilated::overWidthError("ap_ce");}
}
#endif  // VL_DEBUG
