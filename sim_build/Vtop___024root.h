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
    VL_IN8(ap_clk,0,0);
    VL_IN8(ap_rst,0,0);
    VL_IN8(ap_start,0,0);
    VL_OUT8(ap_done,0,0);
    VL_OUT8(ap_idle,0,0);
    VL_OUT8(ap_ready,0,0);
    VL_IN8(input_2_V_ap_vld,0,0);
    VL_OUT8(layer7_out_0_V_ap_vld,0,0);
    CData/*0:0*/ test__DOT__ap_clk;
    CData/*0:0*/ test__DOT__ap_rst;
    CData/*0:0*/ test__DOT__ap_start;
    CData/*0:0*/ test__DOT__ap_done;
    CData/*0:0*/ test__DOT__ap_idle;
    CData/*0:0*/ test__DOT__ap_ready;
    CData/*0:0*/ test__DOT__input_2_V_ap_vld;
    CData/*0:0*/ test__DOT__layer7_out_0_V_ap_vld;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ap_clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(layer7_out_0_V,15,0);
    SData/*15:0*/ test__DOT__layer7_out_0_V;
    SData/*15:0*/ test__DOT__w0_0;
    SData/*15:0*/ test__DOT__w1_0;
    SData/*15:0*/ test__DOT__div;
    SData/*15:0*/ test__DOT__res_0_V_write_assign_fu_1431_p2;
    SData/*15:0*/ test__DOT__tmp_33_1_reg_1603;
    SData/*15:0*/ test__DOT__tmp_3_reg_1568;
    SData/*15:0*/ test__DOT__tmp2_fu_1426_p2;
    SData/*15:0*/ test__DOT__r_V_10_1_fu_108_p1;
    SData/*15:0*/ test__DOT__r_V_s_fu_110_p1;
    SData/*15:0*/ test__DOT__r_V_1_cast_fu_1289_p1;
    SData/*15:0*/ test__DOT__r_V_cast3_fu_1184_p1;
    SData/*15:0*/ test__DOT__tmp_2_fu_1269_p4;
    SData/*15:0*/ test__DOT__tmp_fu_1180_p1;
    VL_IN(input_2_V,31,0);
    IData/*31:0*/ test__DOT__input_2_V;
    IData/*17:0*/ test__DOT__ans;
    IData/*31:0*/ test__DOT__ans2;
    IData/*25:0*/ test__DOT__r_V_10_1_fu_108_p2;
    IData/*25:0*/ test__DOT__r_V_s_fu_110_p2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ test__DOT__ap_ST_fsm_pp0_stage0 = 1U;
    static constexpr IData/*31:0*/ test__DOT__DS = 0x0000000fU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
