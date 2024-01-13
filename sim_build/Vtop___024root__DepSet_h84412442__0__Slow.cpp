// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->layer2__DOT__w0_0 = 0x3f809U;
    vlSelf->layer2__DOT__w0_1 = 0x3fbd4U;
    vlSelf->layer2__DOT__w0_2 = 0x4d8U;
    vlSelf->layer2__DOT__w0_3 = 0x949U;
    vlSelf->layer2__DOT__w1_0 = 0x3f90aU;
    vlSelf->layer2__DOT__w1_1 = 0x17a2U;
    vlSelf->layer2__DOT__w1_2 = 0x3fea0U;
    vlSelf->layer2__DOT__w1_3 = 0x1ba0U;
    vlSelf->layer2__DOT__w2_0 = 0x3fc63U;
    vlSelf->layer2__DOT__w2_1 = 0x3fbdbU;
    vlSelf->layer2__DOT__w2_2 = 0xe7U;
    vlSelf->layer2__DOT__w2_3 = 0x9d2U;
    vlSelf->layer2__DOT__w3_0 = 0x7c8U;
    vlSelf->layer2__DOT__w3_1 = 0xb43U;
    vlSelf->layer2__DOT__w3_2 = 0x3f81cU;
    vlSelf->layer2__DOT__w3_3 = 0x3f841U;
    vlSelf->layer2__DOT__w4_0 = 0x3f8ddU;
    vlSelf->layer2__DOT__w4_1 = 0x3f693U;
    vlSelf->layer2__DOT__w4_2 = 0x3fec0U;
    vlSelf->layer2__DOT__w4_3 = 0x3fdd9U;
    vlSelf->layer2__DOT__w5_0 = 0xac5U;
    vlSelf->layer2__DOT__w5_1 = 0x3fc77U;
    vlSelf->layer2__DOT__w5_2 = 0x468U;
    vlSelf->layer2__DOT__w5_3 = 0x3f4f4U;
    vlSelf->layer2__DOT__w6_0 = 0x31cU;
    vlSelf->layer2__DOT__w6_1 = 0x23caU;
    vlSelf->layer2__DOT__w6_2 = 0x3f9ecU;
    vlSelf->layer2__DOT__w6_3 = 0x3457U;
    vlSelf->layer2__DOT__w7_0 = 0x90cU;
    vlSelf->layer2__DOT__w7_1 = 0x2dceU;
    vlSelf->layer2__DOT__w7_2 = 0x50U;
    vlSelf->layer2__DOT__w7_3 = 0x2085U;
    vlSelf->layer2__DOT__b0 = 0x3fff1U;
    vlSelf->layer2__DOT__b1 = 0x3f75bU;
    vlSelf->layer2__DOT__b2 = 0U;
    vlSelf->layer2__DOT__b3 = 0x3f69bU;
    VL_PRINTF_MT("-Info: /home/neelvora/Projects/Verilog/verilog/layer2.v:676: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->layer2__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->layer2__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->layer2__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->layer2__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->layer2__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
