// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlWide<23>/*735:0*/ Vtop__ConstPool__CONST_he10ad66e_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->normalize__DOT__nn_start = 1U;
    vlSelf->normalize__DOT__rst = 0U;
    vlSelf->normalize__DOT__input_2_V_ap_vld = 1U;
    vlSelf->normalize__DOT__min = 0x3ffffU;
    vlSelf->normalize__DOT__flag = 0U;
    VL_PRINTF_MT("-Info: /home/neelvora/Projects/Verilog/Q3_Parameter/normalize.v:95: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->normalize__DOT__myproject__DOT__ap_CS_fsm = 1U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter3 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter4 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter5 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter6 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter8 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter9 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter10 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter11 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_enable_reg_pp0_iter12 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_preg = 0ULL;
    vlSelf->normalize__DOT__myproject__DOT__input_2_V_ap_vld_preg = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    VL_PRINTF_MT("-Info: myproject.v:816: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->normalize__DOT__myproject__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call25 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call35 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call36 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call7 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_0 = 0x3f809U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_1 = 0x3fbd4U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_2 = 0x4d8U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_3 = 0x949U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_0 = 0x3f90aU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_1 = 0x17a2U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_2 = 0x3fea0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_3 = 0x1ba0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_0 = 0x3fc63U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_1 = 0x3fbdbU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_2 = 0xe7U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_3 = 0x9d2U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_0 = 0x7c8U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_1 = 0xb43U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_2 = 0x3f81cU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_3 = 0x3f841U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_0 = 0x3f8ddU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_1 = 0x3f693U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_2 = 0x3fec0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_3 = 0x3fdd9U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_0 = 0xac5U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_1 = 0x3fc77U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_2 = 0x468U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_3 = 0x3f4f4U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_0 = 0x31cU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_1 = 0x23caU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_2 = 0x3f9ecU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_3 = 0x3457U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_0 = 0x90cU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_1 = 0x2dceU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_2 = 0x50U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_3 = 0x2085U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b0 = 0x3fff1U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b1 = 0x3f75bU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b3 = 0x3f69bU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_0 = 0x3f857U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_1 = 0x12feU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_2 = 0x3fcd6U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_3 = 0x3fa67U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_4 = 0x3fffdU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_5 = 0x3f762U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_6 = 0x1077U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_7 = 0x131fU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_0 = 0x4eaU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_1 = 0x1136U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_2 = 0x3f47aU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_3 = 0x3fa01U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_4 = 0x3fb11U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_5 = 0x3fefbU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_6 = 0xc02U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_7 = 0x83aU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b0 = 0x3ff9aU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b1 = 0x3f49eU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b3 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b4 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b5 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b6 = 0x3f3acU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b7 = 0x3f4daU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_ready = 1U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm = 1U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__comp = 0x3fffff1U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    VL_READMEM_N(true, 10, 1024, 0, VL_CVT_PACK_STR_NW(23, Vtop__ConstPool__CONST_he10ad66e_0)
                 ,  &(vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w0 = 0xce3U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w1 = 0x3c7deU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w2 = 0x3efe0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w3 = 0x3cb93U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__b = 0x594cU;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->normalize__DOT__myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_ready = 1U;
    vlSelf->normalize__DOT__myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_11001 = 0U;
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
