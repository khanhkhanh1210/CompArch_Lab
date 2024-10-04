// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [1U]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [2U]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [3U]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [4U]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [5U]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [6U]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [7U]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [8U]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                               [9U]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                                [0xaU]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
        bufp->chgIData(oldp+48,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
        bufp->chgBit(oldp+49,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                            >> 1U) 
                                           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))))));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
        bufp->chgBit(oldp+51,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o));
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+57,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))),32);
        bufp->chgIData(oldp+58,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))),32);
        bufp->chgBit(oldp+59,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+61,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+64,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),16);
        bufp->chgSData(oldp+65,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),16);
        bufp->chgBit(oldp+66,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+68,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+71,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),4);
        bufp->chgCData(oldp+72,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),4);
        bufp->chgBit(oldp+73,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+75,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+78,((1U & vlSelf->top__DOT__singleCycle__DOT__rs1_data)));
        bufp->chgBit(oldp+79,((1U & vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
        bufp->chgBit(oldp+80,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+82,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__rs1_data) 
                                     & vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
        bufp->chgBit(oldp+83,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 1U))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 1U))));
        bufp->chgBit(oldp+85,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                        >> 1U)))));
        bufp->chgBit(oldp+86,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 1U))))));
        bufp->chgBit(oldp+87,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 1U)) & 
                                     (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 1U)))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 2U))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 2U))));
        bufp->chgBit(oldp+90,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                        >> 2U)))));
        bufp->chgBit(oldp+91,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 2U))))));
        bufp->chgBit(oldp+92,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 2U)) & 
                                     (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 2U)))));
        bufp->chgBit(oldp+93,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 3U))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 3U))));
        bufp->chgBit(oldp+95,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                        >> 3U)))));
        bufp->chgBit(oldp+96,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 3U))))));
        bufp->chgBit(oldp+97,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 3U)) & 
                                     (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 3U)))));
        bufp->chgCData(oldp+98,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 4U))),4);
        bufp->chgCData(oldp+99,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 4U))),4);
        bufp->chgBit(oldp+100,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+102,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+105,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 4U))));
        bufp->chgBit(oldp+107,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 4U)))));
        bufp->chgBit(oldp+108,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 4U))))));
        bufp->chgBit(oldp+109,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 4U)))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 5U))));
        bufp->chgBit(oldp+112,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 5U)))));
        bufp->chgBit(oldp+113,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 5U))))));
        bufp->chgBit(oldp+114,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 5U)))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 6U))));
        bufp->chgBit(oldp+117,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 6U)))));
        bufp->chgBit(oldp+118,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 6U))))));
        bufp->chgBit(oldp+119,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 6U)))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+121,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 7U))));
        bufp->chgBit(oldp+122,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 7U)))));
        bufp->chgBit(oldp+123,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 7U))))));
        bufp->chgBit(oldp+124,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 7U)))));
        bufp->chgCData(oldp+125,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 8U))),4);
        bufp->chgCData(oldp+126,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 8U))),4);
        bufp->chgBit(oldp+127,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+129,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+132,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 8U))));
        bufp->chgBit(oldp+134,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 8U)))));
        bufp->chgBit(oldp+135,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 8U))))));
        bufp->chgBit(oldp+136,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 8U)))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 9U))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 9U))));
        bufp->chgBit(oldp+139,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 9U)))));
        bufp->chgBit(oldp+140,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 9U))))));
        bufp->chgBit(oldp+141,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 9U)))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+144,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+145,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+146,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+147,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+148,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+149,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+150,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+151,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+152,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+153,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+154,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+155,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+156,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+158,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+159,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+160,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+161,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+162,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+163,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+165,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+166,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+167,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+168,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+169,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+170,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+171,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+172,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+173,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+174,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+176,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+177,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+178,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+179,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+180,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+181,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+183,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+185,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+186,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+187,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+188,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+190,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+191,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+192,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+193,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+194,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+195,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+196,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+197,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+198,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+199,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+200,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+201,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+202,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+203,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+204,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+205,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+206,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+207,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+208,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+209,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+210,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+211,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+212,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+213,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+214,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+215,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+216,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+217,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+219,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+220,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+221,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+222,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+223,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+224,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+226,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+227,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+228,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+229,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+232,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+233,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+234,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+237,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+238,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+239,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+240,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+241,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+242,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+244,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+245,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+246,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+247,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+249,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+250,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+251,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+254,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+255,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+256,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+259,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+260,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+261,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+264,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+265,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+266,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+267,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+268,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+269,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+271,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+272,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+273,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+274,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+276,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+277,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+278,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+281,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+282,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+283,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+286,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+287,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+288,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+289,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+290,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+291,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+292,(((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+293,(((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+294,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+295,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+296,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+297,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+299,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),16);
        bufp->chgSData(oldp+300,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),16);
        bufp->chgBit(oldp+301,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+302,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+303,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+304,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+305,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+306,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),4);
        bufp->chgCData(oldp+307,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),4);
        bufp->chgBit(oldp+308,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+310,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+313,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))));
        bufp->chgBit(oldp+314,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+315,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
        bufp->chgBit(oldp+316,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
        bufp->chgBit(oldp+317,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
        bufp->chgBit(oldp+318,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+319,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+320,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+321,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 1U) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+322,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+323,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+324,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+325,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+326,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 2U) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+327,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+328,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+329,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+330,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+331,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 3U) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+332,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 3U)))));
        bufp->chgCData(oldp+333,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+334,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+335,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+336,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+337,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+338,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+339,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+340,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+341,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+342,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+343,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 4U) & (~ 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+344,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+345,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+346,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+347,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+348,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 5U) & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+349,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+350,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+351,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+352,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+353,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 6U) & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+354,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+355,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+356,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+357,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+358,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 7U) & (~ 
                                                 (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+359,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 7U)))));
        bufp->chgCData(oldp+360,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+361,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+362,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+363,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+364,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+365,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+366,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+367,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+368,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+369,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+370,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 8U) & (~ 
                                                 (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+371,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+372,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 9U))));
        bufp->chgBit(oldp+373,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 9U))));
        bufp->chgBit(oldp+374,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+375,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 9U) & (~ 
                                                 (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+376,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+377,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+378,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+379,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+380,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xaU) & (~ 
                                                   (0x3fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+381,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+382,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+383,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+384,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+385,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xbU) & (~ 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+386,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+387,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+388,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+389,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+390,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+391,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+392,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+393,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+394,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+395,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+396,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+397,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xcU) & (~ 
                                                   (0xfU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+398,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+399,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+400,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+401,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+402,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xdU) & (~ 
                                                   (7U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+403,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+404,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+405,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+406,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+407,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xeU) & (~ 
                                                   (3U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+408,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+409,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+410,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+411,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+412,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xfU) & (~ 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+413,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+414,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+415,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+416,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+417,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+418,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+419,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+420,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+421,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+422,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+423,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+424,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+425,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+426,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+427,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+428,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+429,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+430,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+431,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+432,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+433,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+434,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+435,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+436,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+437,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+438,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+439,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+440,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+441,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+442,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+443,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+444,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+445,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+446,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+447,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+448,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+449,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+450,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+451,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+452,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+453,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+454,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+455,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+456,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+457,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+458,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+459,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+460,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+461,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+462,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+463,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+464,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+465,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+466,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+467,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+468,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+469,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+470,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+471,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+472,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+473,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+474,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+475,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+476,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+477,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+478,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+479,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+480,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+481,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+482,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+483,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+484,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+485,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+486,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+487,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+488,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+489,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+490,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+491,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+492,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+493,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+494,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+495,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+496,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+497,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+498,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+499,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+500,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+501,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+502,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+503,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+504,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+505,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+506,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+507,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+508,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+509,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+510,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+511,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+512,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+513,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+514,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+515,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+516,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+517,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+518,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+519,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+520,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+521,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+522,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+523,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+524,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+525,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+526,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+527,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+528,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+529,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                       >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                                 & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                    >> 1U))))));
        bufp->chgCData(oldp+530,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+531,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+532,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+533,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+534,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+535,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+536,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+537,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+538,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+539,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+540,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+541,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+542,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+543,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+544,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+545,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+546,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+547,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+548,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+549,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+550,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+551,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+552,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+553,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+554,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+555,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+556,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+557,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+558,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+559,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+560,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+561,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+562,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+563,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+564,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+565,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+566,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+567,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+568,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+569,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+570,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+571,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+572,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+573,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+574,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+575,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+576,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+577,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+578,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+579,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+580,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+581,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgSData(oldp+582,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
        bufp->chgBit(oldp+583,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
        bufp->chgCData(oldp+584,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+585,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__pstrb),4);
        bufp->chgCData(oldp+586,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+587,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+588,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+589,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
        bufp->chgBit(oldp+590,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
        bufp->chgBit(oldp+591,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+592,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 9U))));
        bufp->chgBit(oldp+593,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+594,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 8U))));
        bufp->chgBit(oldp+595,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 7U))));
        bufp->chgCData(oldp+596,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                          >> 3U))),4);
        bufp->chgBit(oldp+597,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 2U))));
        bufp->chgCData(oldp+598,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))),2);
        bufp->chgIData(oldp+599,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
        bufp->chgIData(oldp+600,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
        bufp->chgIData(oldp+601,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
        bufp->chgIData(oldp+602,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
        bufp->chgBit(oldp+603,((0U != vlSelf->top__DOT__singleCycle__DOT__alu_data)));
        bufp->chgCData(oldp+604,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
        bufp->chgBit(oldp+605,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t)) 
                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t) 
                                                  >> 1U))))))));
        bufp->chgBit(oldp+606,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s));
        bufp->chgQData(oldp+607,((0xffffffff00000000ULL 
                                  | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
        bufp->chgQData(oldp+609,(((0xffffffff00000000ULL 
                                   | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                  >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
        bufp->chgBit(oldp+611,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o));
        bufp->chgBit(oldp+612,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o));
        bufp->chgCData(oldp+613,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t),2);
        bufp->chgCData(oldp+614,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t),2);
        bufp->chgCData(oldp+615,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t),2);
        bufp->chgIData(oldp+616,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a))),32);
        bufp->chgIData(oldp+617,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
        bufp->chgBit(oldp+618,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+619,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+620,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+621,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+622,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+623,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__operand_a)),16);
        bufp->chgSData(oldp+624,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),16);
        bufp->chgBit(oldp+625,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+626,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+627,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+628,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+629,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+630,((0xfU & vlSelf->top__DOT__singleCycle__DOT__operand_a)),4);
        bufp->chgCData(oldp+631,((0xfU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),4);
        bufp->chgBit(oldp+632,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+633,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+634,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+635,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+636,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+637,((1U & vlSelf->top__DOT__singleCycle__DOT__operand_a)));
        bufp->chgBit(oldp+638,((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)));
        bufp->chgBit(oldp+639,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
        bufp->chgBit(oldp+640,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
        bufp->chgBit(oldp+641,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__operand_a) 
                                      & vlSelf->top__DOT__singleCycle__DOT__operand_b))));
        bufp->chgBit(oldp+642,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 1U))));
        bufp->chgBit(oldp+643,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 1U))));
        bufp->chgBit(oldp+644,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 1U)))));
        bufp->chgBit(oldp+645,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+646,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 1U)))));
        bufp->chgBit(oldp+647,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 2U))));
        bufp->chgBit(oldp+648,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 2U))));
        bufp->chgBit(oldp+649,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 2U)))));
        bufp->chgBit(oldp+650,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+651,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 2U)))));
        bufp->chgBit(oldp+652,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 3U))));
        bufp->chgBit(oldp+653,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 3U))));
        bufp->chgBit(oldp+654,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 3U)))));
        bufp->chgBit(oldp+655,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+656,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 3U)))));
        bufp->chgCData(oldp+657,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 4U))),4);
        bufp->chgCData(oldp+658,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+659,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+660,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+661,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+662,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+663,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+664,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 4U))));
        bufp->chgBit(oldp+665,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 4U))));
        bufp->chgBit(oldp+666,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 4U)))));
        bufp->chgBit(oldp+667,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+668,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 4U)))));
        bufp->chgBit(oldp+669,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 5U))));
        bufp->chgBit(oldp+670,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 5U))));
        bufp->chgBit(oldp+671,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 5U)))));
        bufp->chgBit(oldp+672,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+673,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 5U)))));
        bufp->chgBit(oldp+674,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 6U))));
        bufp->chgBit(oldp+675,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 6U))));
        bufp->chgBit(oldp+676,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 6U)))));
        bufp->chgBit(oldp+677,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+678,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 6U)))));
        bufp->chgBit(oldp+679,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 7U))));
        bufp->chgBit(oldp+680,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 7U))));
        bufp->chgBit(oldp+681,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 7U)))));
        bufp->chgBit(oldp+682,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+683,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 7U)))));
        bufp->chgCData(oldp+684,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 8U))),4);
        bufp->chgCData(oldp+685,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+686,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+687,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+688,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+689,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+690,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+691,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 8U))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 8U))));
        bufp->chgBit(oldp+693,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 8U)))));
        bufp->chgBit(oldp+694,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+695,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 8U)))));
        bufp->chgBit(oldp+696,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 9U))));
        bufp->chgBit(oldp+697,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 9U))));
        bufp->chgBit(oldp+698,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 9U)))));
        bufp->chgBit(oldp+699,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgBit(oldp+700,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 9U)))));
        bufp->chgBit(oldp+701,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+702,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+703,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+704,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+705,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+706,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+707,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+708,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+709,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+710,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+711,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+712,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+713,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+714,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+715,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+716,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+717,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+718,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+719,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+720,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+721,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+722,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+723,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+724,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+725,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+726,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+727,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+728,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+729,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+730,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+731,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+732,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+733,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+734,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+735,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+736,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+737,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+738,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+739,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+740,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+741,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+742,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+743,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+744,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+745,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+746,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+747,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+748,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+749,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+750,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+751,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+752,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+753,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+754,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+755,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+756,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+757,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+758,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+759,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+760,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+761,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+762,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+763,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+764,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+765,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+766,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+767,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+768,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+769,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+770,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+771,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+772,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+773,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+774,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+775,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+776,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+777,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+778,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+779,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+780,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+781,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+782,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+783,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+785,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+786,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+787,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+788,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+789,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+790,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+791,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+792,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+793,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+794,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+795,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+796,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+797,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+798,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+799,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+800,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+801,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+802,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+803,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+804,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+805,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+806,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+808,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+809,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+810,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+813,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+814,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+815,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+816,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+817,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+818,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+819,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+820,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+821,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+822,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+823,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+824,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+825,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+826,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+827,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+828,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+829,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+830,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+831,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+832,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+833,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+834,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+835,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+836,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+837,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+839,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+840,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+841,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+842,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+844,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+845,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+846,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+847,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+848,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+849,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+850,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+851,(((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+852,(((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+853,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+854,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+855,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+856,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+857,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+858,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))),16);
        bufp->chgSData(oldp+859,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))),16);
        bufp->chgBit(oldp+860,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+861,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+862,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+863,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+864,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+865,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))),4);
        bufp->chgCData(oldp+866,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))),4);
        bufp->chgBit(oldp+867,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+868,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+869,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+870,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+871,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+872,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))));
        bufp->chgBit(oldp+873,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
        bufp->chgBit(oldp+874,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))))));
        bufp->chgBit(oldp+875,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))))));
        bufp->chgBit(oldp+876,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))))));
        bufp->chgBit(oldp+877,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 1U))));
        bufp->chgBit(oldp+878,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 1U))));
        bufp->chgBit(oldp+879,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+880,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 1U) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+881,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+882,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 2U))));
        bufp->chgBit(oldp+883,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 2U))));
        bufp->chgBit(oldp+884,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+885,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 2U) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+886,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+887,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 3U))));
        bufp->chgBit(oldp+888,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 3U))));
        bufp->chgBit(oldp+889,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+890,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 3U) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+891,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 3U)))));
        bufp->chgCData(oldp+892,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+893,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+894,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+895,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+896,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+897,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+898,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+899,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 4U))));
        bufp->chgBit(oldp+900,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 4U))));
        bufp->chgBit(oldp+901,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+902,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 4U) & (~ 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+903,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+904,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 5U))));
        bufp->chgBit(oldp+905,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 5U))));
        bufp->chgBit(oldp+906,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+907,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 5U) & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+908,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+909,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 6U))));
        bufp->chgBit(oldp+910,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 6U))));
        bufp->chgBit(oldp+911,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+912,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 6U) & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+913,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+914,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 7U))));
        bufp->chgBit(oldp+915,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 7U))));
        bufp->chgBit(oldp+916,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+917,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 7U) & (~ 
                                                 (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+918,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 7U)))));
        bufp->chgCData(oldp+919,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+920,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+921,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+922,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+923,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+924,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+925,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+926,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 8U))));
        bufp->chgBit(oldp+927,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 8U))));
        bufp->chgBit(oldp+928,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+929,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 8U) & (~ 
                                                 (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+930,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+931,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 9U))));
        bufp->chgBit(oldp+932,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 9U))));
        bufp->chgBit(oldp+933,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+934,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 9U) & (~ 
                                                 (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+935,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+936,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+937,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+938,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+939,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xaU) & (~ 
                                                   (0x3fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+940,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+941,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+942,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+943,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+944,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xbU) & (~ 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+945,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+946,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+947,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+948,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+949,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+950,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+951,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+952,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+953,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+954,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+955,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+956,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xcU) & (~ 
                                                   (0xfU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+957,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+958,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+959,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+960,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+961,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xdU) & (~ 
                                                   (7U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+962,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+963,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+964,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+965,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+966,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xeU) & (~ 
                                                   (3U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+967,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+968,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+969,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+970,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+971,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xfU) & (~ 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+972,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+973,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+974,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+975,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+976,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+977,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+978,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+979,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+980,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+981,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+982,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+983,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+984,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+985,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+986,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+987,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+988,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+989,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+990,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+991,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+992,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+993,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+994,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+995,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+996,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+997,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+998,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+999,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+1000,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x12U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x12U))))));
        bufp->chgBit(oldp+1001,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x12U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1002,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1003,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1004,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1005,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x13U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x13U))))));
        bufp->chgBit(oldp+1006,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x13U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x13U)))));
        bufp->chgCData(oldp+1007,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1008,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x14U))),4);
        bufp->chgBit(oldp+1009,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1010,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1011,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1012,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1013,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1014,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1015,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1016,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1017,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x14U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x14U))))));
        bufp->chgBit(oldp+1018,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x14U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1019,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1020,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1021,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1022,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x15U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x15U))))));
        bufp->chgBit(oldp+1023,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x15U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1024,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1025,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1026,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1027,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x16U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x16U))))));
        bufp->chgBit(oldp+1028,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x16U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1029,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1030,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1031,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1032,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x17U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1033,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x17U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x17U)))));
        bufp->chgCData(oldp+1034,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1035,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x18U))),4);
        bufp->chgBit(oldp+1036,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1037,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1038,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1039,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1040,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1041,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1042,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1043,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1044,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x18U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1045,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x18U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1046,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1047,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1048,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1049,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x19U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1050,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x19U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1051,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1052,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1053,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1054,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1aU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1055,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1aU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1056,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1057,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1058,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1059,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1bU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1060,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1bU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1bU)))));
        bufp->chgCData(oldp+1061,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1062,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0x1cU)),4);
        bufp->chgBit(oldp+1063,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1064,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1065,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1066,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1067,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1068,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1069,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1070,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1071,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1cU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1072,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1cU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1073,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1074,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1075,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1076,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1dU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+1077,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1dU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1078,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1079,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1080,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1081,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1eU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1eU))))));
        bufp->chgBit(oldp+1082,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1eU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1083,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1084,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1085,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1086,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1fU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                           >> 0x1fU))))));
        bufp->chgBit(oldp+1087,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                           >> 0x1fU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1088,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+1089,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                        >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                                  & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t) 
                                                     >> 1U))))));
        bufp->chgCData(oldp+1090,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+1091,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgBit(oldp+1092,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+1093,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+1094,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+1095,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+1096,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+1097,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1098,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1099,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1100,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1101,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1102,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1103,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1104,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1105,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1106,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1107,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1108,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1109,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1110,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1111,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1112,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1113,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1114,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1115,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1116,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1117,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+1118,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+1119,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+1120,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+1121,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+1122,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1123,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1124,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1125,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1126,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1127,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1128,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1129,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1130,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1131,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1132,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1133,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1134,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1135,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1136,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1137,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1138,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1139,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1140,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1141,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgSData(oldp+1142,(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data),12);
        bufp->chgCData(oldp+1143,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel),2);
        bufp->chgIData(oldp+1144,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata),32);
        bufp->chgIData(oldp+1145,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata),32);
        bufp->chgBit(oldp+1146,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_dmem_st_en));
        bufp->chgBit(oldp+1147,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en));
        bufp->chgIData(oldp+1148,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data),32);
        bufp->chgSData(oldp+1149,((0xfffU & vlSelf->top__DOT__singleCycle__DOT__alu_data)),12);
        bufp->chgBit(oldp+1150,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))));
        bufp->chgIData(oldp+1151,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata),32);
    }
    bufp->chgIData(oldp+1152,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+1153,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+1154,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+1155,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+1156,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+1157,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+1158,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+1159,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+1160,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+1161,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+1162,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+1163,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+1164,(vlSelf->clk_i));
    bufp->chgBit(oldp+1165,(vlSelf->rst_ni));
    bufp->chgIData(oldp+1166,(((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                             >> 0xcU)))
                                ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                    : ((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                        ? (0xffffff00U 
                                           | (0xffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data))
                                        : (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)))
                                : ((1U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                 >> 0xcU)))
                                    ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                        ? (0xffffU 
                                           & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                        : ((0x8000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                            ? (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data))
                                            : (0xffffU 
                                               & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)))
                                    : ((2U == (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                        ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data
                                        : 0xcafecafeU)))),32);
    bufp->chgIData(oldp+1167,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                    ? 0U : ((IData)(4U) 
                                            + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))
                                : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                    ? ((0U == (3U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                        ? ((0x4000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__instr)
                                            ? (0xffU 
                                               & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                            : ((0x80U 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                                ? (0xffffff00U 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data))
                                                : (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)))
                                        : ((1U == (3U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0xcU)))
                                            ? ((0x4000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? (0xffffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                                : (
                                                   (0x8000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                                    ? 
                                                   (0xffff0000U 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xcU)))
                                                ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data
                                                : 0xcafecafeU)))
                                    : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
    bufp->chgIData(oldp+1168,(((0x500U == (0xffffU 
                                           & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                ? ((0x500U == (0xffffU 
                                               & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                    ? vlSelf->io_sw_i
                                    : 1U) : 0xcafecafeU)),32);
    bufp->chgIData(oldp+1169,(((0x500U == (0xffffU 
                                           & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                ? vlSelf->io_sw_i : 1U)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
