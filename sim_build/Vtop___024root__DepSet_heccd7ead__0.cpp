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
    // Init
    CData/*0:0*/ state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0;
    state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0 = 0;
    CData/*0:0*/ state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0;
    state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0 = 0;
    // Body
    vlSelf->state_disc__DOT__nn_model__DOT__ap_NS_fsm 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_0_V_reg_249;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_1_V_reg_254;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_2_V_reg_259;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_3_V_reg_264;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_4_V_reg_269;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_5_V_reg_274;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_6_V_reg_279;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_7_V_reg_284;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_4_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_5_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_6_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_7_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__data_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_NS_fsm 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm_pp0_stage0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_10_fu_3825_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_cast_fu_3735_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_12_fu_3828_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_20_fu_3840_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_fu_3846_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_16_fu_3834_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_14_fu_3831_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_22_fu_3843_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_27_fu_3849_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_cast_fu_3837_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_cast_fu_3882_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_8_fu_3467_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_5_fu_3464_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_6_fu_3473_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_2_fu_3470_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_28_fu_1379_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_32_cast_fu_1420_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_30_fu_1423_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_7;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_ready 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_ready;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_ready 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_ready;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_3_fu_3292_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_fu_3507_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_1_fu_3636_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_1_fu_3719_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_fu_3790_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_1));
    vlSelf->state_disc__DOT__start_trigger = vlSelf->start_trigger;
    vlSelf->state_disc__DOT__accumulated_data = vlSelf->accumulated_data;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_q0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp16_fu_3775_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp17_fu_3780_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp23_fu_3796_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp24_fu_3800_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp30_fu_3810_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp31_fu_3815_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp9_fu_3759_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp10_fu_3763_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg;
    vlSelf->state_disc__DOT__NN_startTrigger = vlSelf->state_disc__DOT__normalizer__DOT__startNN;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_fu_82_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_fu_88_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_1_fu_104_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_10_fu_110_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_2_fu_126_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_11_fu_132_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_3_fu_148_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_12_fu_154_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_4_fu_170_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_13_fu_176_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_5_fu_192_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_14_fu_198_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_6_fu_214_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_15_fu_220_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_7_fu_236_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_16_fu_242_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_fu_50_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_fu_56_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_1_fu_72_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_7_fu_78_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_2_fu_94_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_8_fu_100_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_3_fu_116_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_9_fu_122_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp2_fu_1426_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp3_fu_1436_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp4_fu_1447_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp5_fu_1457_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp6_fu_1467_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b4 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_4));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp8_fu_1493_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b6 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_6));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp9_fu_1503_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b7 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_7));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_fu_227_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b5 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_5));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__icmp_fu_189_p2 
        = (0U != (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_6_reg_211));
    state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp12_fu_3852_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp26_fu_3906_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp33_fu_3934_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp19_fu_3878_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp2_fu_231_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__b 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node3));
    vlSelf->state_disc__DOT__rst = vlSelf->rst;
    state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp14_fu_3857_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp28_fu_3911_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp35_fu_3940_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_3));
    vlSelf->state_disc__DOT__clk = vlSelf->clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0) 
           << 2U);
    vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14 
        = (1U & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter14)) 
                 & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter13)) 
                    & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12)) 
                       & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter11)) 
                          & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter10)) 
                             & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter9)) 
                                & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter8)) 
                                   & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter7)) 
                                      & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter6)) 
                                         & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter5)) 
                                            & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter4)) 
                                               & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter3)) 
                                                  & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter2)) 
                                                     & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter1)) 
                                                        & (~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)))))))))))))))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__r_V_fu_75_p3 
        = (vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329 
           << 0xaU);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1 
        = (0x3fU & vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_fu_83_p4 
        = (0xfffU & (vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329 
                     >> 6U));
    vlSelf->state_disc__DOT__normalized_data = (((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (IData)(
                                                                            (vlSelf->state_disc__DOT__normalizer__DOT__normalizedQ 
                                                                             >> 0x12U))))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (IData)(
                                                                             (vlSelf->state_disc__DOT__normalizer__DOT__normalizedI 
                                                                              >> 0x12U))))));
    if (vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld) {
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
            = vlSelf->state_disc__DOT__normalized_data;
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_preg;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_preg;
    }
    vlSelf->state_disc__DOT__normalizer__DOT__stb_start 
        = vlSelf->state_disc__DOT__start_trigger;
    vlSelf->state_disc__DOT__normalizer__DOT__accumulated_input 
        = vlSelf->state_disc__DOT__accumulated_data;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__q0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_q0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_fu_3784_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp16_fu_3775_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp17_fu_3780_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_fu_3804_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp23_fu_3796_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp24_fu_3800_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_fu_3819_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp30_fu_3810_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp31_fu_3815_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_fu_3769_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp9_fu_3759_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp10_fu_3763_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_start 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
    vlSelf->state_disc__DOT__nn_model__DOT__nn_start 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__normalizer__DOT__NN_startTrigger 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter0 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_4_cast_fu_3476_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D4_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_5_cast_fu_3557_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_6_cast2_fu_3607_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D6_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_7_cast_fu_3672_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D7_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_fu_92_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_fu_82_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_fu_88_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_fu_114_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_1_fu_104_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_10_fu_110_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_fu_136_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_2_fu_126_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_11_fu_132_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_fu_158_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_3_fu_148_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_12_fu_154_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_fu_180_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_4_fu_170_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_13_fu_176_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_fu_202_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_5_fu_192_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_14_fu_198_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_fu_224_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_6_fu_214_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_15_fu_220_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_fu_246_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_7_fu_236_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_16_fu_242_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_fu_60_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_fu_50_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_fu_56_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_fu_82_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_1_fu_72_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_7_fu_78_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_fu_104_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_2_fu_94_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_8_fu_100_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_fu_126_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_3_fu_116_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_9_fu_122_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp2_fu_1426_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp3_fu_1436_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp4_fu_1447_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp5_fu_1457_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_4 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp6_fu_1467_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_6 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp8_fu_1493_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_7 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp9_fu_1503_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D0_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_cast_fu_1483_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_5 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__icmp_fu_189_p2)
            ? 0x3ffU : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_reg_206));
    vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_blk_n 
        = (1U & ((~ ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0)) 
                     & ((IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN) 
                        & (IData)(state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0)))) 
                 | (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp1_fu_236_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp2_fu_231_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node2));
    vlSelf->state_disc__DOT__nn_model__DOT__rst = vlSelf->state_disc__DOT__rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast1_fu_3308_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast_fu_3367_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast_fu_3419_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_cast_fu_3891_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp18_fu_3895_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp19_fu_3878_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp13_fu_3862_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp14_fu_3857_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp27_fu_3917_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp28_fu_3911_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp34_fu_3946_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp35_fu_3940_p2));
    vlSelf->state_disc__DOT__normalizer__DOT__clk = vlSelf->state_disc__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__clk = vlSelf->state_disc__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_return 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;
    vlSelf->inference_prob = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_reset_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_s_fu_97_p2 
        = VL_LTS_III(28, vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__r_V_fu_75_p3, vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__comp);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_2_fu_107_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1) 
           << 6U);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_3_fu_115_p2 
        = (0U == (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0 
        = (1U & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig)) 
                 | (~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1 
        = (0x1fffU & VL_EXTENDS_II(13,12, (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_fu_83_p4)));
    vlSelf->state_disc__DOT__nn_model__DOT__normalized_input 
        = vlSelf->state_disc__DOT__normalized_data;
    vlSelf->state_disc__DOT__normalizer__DOT__normalized_output 
        = vlSelf->state_disc__DOT__normalized_data;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_fu_92_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_fu_114_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_fu_136_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_fu_158_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_fu_180_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_fu_202_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_fu_224_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_fu_246_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_fu_60_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_fu_82_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_fu_104_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_fu_126_p3;
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5_int_reg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_1_fu_194_p3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_8_fu_201_p1 
        = (QData)((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__address0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp1_fu_236_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_fu_227_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_rst 
        = vlSelf->state_disc__DOT__nn_model__DOT__rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_rst 
        = vlSelf->state_disc__DOT__nn_model__DOT__rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_rst 
        = vlSelf->state_disc__DOT__nn_model__DOT__rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_rst 
        = vlSelf->state_disc__DOT__nn_model__DOT__rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_reg_4177 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp18_fu_3895_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp11_fu_3867_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp12_fu_3852_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp13_fu_3862_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp25_fu_3923_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp26_fu_3906_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp27_fu_3917_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp32_fu_3952_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp33_fu_3934_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp34_fu_3946_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__clk;
    vlSelf->state_disc__DOT__inference_prob = vlSelf->inference_prob;
    vlSelf->state_disc__DOT__nn_model__DOT__state_probability 
        = vlSelf->inference_prob;
    vlSelf->inference_state = (0x800U < vlSelf->inference_prob);
    vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_pp0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0)));
    vlSelf->idle = ((~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)) 
                    & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0) 
                       & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_reset_idle_pp0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call25 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call35 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call36 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call7 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001 
        = ((IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_fu_121_p2 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__data_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1 
        = (0x3ffffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1 
        = (0x3ffffU & (IData)((vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
                               >> 0x12U)));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_cast_fu_100_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_cast_fu_122_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_cast_fu_144_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_cast_fu_166_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_cast_fu_188_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_cast_fu_210_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_cast_fu_232_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_cast_fu_254_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_cast_fu_68_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_cast_fu_90_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_cast_fu_112_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_cast_fu_134_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__addr0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__address0;
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return_int_reg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__reset 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_rst;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_reg_4172 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp11_fu_3867_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_reg_4187 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp25_fu_3923_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_reg_4192 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp32_fu_3952_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3_int_reg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_clk;
    vlSelf->state_disc__DOT__inference_state = vlSelf->inference_state;
    vlSelf->state_disc__DOT__nn_model__DOT__state = vlSelf->inference_state;
    vlSelf->state_disc__DOT__nn_model__DOT__state_pred 
        = vlSelf->inference_state;
    vlSelf->state_disc__DOT__idle = vlSelf->idle;
    vlSelf->state_disc__DOT__nn_model__DOT__idle = vlSelf->idle;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_pp0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
           & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm)));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_subdone 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp47 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp15 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp34 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp49 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_01001 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->ready = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
                     & (IData)(state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0));
    vlSelf->done_trigger = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
                            & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_s_fu_127_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_3_fu_115_p2)
            ? (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1)
            : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_fu_121_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_cast3_fu_1184_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_2)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_4)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_6)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_7)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_5_fu_1404_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_5)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_1_cast_fu_1289_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_2_fu_1269_p4 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_7)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_2)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_4)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_6)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_5)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__clk 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__clk;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle;
    vlSelf->state_disc__DOT__ready = vlSelf->ready;
    vlSelf->state_disc__DOT__nn_model__DOT__ready = vlSelf->ready;
    vlSelf->state_disc__DOT__done_trigger = vlSelf->done_trigger;
    vlSelf->state_disc__DOT__nn_model__DOT__done = vlSelf->done_trigger;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_subdone 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
           & (IData)(state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done 
        = (((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
            & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0)) 
               & (IData)(state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0))) 
           | ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
           & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_s_fu_97_p2)
            ? (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_s_fu_127_p3)
            : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ready 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_done 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__ce0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_2_fu_143_p1 
        = (0xfffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_fu_147_p2 
        = (0x1fffU & ((IData)(0x200U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ce0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__ce0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2 
        = (0xfffU & ((IData)(0x200U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_2_fu_143_p1)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_4_fu_159_p3 
        = (1U & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_fu_147_p2) 
                 >> 0xcU));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_4_fu_159_p3) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3 = 0U;
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1 
            = (0x3ffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2;
    }
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
    // Init
    CData/*0:0*/ state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0;
    state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0 = 0;
    CData/*0:0*/ state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0;
    state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_reg_247;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_2_reg_257;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_1_reg_252;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_3_reg_262;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_reg_247 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_2_reg_257 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_1_reg_252 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_5_3_reg_262 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p2 
                           >> 0xcU));
    }
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ram
            [vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0];
    }
    if ((((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
          & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_11001))) 
         & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm_pp0_stage0))) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_reg_206 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_6_reg_211 
            = (3U & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3) 
                     >> 0xaU));
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_NS_fsm));
    if ((1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_5 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_5_fu_1410_p4;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_6 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_6_reg_1593;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_4 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_4_reg_1588;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_3_reg_1583;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_3_reg_1568;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_2_reg_1578;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_7 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_7_reg_1598;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_s_reg_1573;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_reg_1603;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_6 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_6_reg_1633;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_4 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_4_reg_1623;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_3_reg_1618;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_1_reg_1608;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_2_reg_1613;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_7 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_29_reg_1638;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_5 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_36_reg_1628;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_5_fu_1410_p4 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_5_fu_1404_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_6_reg_1593 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_4_reg_1588 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_3_reg_1583 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_3_reg_1568 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_2_reg_1578 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_0_7_reg_1598 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_s_reg_1573 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_reg_1603 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_6_reg_1633 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_4_reg_1623 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_3_reg_1618 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_1_reg_1608 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_33_1_2_reg_1613 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_29_reg_1638 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_36_reg_1628 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p2 
                           >> 0xcU));
    }
    vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_NS_fsm));
    if (((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
         & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0))) {
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1;
        vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0;
    }
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_0_V_reg_249;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_3_V_reg_264;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_2_V_reg_259;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_1_V_reg_254;
    }
    vlSelf->state_disc__DOT__normalizer__DOT__normalizedQ 
        = vlSelf->state_disc__DOT__normalizer__DOT__normalizedQ_r;
    vlSelf->state_disc__DOT__normalizer__DOT__normalizedI 
        = vlSelf->state_disc__DOT__normalizer__DOT__normalizedI_r;
    if (((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) 
         & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_reg_4172 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_fu_3769_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_reg_4177 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_fu_3784_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_reg_4192 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_fu_3819_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_reg_4187 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_fu_3804_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_fu_3790_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read_int_reg;
    }
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_6_V_reg_279;
    }
    if (vlSelf->rst) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_preg = 0ULL;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_preg = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter14 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter13 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter11 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter10 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter9 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter8 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter7 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter6 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter5 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter4 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter3 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter2 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_subdone)))) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1;
        }
        if (((~ ((~ (IData)(vlSelf->state_disc__DOT__NN_startTrigger)) 
                 & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0))) 
             & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld))) {
            vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_preg 
                = vlSelf->state_disc__DOT__normalized_data;
        }
        if ((((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
              & (IData)(vlSelf->state_disc__DOT__NN_startTrigger)) 
             & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0))) {
            vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_preg = 0U;
        } else if (((~ ((~ (IData)(vlSelf->state_disc__DOT__NN_startTrigger)) 
                        & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0))) 
                    & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld))) {
            vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_preg 
                = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld;
        }
        if (((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
             & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12))) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 1U;
        } else if (vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)))) {
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter14;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter14 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter13;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter13 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter11;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter11 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter10;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter10 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter9;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter9 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter8;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter8 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter7;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter7 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter6;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter6 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter5;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter5 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter4;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter4 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter3;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter3 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter2;
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter2 
                = vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter1;
        }
        if (((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_subdone)) 
             & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm_pp0_stage0))) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
        }
        if (((IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0) 
             & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)))) {
            vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter1 
                = vlSelf->state_disc__DOT__NN_startTrigger;
        }
    }
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_4_V_reg_269;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_5_V_reg_274;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_7_V_reg_284;
    }
    if ((1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
        vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
        vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
        vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
        vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0;
        vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1;
        vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2;
        vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3;
        vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_0_V_reg_249 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_3_V_reg_264 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_2_V_reg_259 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_1_V_reg_254 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_6_V_reg_279 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_4_V_reg_269 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_5_V_reg_274 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
        vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_7_V_reg_284 
            = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
    }
    if (((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) 
         & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_block_pp0_stage0_11001)))) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_23_fu_3725_p4;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_reg_4037;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_3_reg_4052;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_2_reg_4047;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_1_reg_4022;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_2_reg_4087;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_2_reg_4067;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_2_reg_4027;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_1_reg_4062;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_3_reg_4072;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_1_reg_4082;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_3_reg_4092;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_1_reg_4017;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_s_reg_4057;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_7_reg_4042;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_4_reg_4032;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_3_reg_4077;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_2_reg_4127;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_4_1_reg_4102;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_1_reg_4122;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_reg_4117;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_6_reg_4137;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_9_reg_4097;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_15_reg_4132;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_reg_4147;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_11_reg_4107;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_13_reg_4112;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_21_reg_4152;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_7_reg_4157;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_18_reg_4142;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_26_reg_4167;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_24_reg_4162;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_23_fu_3725_p4 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_1_fu_3719_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_reg_4037 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_3_reg_4052 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_1_2_reg_4047 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_1_reg_4022 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_2_reg_4087 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_2_reg_4067 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_0_2_reg_4027 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_1_reg_4062 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_2_3_reg_4072 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_1_reg_4082 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_3_3_reg_4092 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_1_reg_4017 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_s_reg_4057 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_7_reg_4042 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_4_reg_4032 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_3_fu_3292_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_3_reg_4077 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_2_reg_4127 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_4_1_reg_4102 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_1_reg_4122 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_5_reg_4117 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_6_reg_4137 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_9_reg_4097 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_fu_3507_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_15_reg_4132 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_reg_4147 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_11_reg_4107 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_13_reg_4112 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_21_reg_4152 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_17_7_reg_4157 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_18_reg_4142 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_1_fu_3636_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_26_reg_4167 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p2 
                           >> 0xcU));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_24_reg_4162 
            = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p2 
                           >> 0xcU));
    }
    vlSelf->state_disc__DOT__normalizer__DOT__startNN 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay8;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_fu_227_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp2_fu_231_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__b 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_q0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__q0) 
           << 2U);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__icmp_fu_189_p2 
        = (0U != (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_6_reg_211));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_NS_fsm 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm;
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_28_fu_1379_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp2_fu_1426_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp8_fu_1493_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b6 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_6));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp6_fu_1467_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b4 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_4));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp5_fu_1457_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp3_fu_1436_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp4_fu_1447_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_30_fu_1423_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_7;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp9_fu_1503_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b7 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_7));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_32_cast_fu_1420_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__b5 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node1_5));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_NS_fsm 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_fu_50_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_fu_56_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_0_V_reg_289);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_1_fu_72_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_7_fu_78_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_1_V_reg_294);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_2_fu_94_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_8_fu_100_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_2_V_reg_299);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_3_fu_116_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_9_fu_122_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer4_out_3_V_reg_304);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_7_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_7_fu_236_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_16_fu_242_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_7_V_reg_244);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_6_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_6_fu_214_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_15_fu_220_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_6_V_reg_239);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_5_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_5_fu_192_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_14_fu_198_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_5_V_reg_234);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_4_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_4_fu_170_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_13_fu_176_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_4_V_reg_229);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_3_fu_148_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_12_fu_154_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_3_V_reg_224);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_2_fu_126_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_11_fu_132_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_2_V_reg_219);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_1_fu_104_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_10_fu_110_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_1_V_reg_214);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_fu_82_p2 
        = VL_LTS_III(32, 0U, VL_EXTENDS_II(32,18, vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_fu_88_p1 
        = (0x1ffffU & vlSelf->state_disc__DOT__nn_model__DOT__layer2_out_0_V_reg_209);
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg;
    vlSelf->state_disc__DOT__normalizer__DOT__normalizedQ_r 
        = (0xfffffffffULL & (0x1a36eULL * (QData)((IData)(vlSelf->state_disc__DOT__normalizer__DOT__shiftQ))));
    vlSelf->state_disc__DOT__normalizer__DOT__normalizedI_r 
        = (0xfffffffffULL & (0x1a36eULL * (QData)((IData)(vlSelf->state_disc__DOT__normalizer__DOT__shiftI))));
    vlSelf->state_disc__DOT__normalized_data = (((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (IData)(
                                                                            (vlSelf->state_disc__DOT__normalizer__DOT__normalizedQ 
                                                                             >> 0x12U))))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (IData)(
                                                                             (vlSelf->state_disc__DOT__normalizer__DOT__normalizedI 
                                                                              >> 0x12U))))));
    if (vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld) {
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
            = vlSelf->state_disc__DOT__normalized_data;
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_preg;
        vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
            = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_preg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_cast_fu_3882_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__data_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__r_V_fu_75_p3 
        = (vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329 
           << 0xaU);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1 
        = (0x3fU & vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_fu_83_p4 
        = (0xfffU & (vlSelf->state_disc__DOT__nn_model__DOT__layer6_out_0_V_reg_329 
                     >> 6U));
    vlSelf->state_disc__DOT__normalizer__DOT__delay8 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay7;
    state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_cast_fu_3735_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_fu_3790_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp24_fu_3800_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp23_fu_3796_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp17_fu_3780_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp31_fu_3815_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp9_fu_3759_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_2_fu_3470_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_8_fu_3467_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp16_fu_3775_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_5_fu_3464_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp30_fu_3810_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node0_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node1_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_6_fu_3473_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp10_fu_3763_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node2_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node3_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp19_fu_3878_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_10_fu_3825_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp12_fu_3852_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_16_fu_3834_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_20_fu_3840_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_12_fu_3828_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp26_fu_3906_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_14_fu_3831_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp33_fu_3934_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node4_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node5_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_22_fu_3843_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp14_fu_3857_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_19_cast_fu_3837_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp21_reg_4182));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_27_fu_3849_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp35_fu_3940_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_25_fu_3846_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp28_fu_3911_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__b2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node7_2));
    state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_fu_71_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_0_V_reg_309)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_2_fu_70_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_2_V_reg_319)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_1_fu_73_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_1_V_reg_314)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp1_fu_236_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp2_fu_231_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__node2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__r_V_6_3_fu_72_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__layer5_out_3_V_reg_324)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__w3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__q0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_q0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_return 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;
    vlSelf->inference_prob = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__icmp_fu_189_p2)
            ? 0x3ffU : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_reg_206));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp2_fu_1426_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_6 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp8_fu_1493_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_4 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp6_fu_1467_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp5_fu_1457_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_1 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp3_fu_1436_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp4_fu_1447_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_7 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp9_fu_1503_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_cast_fu_1483_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__node0_5 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp7_fu_1477_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__res_0_V_write_assign_fu_1431_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_1_V_fu_1441_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_2_V_fu_1452_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_3_V_fu_1462_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_4_V_fu_1472_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_5_V_fu_1487_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_6_V_fu_1498_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__acc_7_V_fu_1509_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7_int_reg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_fu_60_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_fu_50_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_fu_56_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_fu_82_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_1_fu_72_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_7_fu_78_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_fu_104_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_2_fu_94_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_8_fu_100_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_fu_126_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_1_3_fu_116_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__tmp_9_fu_122_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_fu_246_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_7_fu_236_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_16_fu_242_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_fu_224_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_6_fu_214_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_15_fu_220_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_fu_202_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_5_fu_192_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_14_fu_198_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_fu_180_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_4_fu_170_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_13_fu_176_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_fu_158_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_3_fu_148_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_12_fu_154_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_fu_136_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_2_fu_126_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_11_fu_132_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_fu_114_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_1_fu_104_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_10_fu_110_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_fu_92_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_2_fu_82_p2)
            ? vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__tmp_fu_88_p1
            : 0U);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm_pp0_stage0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D0_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_cast_fu_3225_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast1_fu_3412_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_3_cast_fu_3419_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast1_fu_3360_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_2_cast_fu_3367_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast1_fu_3308_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_1_cast_fu_3313_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__normalized_input 
        = vlSelf->state_disc__DOT__normalized_data;
    vlSelf->state_disc__DOT__normalizer__DOT__normalized_output 
        = vlSelf->state_disc__DOT__normalized_data;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0 
        = (1U & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld_in_sig)) 
                 | (~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_s_fu_97_p2 
        = VL_LTS_III(28, vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__r_V_fu_75_p3, vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__comp);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_2_fu_107_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1) 
           << 6U);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_3_fu_115_p2 
        = (0U == (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_1_fu_103_p1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1 
        = (0x1fffU & VL_EXTENDS_II(13,12, (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_fu_83_p4)));
    vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_blk_n 
        = (1U & ((~ ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0)) 
                     & ((IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN) 
                        & (IData)(state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0)))) 
                 | (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_ap_vld)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_6_cast2_fu_3607_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D6_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_4_cast_fu_3476_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D4_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_5_cast_fu_3557_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_7_cast_fu_3672_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_neel_D7_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_1_fu_3719_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_fu_223_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_3_fu_219_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_2_fu_210_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_1_fu_215_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_2_fu_214_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_2_fu_212_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_fu_3804_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp23_fu_3796_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp24_fu_3800_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_2_fu_197_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_1_fu_204_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_3_fu_217_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_1_fu_202_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_3_fu_198_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_fu_221_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_2_fu_213_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w2_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_fu_3784_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp16_fu_3775_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp17_fu_3780_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_1_1_fu_203_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w1_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_fu_3819_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp30_fu_3810_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp31_fu_3815_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_0_3_fu_3292_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w0_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read_int_reg))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_fu_3769_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp9_fu_3759_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp10_fu_3763_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_3_fu_192_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read_int_reg)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w3_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_2_fu_206_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_1_fu_216_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_1_fu_208_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_fu_195_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_fu_211_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_fu_3507_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_5_3_fu_194_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read_2_reg_4003)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w5_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_2_fu_193_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_2_fu_196_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_4_3_fu_207_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read_2_reg_4009)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w4_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_3_fu_200_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp13_fu_3862_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_0 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp14_fu_3857_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_fu_205_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_0))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_cast_fu_3891_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp18_fu_3895_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp19_fu_3878_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp20_fu_3885_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_6_1_fu_3636_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w6_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read_2_reg_3995))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp34_fu_3946_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_3 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp35_fu_3940_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_3_fu_222_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_3))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp27_fu_3917_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__node6_2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp28_fu_3911_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__r_V_8_7_2_fu_218_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read11_reg_3987)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__w7_2))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp1_fu_236_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__tmp_fu_227_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__res_V_write_assign_fu_241_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return_int_reg;
    }
    vlSelf->state_disc__DOT__inference_prob = vlSelf->inference_prob;
    vlSelf->state_disc__DOT__nn_model__DOT__state_probability 
        = vlSelf->inference_prob;
    vlSelf->inference_state = (0x800U < vlSelf->inference_prob);
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_1_fu_194_p3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_8_fu_201_p1 
        = (QData)((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__address0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_address0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_fu_60_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_fu_82_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_fu_104_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_fu_126_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_fu_158_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_fu_136_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_fu_114_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_fu_92_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_start 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_0_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_0_V_reg_249;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_3_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_3_V_reg_264;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_2_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_2_V_reg_259;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_1_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_1_V_reg_254;
    vlSelf->state_disc__DOT__normalizer__DOT__shiftQ 
        = (0x3ffffU & (IData)((vlSelf->state_disc__DOT__normalizer__DOT__multiQ 
                               >> 0x13U)));
    vlSelf->state_disc__DOT__normalizer__DOT__shiftI 
        = (0x3ffffU & (IData)((vlSelf->state_disc__DOT__normalizer__DOT__multiI 
                               >> 0x13U)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__data_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1 
        = (0x3ffffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1 
        = (0x3ffffU & (IData)((vlSelf->state_disc__DOT__nn_model__DOT__input_2_V_in_sig 
                               >> 0x12U)));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call25 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call35 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call36 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0_ignore_call7 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_fu_121_p2 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1)));
    vlSelf->state_disc__DOT__normalizer__DOT__delay7 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay6;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp11_fu_3867_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp12_fu_3852_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp13_fu_3862_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp15_reg_4177 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp18_fu_3895_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp32_fu_3952_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp33_fu_3934_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp34_fu_3946_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp25_fu_3923_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp26_fu_3906_p2 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp27_fu_3917_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0_int_reg 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__inference_state = vlSelf->inference_state;
    vlSelf->state_disc__DOT__nn_model__DOT__state = vlSelf->inference_state;
    vlSelf->state_disc__DOT__nn_model__DOT__state_pred 
        = vlSelf->inference_state;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__addr0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__address0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_0_V_write_assign_cast_fu_68_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_1_V_write_assign_cast_fu_90_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_2_V_write_assign_cast_fu_112_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100__DOT__res_3_V_write_assign_cast_fu_134_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_3_V_write_assign_cast_fu_166_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_2_V_write_assign_cast_fu_144_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_1_V_write_assign_cast_fu_122_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_0_V_write_assign_cast_fu_100_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_reset_idle_pp0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0_0to1));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_cast3_fu_1184_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_2_fu_107_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_2)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_3_fu_101_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_4_fu_103_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_4)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_6_fu_105_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_6)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_7_fu_102_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_7)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_s_fu_110_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_1_fu_104_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_0_5_fu_1404_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w0_5)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_fu_1180_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_1_cast_fu_1289_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__tmp_2_fu_1269_p4 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_7_fu_112_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_7)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_1_fu_99_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_1)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_2_fu_109_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_2)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_3_fu_106_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_3)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_4)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_6_fu_111_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_6)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_fu_108_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_0)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_5_fu_113_p2 
        = (0x3fffffffU & VL_MULS_III(30, (0x3fffffffU 
                                          & VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__w1_5)), 
                                     (0x3fffffffU & 
                                      VL_EXTENDS_II(30,18, vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__r_V_10_1_4_fu_98_p1))));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_s_fu_127_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_3_fu_115_p2)
            ? (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1)
            : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_fu_121_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_fu_224_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_fu_180_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_fu_202_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_fu_246_p3;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp_reg_4172 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp11_fu_3867_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp29_reg_4192 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp32_fu_3952_p2));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2 
        = (0x3ffffU & (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp22_reg_4187 
                       + vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__tmp25_fu_3923_p2));
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
        if (vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce_reg) {
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__res_0_V_write_assign_fu_3873_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_1_V_fu_3901_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_2_V_fu_3929_p2;
            vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3 
                = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__acc_3_V_fu_3958_p2;
        }
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2_int_reg;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3_int_reg;
    }
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_return;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_pp0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
           & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle_pp0) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm)));
    vlSelf->state_disc__DOT__normalizer__DOT__multiQ 
        = vlSelf->state_disc__DOT__normalizer__DOT__multiQ_r2;
    vlSelf->state_disc__DOT__normalizer__DOT__multiI 
        = vlSelf->state_disc__DOT__normalizer__DOT__multiI_r2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_Result_s_fu_97_p2)
            ? (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_s_fu_127_p3)
            : (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ret_V_cast_fu_93_p1));
    vlSelf->state_disc__DOT__normalizer__DOT__delay6 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_6_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_6_V_reg_279;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_6 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_6_V_write_assign_cast_fu_232_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_4_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_4_V_reg_269;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_4 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_4_V_write_assign_cast_fu_188_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_5_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_5_V_reg_274;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_5 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_5_V_write_assign_cast_fu_210_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__data_7_V_read 
        = vlSelf->state_disc__DOT__nn_model__DOT__layer3_out_7_V_reg_284;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__ap_return_7 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73__DOT__res_7_V_write_assign_cast_fu_254_p1 
        = vlSelf->state_disc__DOT__nn_model__DOT__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_idle 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_2_fu_143_p1 
        = (0xfffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_fu_147_p2 
        = (0x1fffU & ((IData)(0x200U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_2_fu_135_p3)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_0;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_2;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_return_3;
    vlSelf->state_disc__DOT__normalizer__DOT__multiQ_r2 
        = vlSelf->state_disc__DOT__normalizer__DOT__multiQ_r1;
    vlSelf->state_disc__DOT__normalizer__DOT__multiI_r2 
        = vlSelf->state_disc__DOT__normalizer__DOT__multiI_r1;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2 
        = (0xfffU & ((IData)(0x200U) + (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_2_fu_143_p1)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_4_fu_159_p3 
        = (1U & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_fu_147_p2) 
                 >> 0xcU));
    vlSelf->state_disc__DOT__normalizer__DOT__delay5 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay4;
    if (vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_4_fu_159_p3) {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1 = 0U;
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3 = 0U;
    } else {
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__tmp_5_fu_175_p1 
            = (0x3ffU & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2));
        vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__p_1_fu_167_p3 
            = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__index_cast_fu_153_p2;
    }
    vlSelf->state_disc__DOT__normalizer__DOT__multiQ_r1 
        = (0x2710ULL * (QData)((IData)(vlSelf->state_disc__DOT__normalizer__DOT__sumQ)));
    vlSelf->state_disc__DOT__normalizer__DOT__multiI_r1 
        = (0x2710ULL * (QData)((IData)(vlSelf->state_disc__DOT__normalizer__DOT__sumI)));
    vlSelf->state_disc__DOT__normalizer__DOT__delay4 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay3;
    vlSelf->state_disc__DOT__normalizer__DOT__sumQ 
        = vlSelf->state_disc__DOT__normalizer__DOT__sumQ_r;
    vlSelf->state_disc__DOT__normalizer__DOT__sumI 
        = vlSelf->state_disc__DOT__normalizer__DOT__sumI_r;
    vlSelf->state_disc__DOT__normalizer__DOT__delay3 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay2;
    vlSelf->state_disc__DOT__normalizer__DOT__sumQ_r 
        = ((IData)((vlSelf->accumulated_data >> 0x20U)) 
           + VL_EXTENDS_II(32,19, vlSelf->state_disc__DOT__normalizer__DOT__minimum));
    vlSelf->state_disc__DOT__normalizer__DOT__sumI_r 
        = ((IData)(vlSelf->accumulated_data) + VL_EXTENDS_II(32,19, vlSelf->state_disc__DOT__normalizer__DOT__minimum));
    vlSelf->state_disc__DOT__normalizer__DOT__delay2 
        = vlSelf->state_disc__DOT__normalizer__DOT__delay1;
    vlSelf->state_disc__DOT__normalizer__DOT__delay1 
        = vlSelf->start_trigger;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm_pp0_stage0 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm;
    vlSelf->state_disc__DOT__NN_startTrigger = vlSelf->state_disc__DOT__normalizer__DOT__startNN;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001 
        = ((IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_state1_pp0_stage0_iter0));
    vlSelf->state_disc__DOT__nn_model__DOT__nn_start 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__normalizer__DOT__NN_startTrigger 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter0 
        = vlSelf->state_disc__DOT__NN_startTrigger;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14 
        = (1U & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter14)) 
                 & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter13)) 
                    & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter12)) 
                       & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter11)) 
                          & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter10)) 
                             & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter9)) 
                                & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter8)) 
                                   & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter7)) 
                                      & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter6)) 
                                         & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter5)) 
                                            & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter4)) 
                                               & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter3)) 
                                                  & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter2)) 
                                                     & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter1)) 
                                                        & (~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)))))))))))))))));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_subdone 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp47 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp15 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp34 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001_ignoreCallOp49 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_01001 
        = vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001;
    vlSelf->ready = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
                     & (IData)(state_disc__DOT__nn_model__DOT____VdfgTmp_h65b60f1a__0));
    vlSelf->done_trigger = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
                            & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_block_pp0_stage0_11001)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_reset_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0 
        = ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_reg_pp0_iter15)) 
           & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0_0to14));
    vlSelf->state_disc__DOT__ready = vlSelf->ready;
    vlSelf->state_disc__DOT__nn_model__DOT__ready = vlSelf->ready;
    vlSelf->state_disc__DOT__done_trigger = vlSelf->done_trigger;
    vlSelf->state_disc__DOT__nn_model__DOT__done = vlSelf->done_trigger;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92__DOT__ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0_subdone 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
           & (IData)(state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done 
        = (((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_state1_pp0_stage0_iter0) 
            & ((~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_block_pp0_stage0)) 
               & (IData)(state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT____VdfgTmp_h1f434ff9__0))) 
           | ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter2)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0 
        = ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce) 
           & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_CS_fsm) 
              & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_enable_reg_pp0_iter1)));
    vlSelf->state_disc__DOT__nn_model__DOT__ap_enable_pp0 
        = (1U & (~ (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0)));
    vlSelf->idle = ((~ (IData)(vlSelf->state_disc__DOT__normalizer__DOT__startNN)) 
                    & ((IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_idle_pp0) 
                       & (IData)(vlSelf->state_disc__DOT__nn_model__DOT__ap_CS_fsm)));
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_ready 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__ap_done 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__ce0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_ce0;
    vlSelf->state_disc__DOT__idle = vlSelf->idle;
    vlSelf->state_disc__DOT__nn_model__DOT__idle = vlSelf->idle;
    vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U__DOT__ce0 
        = vlSelf->state_disc__DOT__nn_model__DOT__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__DOT__sigmoid_table1_U__DOT__ce0;
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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/Q3_Parameter/state_disc.v", 3, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/neelvora/Projects/Verilog/Q3_Parameter/state_disc.v", 3, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/neelvora/Projects/Verilog/Q3_Parameter/state_disc.v", 3, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->start_trigger & 0xfeU))) {
        Verilated::overWidthError("start_trigger");}
}
#endif  // VL_DEBUG
