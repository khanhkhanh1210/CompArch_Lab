// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__singleCycle__DOT__bl_less;
        CData/*0:0*/ top__DOT__singleCycle__DOT__bl_equal;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t;
    };
    struct {
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t;
    };
    struct {
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t;
    };
    struct {
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t;
        CData/*1:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel;
        CData/*0:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_dmem_st_en;
        CData/*0:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en;
        CData/*3:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__pstrb;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*11:0*/ top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data;
        SData/*11:0*/ __Vchglast__TOP__top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__singleCycle__DOT__instr;
        IData/*31:0*/ top__DOT__singleCycle__DOT__imm;
        IData/*31:0*/ top__DOT__singleCycle__DOT__rs1_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__rs2_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__operand_a;
        IData/*31:0*/ top__DOT__singleCycle__DOT__operand_b;
        IData/*31:0*/ top__DOT__singleCycle__DOT__alu_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__PC_block__DOT__pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__singleCycle__DOT__imem_block__DOT__imem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__regfile_block__DOT__mem;
        VlUnpacked<IData/*31:0*/, 11> top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg;
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__dmem;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
