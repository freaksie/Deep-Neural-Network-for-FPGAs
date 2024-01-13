// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ap_clk__0 = vlSelf->ap_clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/layer2.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ap_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ap_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ap_clk = VL_RAND_RESET_I(1);
    vlSelf->ap_rst = VL_RAND_RESET_I(1);
    vlSelf->data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_4_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_5_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_6_V_read = VL_RAND_RESET_I(18);
    vlSelf->data_7_V_read = VL_RAND_RESET_I(18);
    vlSelf->ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->ap_ce = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_4_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_5_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_6_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_7_V_read = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_ce = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__data_7_V_read11_reg_3987 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__ap_block_state3_pp0_stage0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__data_6_V_read_2_reg_3995 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_5_V_read_2_reg_4003 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_4_V_read_2_reg_4009 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_1_reg_4017 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_0_1_reg_4022 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_0_2_reg_4027 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_4_reg_4032 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_1_reg_4037 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_7_reg_4042 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_1_2_reg_4047 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_1_3_reg_4052 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_s_reg_4057 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_2_1_reg_4062 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_2_2_reg_4067 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_2_3_reg_4072 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_3_reg_4077 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_3_1_reg_4082 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_3_2_reg_4087 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_3_3_reg_4092 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_9_reg_4097 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_4_1_reg_4102 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_11_reg_4107 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_13_reg_4112 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_5_reg_4117 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_5_1_reg_4122 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_5_2_reg_4127 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_15_reg_4132 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_6_reg_4137 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_18_reg_4142 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_19_reg_4147 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_21_reg_4152 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_17_7_reg_4157 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_24_reg_4162 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_26_reg_4167 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_fu_3769_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_reg_4172 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp15_fu_3784_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp15_reg_4177 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp21_fu_3790_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp21_reg_4182 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp22_fu_3804_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp22_reg_4187 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp29_fu_3819_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp29_reg_4192 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_5_cast_fu_3557_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_4_cast_fu_3476_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_6_cast2_fu_3607_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_7_cast_fu_3672_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_fu_221_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_cast_fu_3225_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_fu_221_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_0_1_fu_215_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_0_2_fu_197_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_neel_D4_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_neel_D6_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_neel_D7_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_neel_D0_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_0_3_fu_3292_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_1_cast1_fu_3308_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_1_cast_fu_3313_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_1_fu_223_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_1_1_fu_203_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_1_2_fu_210_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_1_3_fu_219_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_2_cast1_fu_3360_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_2_cast_fu_3367_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_2_fu_213_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_2_1_fu_204_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_2_2_fu_212_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_2_3_fu_217_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_3_cast1_fu_3412_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_3_cast_fu_3419_p0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_3_fu_192_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_3_1_fu_202_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_3_2_fu_214_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_3_3_fu_198_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_4_fu_3507_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_4_1_fu_216_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_4_2_fu_196_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_4_3_fu_207_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_5_fu_195_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_5_1_fu_208_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_5_2_fu_206_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_5_3_fu_194_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_6_fu_211_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_6_1_fu_3636_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_6_2_fu_193_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_6_3_fu_200_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_7_fu_205_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_7_1_fu_3719_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__tmp_23_fu_3725_p4 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__r_V_8_7_2_fu_218_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__r_V_8_7_3_fu_222_p2 = VL_RAND_RESET_I(30);
    vlSelf->layer2__DOT__tmp_6_fu_3473_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_2_fu_3470_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp9_fu_3759_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp10_fu_3763_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_8_fu_3467_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp16_fu_3775_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp17_fu_3780_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_25_cast_fu_3735_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp23_fu_3796_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp24_fu_3800_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_5_fu_3464_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp30_fu_3810_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp31_fu_3815_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_10_fu_3825_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp14_fu_3857_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp12_fu_3852_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp13_fu_3862_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp11_fu_3867_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_19_cast_fu_3837_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp21_cast_fu_3882_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp20_fu_3885_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp19_fu_3878_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp20_cast_fu_3891_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp18_fu_3895_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_12_fu_3828_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_25_fu_3846_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_20_fu_3840_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp28_fu_3911_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp26_fu_3906_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp27_fu_3917_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp25_fu_3923_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_16_fu_3834_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_14_fu_3831_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_27_fu_3849_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp_22_fu_3843_p1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp35_fu_3940_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp33_fu_3934_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp34_fu_3946_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__tmp32_fu_3952_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__res_0_V_write_assign_fu_3873_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__acc_1_V_fu_3901_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__acc_2_V_fu_3929_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__acc_3_V_fu_3958_p2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_ce_reg = VL_RAND_RESET_I(1);
    vlSelf->layer2__DOT__data_0_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_1_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_2_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_3_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_4_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_5_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_6_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__data_7_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_0_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_1_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_2_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__ap_return_3_int_reg = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w0_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w0_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w0_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w0_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w1_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w1_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w1_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w1_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w2_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w2_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w2_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w2_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w3_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w3_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w3_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w3_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w4_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w4_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w4_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w4_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w5_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w5_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w5_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w5_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w6_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w6_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w6_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w6_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w7_0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w7_1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w7_2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__w7_3 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__b0 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__b1 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__b2 = VL_RAND_RESET_I(18);
    vlSelf->layer2__DOT__b3 = VL_RAND_RESET_I(18);
    vlSelf->__Vtrigprevexpr___TOP__ap_clk__0 = VL_RAND_RESET_I(1);
}
