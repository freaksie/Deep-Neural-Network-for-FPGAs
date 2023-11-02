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
    vlSelf->myproject__DOT__ap_CS_fsm = 1U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter1 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter2 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter3 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter4 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter5 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter6 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter7 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter8 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter9 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter10 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter11 = 0U;
    vlSelf->myproject__DOT__ap_enable_reg_pp0_iter12 = 0U;
    vlSelf->myproject__DOT__input_2_V_preg = 0U;
    vlSelf->myproject__DOT__input_2_V_ap_vld_preg = 0U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    VL_PRINTF_MT("-Info: /home/neelvora/Projects/Verilog/verilog/myproject.v:814: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->myproject__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->myproject__DOT__ap_block_state10_pp0_stage0_iter9 = 0U;
    vlSelf->myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state10_pp0_stage0_iter9_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state11_pp0_stage0_iter10 = 0U;
    vlSelf->myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state11_pp0_stage0_iter10_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state12_pp0_stage0_iter11 = 0U;
    vlSelf->myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state12_pp0_stage0_iter11_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state13_pp0_stage0_iter12 = 0U;
    vlSelf->myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state13_pp0_stage0_iter12_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state2_pp0_stage0_iter1_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    vlSelf->myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state3_pp0_stage0_iter2_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state4_pp0_stage0_iter3 = 0U;
    vlSelf->myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state4_pp0_stage0_iter3_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state5_pp0_stage0_iter4 = 0U;
    vlSelf->myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state5_pp0_stage0_iter4_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state6_pp0_stage0_iter5 = 0U;
    vlSelf->myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state6_pp0_stage0_iter5_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state7_pp0_stage0_iter6 = 0U;
    vlSelf->myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state7_pp0_stage0_iter6_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state8_pp0_stage0_iter7 = 0U;
    vlSelf->myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state8_pp0_stage0_iter7_ignore_call7 = 0U;
    vlSelf->myproject__DOT__ap_block_state9_pp0_stage0_iter8 = 0U;
    vlSelf->myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call25 = 0U;
    vlSelf->myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call35 = 0U;
    vlSelf->myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call36 = 0U;
    vlSelf->myproject__DOT__ap_block_state9_pp0_stage0_iter8_ignore_call7 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->myproject__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_ready = 1U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm = 1U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1 = 0U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2 = 0U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state3_pp0_stage0_iter2 = 0U;
    VL_READMEM_N(true, 10, 1024, 0, VL_CVT_PACK_STR_NW(23, Vtop__ConstPool__CONST_he10ad66e_0)
                 ,  &(vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0_11001 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state1_pp0_stage0_iter0 = 0U;
    vlSelf->myproject__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_state2_pp0_stage0_iter1 = 0U;
    vlSelf->myproject__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_ready = 1U;
    vlSelf->myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_11001 = 0U;
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
