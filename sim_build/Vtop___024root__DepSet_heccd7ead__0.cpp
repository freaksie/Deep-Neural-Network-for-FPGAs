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
    vlSelf->test__DOT__ap_clk = vlSelf->ap_clk;
    vlSelf->test__DOT__ap_rst = vlSelf->ap_rst;
    vlSelf->test__DOT__ap_start = vlSelf->ap_start;
    vlSelf->test__DOT__input_2_V_ap_vld = vlSelf->input_2_V_ap_vld;
    vlSelf->test__DOT__input_2_V = vlSelf->input_2_V;
    vlSelf->ap_done = vlSelf->test__DOT__ap_done;
    vlSelf->ap_idle = vlSelf->test__DOT__ap_idle;
    vlSelf->ap_ready = vlSelf->test__DOT__ap_ready;
    vlSelf->layer7_out_0_V = vlSelf->test__DOT__layer7_out_0_V;
    vlSelf->layer7_out_0_V_ap_vld = vlSelf->test__DOT__layer7_out_0_V_ap_vld;
    vlSelf->test__DOT__tmp2_fu_1426_p2 = (0xffffU & 
                                          ((IData)(0x9dU) 
                                           + (IData)(vlSelf->test__DOT__tmp_33_1_reg_1603)));
    vlSelf->test__DOT__r_V_s_fu_110_p1 = (0xffffU & vlSelf->input_2_V);
    vlSelf->test__DOT__r_V_10_1_fu_108_p1 = (vlSelf->input_2_V 
                                             >> 0x10U);
    vlSelf->test__DOT__res_0_V_write_assign_fu_1431_p2 
        = (0xffffU & ((IData)(vlSelf->test__DOT__tmp_3_reg_1568) 
                      + (IData)(vlSelf->test__DOT__tmp2_fu_1426_p2)));
    vlSelf->test__DOT__r_V_s_fu_110_p2 = (0x3ffffffU 
                                          & VL_MULS_III(26, (IData)(0x3fffee0U), 
                                                        (0x3ffffffU 
                                                         & VL_EXTENDS_II(26,16, (IData)(vlSelf->test__DOT__r_V_s_fu_110_p1)))));
    vlSelf->test__DOT__r_V_cast3_fu_1184_p1 = vlSelf->test__DOT__r_V_s_fu_110_p1;
    vlSelf->test__DOT__tmp_fu_1180_p1 = vlSelf->test__DOT__r_V_s_fu_110_p1;
    vlSelf->test__DOT__r_V_10_1_fu_108_p2 = (0x3ffffffU 
                                             & VL_MULS_III(26, (IData)(0x130U), 
                                                           (0x3ffffffU 
                                                            & VL_EXTENDS_II(26,16, (IData)(vlSelf->test__DOT__r_V_10_1_fu_108_p1)))));
    vlSelf->test__DOT__r_V_1_cast_fu_1289_p1 = vlSelf->test__DOT__r_V_10_1_fu_108_p1;
    vlSelf->test__DOT__tmp_2_fu_1269_p4 = vlSelf->test__DOT__r_V_10_1_fu_108_p1;
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
    vlSelf->test__DOT__tmp_3_reg_1568 = (0xffffU & 
                                         (vlSelf->test__DOT__r_V_s_fu_110_p2 
                                          >> 0xaU));
    vlSelf->test__DOT__tmp_33_1_reg_1603 = (0xffffU 
                                            & (vlSelf->test__DOT__r_V_10_1_fu_108_p2 
                                               >> 0xaU));
    vlSelf->test__DOT__tmp2_fu_1426_p2 = (0xffffU & 
                                          ((IData)(0x9dU) 
                                           + (IData)(vlSelf->test__DOT__tmp_33_1_reg_1603)));
    vlSelf->test__DOT__res_0_V_write_assign_fu_1431_p2 
        = (0xffffU & ((IData)(vlSelf->test__DOT__tmp_3_reg_1568) 
                      + (IData)(vlSelf->test__DOT__tmp2_fu_1426_p2)));
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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/test.v", 2, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/test.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/verilog/test.v", 2, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->ap_start & 0xfeU))) {
        Verilated::overWidthError("ap_start");}
    if (VL_UNLIKELY((vlSelf->input_2_V_ap_vld & 0xfeU))) {
        Verilated::overWidthError("input_2_V_ap_vld");}
}
#endif  // VL_DEBUG
