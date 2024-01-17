// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->test__DOT__div = 0xfee0U;
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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/Q3_Parameter/test.v", 2, "", "Settle region did not converge.");
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
    vlSelf->ap_start = VL_RAND_RESET_I(1);
    vlSelf->ap_done = VL_RAND_RESET_I(1);
    vlSelf->ap_idle = VL_RAND_RESET_I(1);
    vlSelf->ap_ready = VL_RAND_RESET_I(1);
    vlSelf->input_2_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->input_2_V = VL_RAND_RESET_I(32);
    vlSelf->layer7_out_0_V = VL_RAND_RESET_I(16);
    vlSelf->layer7_out_0_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_clk = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_rst = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_start = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_done = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_idle = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ap_ready = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__input_2_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__input_2_V = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__layer7_out_0_V = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__layer7_out_0_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__w0_0 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__w1_0 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__div = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__ans = VL_RAND_RESET_I(18);
    vlSelf->test__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__multi = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__divid = VL_RAND_RESET_I(18);
    vlSelf->test__DOT__normalized = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__res_0_V_write_assign_fu_1431_p2 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__tmp_33_1_reg_1603 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__tmp_3_reg_1568 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__tmp2_fu_1426_p2 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__r_V_10_1_fu_108_p2 = VL_RAND_RESET_I(26);
    vlSelf->test__DOT__r_V_s_fu_110_p2 = VL_RAND_RESET_I(26);
    vlSelf->test__DOT__r_V_10_1_fu_108_p1 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__r_V_s_fu_110_p1 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__r_V_1_cast_fu_1289_p1 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__r_V_cast3_fu_1184_p1 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__tmp_2_fu_1269_p4 = VL_RAND_RESET_I(16);
    vlSelf->test__DOT__tmp_fu_1180_p1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__ap_clk__0 = VL_RAND_RESET_I(1);
}
