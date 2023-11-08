// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_test);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test.configure(this, name(), "test", "test", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_test);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"ap_clk", &(TOP.ap_clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ap_done", &(TOP.ap_done), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ap_idle", &(TOP.ap_idle), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ap_ready", &(TOP.ap_ready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ap_rst", &(TOP.ap_rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ap_start", &(TOP.ap_start), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"input_2_V", &(TOP.input_2_V), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"input_2_V_ap_vld", &(TOP.input_2_V_ap_vld), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"layer7_out_0_V", &(TOP.layer7_out_0_V), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"layer7_out_0_V_ap_vld", &(TOP.layer7_out_0_V_ap_vld), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"DS", const_cast<void*>(static_cast<const void*>(&(TOP.test__DOT__DS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_test.varInsert(__Vfinal,"ap_ST_fsm_pp0_stage0", const_cast<void*>(static_cast<const void*>(&(TOP.test__DOT__ap_ST_fsm_pp0_stage0))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_test.varInsert(__Vfinal,"ap_clk", &(TOP.test__DOT__ap_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"ap_done", &(TOP.test__DOT__ap_done), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"ap_idle", &(TOP.test__DOT__ap_idle), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"ap_ready", &(TOP.test__DOT__ap_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"ap_rst", &(TOP.test__DOT__ap_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"ap_start", &(TOP.test__DOT__ap_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"input_2_V", &(TOP.test__DOT__input_2_V), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_test.varInsert(__Vfinal,"input_2_V_ap_vld", &(TOP.test__DOT__input_2_V_ap_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"layer7_out_0_V", &(TOP.test__DOT__layer7_out_0_V), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"layer7_out_0_V_ap_vld", &(TOP.test__DOT__layer7_out_0_V_ap_vld), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_10_1_fu_108_p1", &(TOP.test__DOT__r_V_10_1_fu_108_p1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_10_1_fu_108_p2", &(TOP.test__DOT__r_V_10_1_fu_108_p2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,25,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_1_cast_fu_1289_p1", &(TOP.test__DOT__r_V_1_cast_fu_1289_p1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_cast3_fu_1184_p1", &(TOP.test__DOT__r_V_cast3_fu_1184_p1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_s_fu_110_p1", &(TOP.test__DOT__r_V_s_fu_110_p1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"r_V_s_fu_110_p2", &(TOP.test__DOT__r_V_s_fu_110_p2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,25,0);
        __Vscope_test.varInsert(__Vfinal,"res_0_V_write_assign_fu_1431_p2", &(TOP.test__DOT__res_0_V_write_assign_fu_1431_p2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"tmp2_fu_1426_p2", &(TOP.test__DOT__tmp2_fu_1426_p2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"tmp_2_fu_1269_p4", &(TOP.test__DOT__tmp_2_fu_1269_p4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"tmp_33_1_reg_1603", &(TOP.test__DOT__tmp_33_1_reg_1603), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"tmp_3_reg_1568", &(TOP.test__DOT__tmp_3_reg_1568), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"tmp_fu_1180_p1", &(TOP.test__DOT__tmp_fu_1180_p1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"w0_0", &(TOP.test__DOT__w0_0), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_test.varInsert(__Vfinal,"w1_0", &(TOP.test__DOT__w1_0), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
    }
}
