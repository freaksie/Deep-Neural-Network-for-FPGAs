// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::myproject__DOT__ap_ST_fsm_pp0_stage0;
constexpr CData/*0:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ST_fsm_pp0_stage0;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__DS;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__DS;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__DataWidth;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__AddressRange;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__AddressWidth;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__DWIDTH;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__AWIDTH;
constexpr IData/*31:0*/ Vtop___024root::myproject__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__MEM_SIZE;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
