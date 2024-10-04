// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h2b17369e__0;
    // Body
    __Vtemp_h2b17369e__0[0U] = 0x2e73696dU;
    __Vtemp_h2b17369e__0[1U] = 0x64617461U;
    __Vtemp_h2b17369e__0[2U] = 0x6d656d2eU;
    __Vtemp_h2b17369e__0[3U] = 0x696e7374U;
    __Vtemp_h2b17369e__0[4U] = 0x6f72792fU;
    __Vtemp_h2b17369e__0[5U] = 0x2f6d656dU;
    __Vtemp_h2b17369e__0[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h2b17369e__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_hd2cf3943_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hb1841b4a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h7865b506_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [0xaU];
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [9U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [8U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [0U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [1U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [2U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [3U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [4U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [5U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [6U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
        [7U];
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc 
                    >> 2U))];
    __Vtableidx2 = (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0xcU));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__pstrb 
        = Vtop__ConstPool__TABLE_hd2cf3943_0[__Vtableidx2];
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc
          : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 1U))) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 2U))) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 3U))) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & (~ (0xfffU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x7ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 5U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x3ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 6U))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x1ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 7U))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & (~ (0xffU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x7fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 9U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x3fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xaU))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x1fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xbU))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & (~ (0xfU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (7U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xdU))) 
                                 << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (3U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xeU))) 
                                 << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (1U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xfU))) 
                                 << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 1U)) ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 2U)) ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 3U)) ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((0xfffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 4U)) ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((0x7ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 5U)) ^ (0x7ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 5U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((0x3ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 6U)) ^ (0x3ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 6U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((0x1ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 7U)) ^ (0x1ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 7U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((0xffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                 >> 8U)) ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((0x7fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 9U)) ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 9U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((0x3fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0xaU)) ^ (0x3fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xaU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((0x1fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0xbU)) ^ (0x1fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xbU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((0xfU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                >> 0xcU)) ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                              >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xdU)) ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xdU)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xeU)) ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xeU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xfU)) ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xfU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__imm = ((0x40U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 7U))))))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                >> 7U)))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U))))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U)))))));
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? vlSelf->top__DOT__singleCycle__DOT__imm
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                    & ((~ (7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                 >> 1U))) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                    & ((~ (3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                 >> 2U))) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                    & ((~ (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                 >> 3U))) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 4U) & (~ (0xfffU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                            >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 4U) & ((~ (0x7ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 5U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 4U) & ((~ (0x3ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 6U))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 4U) & ((~ (0x1ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 7U))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 8U) & (~ (0xffU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 8U) & ((~ (0x7fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                            >> 9U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 8U) & ((~ (0x3fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                            >> 0xaU))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 8U) & ((~ (0x1fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                            >> 0xbU))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0xcU) & (~ (0xfU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                            >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0xcU) & ((~ (7U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0xdU))) 
                                 << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0xcU) & ((~ (3U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0xeU))) 
                                 << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0xcU) & ((~ (1U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0xfU))) 
                                 << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x10U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x14U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x18U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x1cU) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                        ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 1U)) ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 2U)) ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 3U)) ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((0xfffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                  >> 4U)) ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((0x7ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 5U)) ^ (0x7ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                 >> 5U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((0x3ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 6U)) ^ (0x3ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                 >> 6U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((0x1ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 7U)) ^ (0x1ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                 >> 7U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((0xffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                 >> 8U)) ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((0x7fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                  >> 9U)) ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                >> 9U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((0x3fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                  >> 0xaU)) ^ (0x3fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xaU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((0x1fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                  >> 0xbU)) ^ (0x1fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xbU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((0xfU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                >> 0xcU)) ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                              >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 0xdU)) ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xdU)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 0xeU)) ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xeU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 0xfU)) ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xfU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t)) 
           | (3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t)) 
           | ((IData)((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t)) 
           | (3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t)) 
           | ((IData)((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                  >> 0x1fU) ? ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                >> 0x1fU) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t) 
                                             >> 1U))
                  : ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)) 
           | (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)) 
           | (2U & ((~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))) 
                    << 1U)));
    if ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
         >> 0x1fU)) {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                      >> 0x1fU) & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t) 
                                      >> 1U))));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) | (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t) 
                                          >> 1U))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                      >> 0x1fU) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = (3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t));
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                            >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                      & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                         >> 1U))))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s;
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
    }
    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data 
        = ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)
            ? ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)
                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? 0U : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                             ? ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? 0xd82U : 0U) : (
                                                   (4U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0xc82U
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x380U
                                                        : 0xb80U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0xb80U
                                                        : 0x380U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x180U
                                                        : 0x980U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x980U
                                                        : 0x180U)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                                        ? 0x180U
                                                        : 0x980U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                                        ? 0x980U
                                                        : 0x180U)))))))
                : 0U) : ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)
                          ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                              ? ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0x4d0U
                                           : ((0x4000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x448U
                                                    : 0x440U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x438U
                                                     : 0x430U)
                                                    : 0x428U))
                                               : ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x420U
                                                    : 0x418U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x410U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x408U
                                                     : 0x400U))))))
                              : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0U : 0x84U)))
                          : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                              ? ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0x580U
                                           : ((0x4000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x4c8U
                                                    : 0x4c0U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x4b8U
                                                     : 0x4b0U)
                                                    : 0x4a8U))
                                               : ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x4a0U
                                                    : 0x498U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x490U
                                                    : 0x480U)))))
                              : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0U : 0x481U)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t)) 
           | (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)) 
                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t)) 
           | (2U & ((~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t)) 
                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o))) 
                    << 1U)));
    if ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
         >> 0x1fU)) {
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                      >> 0x1fU) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t) 
                                   >> 1U)));
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                      >> 0x1fU) & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t) 
                                      >> 1U))));
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                         >> 0x1fU)) | (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t) 
                                          >> 1U))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t)));
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                      >> 0x1fU) | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t)));
        vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t)));
    }
    vlSelf->top__DOT__singleCycle__DOT__alu_data = 
        ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
              ? 0U : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                       ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                           ? 0U : vlSelf->top__DOT__singleCycle__DOT__operand_b)
                       : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                           ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                              & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                           : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                              | vlSelf->top__DOT__singleCycle__DOT__operand_b))))
          : ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
              ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                  ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                      ? ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          >> 0x1fU) ? (IData)(((0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                               >> (0x1fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                          : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                  : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t)) 
                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                      >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                                & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t) 
                                                   >> 1U))))))))
              : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                  ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                      ? (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s)
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                  : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                      ? ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         + vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    if ((0x800U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = vlSelf->top__DOT__singleCycle__DOT__alu_data;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                         >> 0xbU)))) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata 
        = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__dmem
        [(0x3ffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                    >> 2U))];
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata 
        = ((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                         >> 0xcU))) ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                        ? (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata)
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata)))
            : ((1U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 0xcU))) ? ((0x4000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__instr)
                                            ? (0xffffU 
                                               & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata)
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata)))
                : ((2U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0xcU))) ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata
                    : 0xcafecafeU)));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel 
        = (((((0U == (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                               >> 8U))) | (1U == (0xffU 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                     >> 8U)))) 
             | (2U == (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                >> 8U)))) | (3U == 
                                             (0xffU 
                                              & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                 >> 8U))))
            ? 0U : ((4U == (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                     >> 8U))) ? 1U : 
                    ((5U == (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                      >> 8U))) ? 2U
                      : 3U)));
    __Vtableidx1 = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data)) 
                    | (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_dmem_st_en 
        = Vtop__ConstPool__TABLE_hb1841b4a_0[__Vtableidx1];
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en 
        = Vtop__ConstPool__TABLE_h7865b506_0[__Vtableidx1];
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata 
        = ((IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en)
            ? 0xcafecafeU : (((((((((0x400U == (0xffffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__alu_data)) 
                                    | (0x410U == (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                                   | (0x420U == (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                                  | (0x430U == (0xffffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                                 | (0x440U == (0xffffU 
                                               & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                                | (0x450U == (0xffffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                               | (0x460U == (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__alu_data))) 
                              | (0x470U == (0xffffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__alu_data)))
                              ? ((0x400U == (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                  ? ((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)))
                                      ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                          ? (0xffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                             [0U]) : 
                                         (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [0U] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & 
                                           vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                           [0U]))) : 
                                     ((1U == (3U & 
                                              (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU)))
                                       ? ((0x4000U 
                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? ((0xff00U 
                                               & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                               [0U]) 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [0U]))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [0U])))
                                       : ((2U == (7U 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                     >> 0xcU)))
                                           ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                          [0U] : 0xcafecafeU)))
                                  : ((0x410U == (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                      ? ((0U == (3U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xcU)))
                                          ? ((0x4000U 
                                              & vlSelf->top__DOT__singleCycle__DOT__instr)
                                              ? (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [1U])
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                 [1U] 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [1U])))
                                          : ((1U == 
                                              (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 ((0xff00U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                   [1U]) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [1U]))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                  [1U] 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [1U])))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 
                                                 vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [1U]
                                                  : 0xcafecafeU)))
                                      : ((0x420U == 
                                          (0xffffU 
                                           & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                          ? ((0U == 
                                              (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                  [2U])
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                  [2U] 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [2U])))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0xff00U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [2U]) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [2U]))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                   [2U] 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [2U])))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                  [2U]
                                                   : 0xcafecafeU)))
                                          : ((0x430U 
                                              == (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                   [3U])
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                   [3U] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [3U])))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0xff00U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [3U]) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                       [3U]))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                    [3U] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                       [3U])))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                   [3U]
                                                    : 0xcafecafeU)))
                                              : ((0x440U 
                                                  == 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [4U])
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                    [4U] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                       [4U])))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((0xff00U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [4U]) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                        [4U]))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                     [4U] 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                        [4U])))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [4U]
                                                     : 0xcafecafeU)))
                                                  : 
                                                 ((0x450U 
                                                   == 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [5U])
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                     [5U] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                        [5U])))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((0xff00U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                       [5U]) 
                                                      | (0xffU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                         [5U]))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                      [5U] 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                         [5U])))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [5U]
                                                      : 0xcafecafeU)))
                                                   : 
                                                  ((0x460U 
                                                    == 
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [6U])
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                      [6U] 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                         [6U])))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((0xff00U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                        [6U]) 
                                                       | (0xffU 
                                                          & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [6U]))
                                                       : 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                       [6U] 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [6U])))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 
                                                      vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [6U]
                                                       : 0xcafecafeU)))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [7U])
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                      [7U] 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                         [7U])))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((0xff00U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                        [7U]) 
                                                       | (0xffU 
                                                          & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [7U]))
                                                       : 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                       [7U] 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [7U])))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 
                                                      vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [7U]
                                                       : 0xcafecafeU))))))))))
                              : ((0x480U == (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                  ? ((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)))
                                      ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                          ? (0xffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                             [8U]) : 
                                         (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                          [8U] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & 
                                           vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                           [8U]))) : 
                                     ((1U == (3U & 
                                              (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU)))
                                       ? ((0x4000U 
                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? ((0xff00U 
                                               & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                               [8U]) 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [8U]))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                              [8U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [8U])))
                                       : ((2U == (7U 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                     >> 0xcU)))
                                           ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                          [8U] : 0xcafecafeU)))
                                  : ((0x490U == (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                      ? ((0U == (3U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xcU)))
                                          ? ((0x4000U 
                                              & vlSelf->top__DOT__singleCycle__DOT__instr)
                                              ? (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [9U])
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                 [9U] 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [9U])))
                                          : ((1U == 
                                              (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 ((0xff00U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                   [9U]) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [9U]))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                  [9U] 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [9U])))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 
                                                 vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                 [9U]
                                                  : 0xcafecafeU)))
                                      : ((0x4a0U == 
                                          (0xffffU 
                                           & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                          ? ((0U == 
                                              (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                  [0xaU])
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                  [0xaU] 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                     [0xaU])))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0xff00U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                    [0xaU]) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [0xaU]))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                                   [0xaU] 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                      [0xaU])))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                                  [0xaU]
                                                   : 0xcafecafeU)))
                                          : 0xcafecafeU)))));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel))
            ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel))
                ? 1U : ((0x500U == (0xffffU & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                         ? ((0x500U == (0xffffU & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                             ? vlSelf->io_sw_i : 1U)
                         : 0xcafecafeU)) : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel))
                                             ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata
                                             : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__bl_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__bl_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_dmem_st_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__pstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
