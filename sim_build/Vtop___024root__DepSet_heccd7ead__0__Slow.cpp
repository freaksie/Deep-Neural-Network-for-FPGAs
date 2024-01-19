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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/Q3_Parameter/normalize.v", 2, "", "Settle region did not converge.");
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
    vlSelf->input_V = VL_RAND_RESET_Q(64);
    vlSelf->output_V = VL_RAND_RESET_I(18);
    vlSelf->__pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__input_V = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__output_V = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__value1 = VL_RAND_RESET_I(32);
    vlSelf->normalize__DOT__value2 = VL_RAND_RESET_I(32);
    vlSelf->normalize__DOT__min = VL_RAND_RESET_I(19);
    vlSelf->normalize__DOT__sum1 = VL_RAND_RESET_I(32);
    vlSelf->normalize__DOT__multi1 = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__tmp1 = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__tmp2 = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__dt1 = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__dt2 = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__divid1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__normalized1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__sum2 = VL_RAND_RESET_I(32);
    vlSelf->normalize__DOT__multi2 = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__divid2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__normalized2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__ap_return = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__nn_out = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__nn_start = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__input_2_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_start = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_done = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_idle = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__myproject__DOT__layer7_out_0_V = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer7_out_0_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_CS_fsm = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_CS_fsm_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter3 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter4 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter5 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter6 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter8 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter9 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter10 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter11 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter12 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_idle_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_ap_vld_in_sig = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_preg = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_in_sig = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_ap_vld_preg = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_blk_n = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_0_V_reg_209 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_1_V_reg_214 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_2_V_reg_219 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_3_V_reg_224 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_4_V_reg_229 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_5_V_reg_234 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_6_V_reg_239 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer2_out_7_V_reg_244 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_0_V_reg_249 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_1_V_reg_254 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_2_V_reg_259 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_3_V_reg_264 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_4_V_reg_269 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_5_V_reg_274 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_6_V_reg_279 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer3_out_7_V_reg_284 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer4_out_0_V_reg_289 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer4_out_1_V_reg_294 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer4_out_2_V_reg_299 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer4_out_3_V_reg_304 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer5_out_0_V_reg_309 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer5_out_1_V_reg_314 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer5_out_2_V_reg_319 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer5_out_3_V_reg_324 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__layer6_out_0_V_reg_329 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_subdone = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call25 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_11001_ignoreCallOp34 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call7 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_11001_ignoreCallOp15 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call36 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_11001_ignoreCallOp49 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call35 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_11001_ignoreCallOp47 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0_01001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_NS_fsm = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_idle_pp0_0to11 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_reset_idle_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state3_pp0_stage0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_1_reg_4017 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_1_reg_4022 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_2_reg_4027 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_4_reg_4032 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_reg_4037 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_7_reg_4042 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_2_reg_4047 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_3_reg_4052 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_s_reg_4057 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_1_reg_4062 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_2_reg_4067 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_3_reg_4072 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_3_reg_4077 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_1_reg_4082 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_2_reg_4087 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_3_reg_4092 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_9_reg_4097 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_4_1_reg_4102 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_11_reg_4107 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_13_reg_4112 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_reg_4117 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_1_reg_4122 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_2_reg_4127 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_15_reg_4132 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_6_reg_4137 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_18_reg_4142 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_reg_4147 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_21_reg_4152 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_7_reg_4157 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_24_reg_4162 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_26_reg_4167 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_fu_3769_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_reg_4172 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_fu_3784_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_reg_4177 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_fu_3790_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_fu_3804_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_reg_4187 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_fu_3819_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_reg_4192 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_5_cast_fu_3557_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_4_cast_fu_3476_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_6_cast2_fu_3607_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_7_cast_fu_3672_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D4_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D6_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D7_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D0_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_3_fu_3292_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast1_fu_3308_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast_fu_3367_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast_fu_3419_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_fu_3507_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_1_fu_3636_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_1_fu_3719_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_23_fu_3725_p4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_6_fu_3473_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_2_fu_3470_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp9_fu_3759_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp10_fu_3763_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_8_fu_3467_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp16_fu_3775_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp17_fu_3780_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_cast_fu_3735_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp23_fu_3796_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp24_fu_3800_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_5_fu_3464_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp30_fu_3810_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp31_fu_3815_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_10_fu_3825_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp14_fu_3857_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp12_fu_3852_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp13_fu_3862_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp11_fu_3867_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_cast_fu_3837_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_cast_fu_3882_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp19_fu_3878_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_cast_fu_3891_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp18_fu_3895_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_12_fu_3828_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_fu_3846_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_20_fu_3840_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp28_fu_3911_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp26_fu_3906_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp27_fu_3917_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp25_fu_3923_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_16_fu_3834_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_14_fu_3831_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_27_fu_3849_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_22_fu_3843_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp35_fu_3940_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp33_fu_3934_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp34_fu_3946_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp32_fu_3952_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__data_V_read = VL_RAND_RESET_Q(36);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_reg_1562 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_3_reg_1568 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_s_reg_1573 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_2_reg_1578 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_3_reg_1583 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_4_reg_1588 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_6_reg_1593 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_7_reg_1598 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_reg_1603 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_1_reg_1608 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_2_reg_1613 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_3_reg_1618 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_4_reg_1623 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_36_reg_1628 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_6_reg_1633 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_29_reg_1638 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_1_cast_fu_1289_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_cast3_fu_1184_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_2_fu_1269_p4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__p_shl_fu_1382_p3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__p_shl1_fu_1393_p3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__p_shl_cast_fu_1389_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__p_shl1_cast_fu_1400_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_5_fu_1404_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp2_fu_1426_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_28_fu_1379_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp3_fu_1436_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp4_fu_1447_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp5_fu_1457_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp6_fu_1467_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_32_cast_fu_1420_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_5_fu_1410_p4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_cast_fu_1483_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp8_fu_1493_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_30_fu_1423_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp9_fu_1503_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_4_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_5_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_6_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_7_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_4 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_5 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_6 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_7 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_fu_82_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_fu_88_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_fu_92_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_1_fu_104_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_10_fu_110_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_fu_114_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_2_fu_126_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_11_fu_132_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_fu_136_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_3_fu_148_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_12_fu_154_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_fu_158_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_4_fu_170_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_13_fu_176_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_fu_180_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_5_fu_192_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_14_fu_198_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_fu_202_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_6_fu_214_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_15_fu_220_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_fu_224_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_7_fu_236_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_16_fu_242_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_fu_246_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_cast_fu_100_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_cast_fu_122_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_cast_fu_144_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_cast_fu_166_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_cast_fu_188_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_cast_fu_210_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_cast_fu_232_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_cast_fu_254_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_start = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_done = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__data_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_return = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state3_pp0_stage0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_q0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_reg_206 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_6_reg_211 = VL_RAND_RESET_I(2);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_subdone = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_8_fu_201_p1 = VL_RAND_RESET_Q(64);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_fu_83_p4 = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__r_V_fu_75_p3 = VL_RAND_RESET_I(28);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1 = VL_RAND_RESET_I(6);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_2_fu_107_p3 = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1 = VL_RAND_RESET_I(13);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_3_fu_115_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_fu_121_p2 = VL_RAND_RESET_I(13);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_s_fu_97_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_s_fu_127_p3 = VL_RAND_RESET_I(13);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3 = VL_RAND_RESET_I(13);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_2_fu_143_p1 = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_fu_147_p2 = VL_RAND_RESET_I(13);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_4_fu_159_p3 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2 = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3 = VL_RAND_RESET_I(12);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__icmp_fu_189_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_1_fu_194_p3 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__comp = VL_RAND_RESET_I(28);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_NS_fsm = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_reset_idle_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_pp0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__address0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__ce0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__q0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__addr0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ce0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0 = VL_RAND_RESET_I(10);
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_reg_247 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state1_pp0_stage0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state2_pp0_stage0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0_11001 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_1_reg_252 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_2_reg_257 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_3_reg_262 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p2 = VL_RAND_RESET_I(30);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp2_fu_231_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp1_fu_236_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_fu_227_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return_int_reg = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__b = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_ready = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_0_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_1_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_2_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_3_V_read = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_0 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_2 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_3 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_fu_50_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_fu_56_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_fu_60_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_1_fu_72_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_7_fu_78_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_fu_82_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_2_fu_94_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_8_fu_100_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_fu_104_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_3_fu_116_p2 = VL_RAND_RESET_I(1);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_9_fu_122_p1 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_fu_126_p3 = VL_RAND_RESET_I(17);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_cast_fu_68_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_cast_fu_90_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_cast_fu_112_p1 = VL_RAND_RESET_I(18);
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_cast_fu_134_p1 = VL_RAND_RESET_I(18);
    vlSelf->__Vtrigprevexpr___TOP__ap_clk__0 = VL_RAND_RESET_I(1);
}
