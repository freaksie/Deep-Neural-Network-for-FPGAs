// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_state_disc;
    VerilatedScope __Vscope_state_disc__nn_model;
    VerilatedScope __Vscope_state_disc__nn_model__call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73;
    VerilatedScope __Vscope_state_disc__nn_model__call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100;
    VerilatedScope __Vscope_state_disc__nn_model__grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92;
    VerilatedScope __Vscope_state_disc__nn_model__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67;
    VerilatedScope __Vscope_state_disc__nn_model__grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55;
    VerilatedScope __Vscope_state_disc__nn_model__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85;
    VerilatedScope __Vscope_state_disc__nn_model__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__sigmoid_table1_U;
    VerilatedScope __Vscope_state_disc__nn_model__grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85__sigmoid_table1_U__sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_sigmoid_tabbkb_rom_U;
    VerilatedScope __Vscope_state_disc__normalizer;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
