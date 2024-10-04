// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1153,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1154,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1155,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1156,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1157,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1158,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1159,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1160,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1161,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1162,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1163,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1164,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1153,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1154,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1155,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1156,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1157,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1158,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1159,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1160,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1161,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1162,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1163,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1164,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBus(c+1171,"BYTE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1172,"HWORD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1173,"WORD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1171,"DATA_MEMORY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1172,"OUT_PERIPHERALS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1173,"IN_PERIPHERALS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1174,"RESERVED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1153,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1154,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1155,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1156,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1157,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1158,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1159,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1160,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1161,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1162,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1163,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1164,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+590,"bl_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+591,"bl_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+592,"bl_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+593,"bl_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+594,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+595,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+596,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+597,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+598,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+599,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1167,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1168,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BRC_block ");
    tracep->declBus(c+47,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+593,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+53,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+47,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+53,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+47,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+60,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+65,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+66,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+67,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+72,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+73,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+74,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+79,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+84,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+89,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+94,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+99,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+100,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+101,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+104,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+106,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+111,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+116,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+121,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+126,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+127,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+128,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+131,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+133,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+138,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+143,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+148,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+153,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+154,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+155,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+160,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+165,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+170,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+175,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+180,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+181,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+182,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+187,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+188,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+189,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+192,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+194,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+199,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+204,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+209,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+214,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+215,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+216,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+219,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+221,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+226,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+231,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+236,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+241,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+242,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+243,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+246,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+248,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+253,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+258,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+263,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+268,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+269,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+270,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+275,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+280,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+285,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+290,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+58,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+295,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+300,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+301,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+302,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+305,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+306,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+307,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+308,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+309,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+312,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+313,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+314,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+319,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+324,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+329,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+334,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+335,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+336,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+339,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+340,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+341,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+346,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+351,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+356,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+361,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+362,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+363,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+367,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+368,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+373,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+378,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+383,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+388,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+389,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+390,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+395,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+400,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+405,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+410,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+415,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+416,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+417,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+420,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+421,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+422,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+423,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+424,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+427,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+428,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+429,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+434,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+439,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+444,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+449,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+450,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+451,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+454,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+455,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+456,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+461,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+466,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+471,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+476,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+477,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+478,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+481,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+482,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+483,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+488,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+493,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+498,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+503,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+504,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+505,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+508,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+509,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+510,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+515,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+520,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+525,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+47,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+52,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+531,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+532,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+65,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+66,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+533,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+536,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+537,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+72,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+73,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+538,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+541,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+542,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+79,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+84,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+89,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+94,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+99,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+100,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+543,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+546,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+547,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+106,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+111,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+116,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+121,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+126,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+127,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+548,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+551,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+552,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+133,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+138,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+143,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+148,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+153,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+154,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+553,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+556,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+557,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+160,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+165,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+170,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+175,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+180,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+181,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+558,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+561,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+562,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+187,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+188,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+563,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+566,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+567,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+194,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+199,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+204,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+209,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+214,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+215,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+568,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+571,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+572,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+221,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+226,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+231,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+236,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+241,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+242,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+573,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+576,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+577,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+248,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+253,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+258,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+263,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+268,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+269,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+578,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+581,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+582,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+275,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+280,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+285,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+290,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("PC_block ");
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+602,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+603,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+1175,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+600,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+601,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"A_ADD", "A_SUB", "A_SLL", "A_SLT", "A_SLTU", 
                                "A_XOR", "A_SRL", "A_SRA", 
                                "A_OR", "A_AND", "A_LUI"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(1, "mypkg::alu_op_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+597,"alu_op_i",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+602,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+604,"bru_exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+605,"shift_number",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+606,"blarger_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+607,"blarger_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+608,"alu_data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,"alu_data_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->pushNamePrefix("compare32s_1 ");
    tracep->declBus(c+600,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+601,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+612,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+614,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+615,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+616,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+617,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+600,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+601,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+619,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+622,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+623,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+624,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+625,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+626,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+629,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+630,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+631,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+632,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+633,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+636,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+637,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+638,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+643,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+648,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+653,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+658,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+659,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+660,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+663,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+664,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+665,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+670,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+675,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+680,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+685,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+686,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+687,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+690,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+691,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+692,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+697,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+702,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+704,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+707,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+712,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+713,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+714,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+717,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+718,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+719,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+724,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+729,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+734,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+739,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+740,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+741,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+744,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+745,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+746,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+747,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+748,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+751,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+752,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+753,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+758,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+763,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+768,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+773,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+774,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+775,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+778,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+779,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+785,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+790,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+795,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+800,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+801,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+802,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+806,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+812,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+817,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+822,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+827,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+828,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+829,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+832,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+833,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+839,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+844,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+849,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+617,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+618,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+854,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+857,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+858,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+859,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+860,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+861,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+864,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+865,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+866,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+867,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+868,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+871,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+872,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+873,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+877,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+878,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+879,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+880,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+883,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+885,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+888,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+890,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+893,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+894,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+895,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+898,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+899,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+900,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+902,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+905,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+906,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+907,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+910,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+911,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+912,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+915,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+917,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+920,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+921,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+922,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+925,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+926,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+927,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+932,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+933,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+937,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+938,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+939,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+942,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+944,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+947,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+948,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+949,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+952,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+953,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+954,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+959,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+960,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+962,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+964,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+965,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+966,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+969,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+971,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+974,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+975,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+976,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+979,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+980,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+981,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+982,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+983,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+986,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+987,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+988,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+989,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+990,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+992,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+993,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+995,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+996,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+998,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+999,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1003,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+1008,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1009,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1010,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1013,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1014,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1015,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1020,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1022,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1025,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1026,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1027,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1030,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1031,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1032,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+1035,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1036,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1037,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1040,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1041,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1042,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1043,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1047,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1050,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1052,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1053,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1054,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1055,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1056,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1057,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+1062,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1063,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1064,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1067,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1068,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1069,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1070,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1071,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1072,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1073,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1074,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1075,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1076,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1077,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1079,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1080,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1081,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1082,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1083,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1084,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1085,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1086,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1087,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+600,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+601,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1089,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1091,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1092,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+624,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+625,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1093,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1096,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1097,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+631,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+632,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1098,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1099,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1101,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1102,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+638,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+643,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+648,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+653,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+658,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+659,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1103,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1104,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1105,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1106,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1107,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+665,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+670,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+675,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+680,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+685,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+686,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1108,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1109,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1110,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1111,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1112,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+692,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+697,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+702,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+704,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+707,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+712,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+713,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1113,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1114,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1115,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1116,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1117,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+719,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+724,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+729,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+734,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+739,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+740,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1118,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1119,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1120,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1121,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1122,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+746,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+747,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1123,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1124,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1125,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1126,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1127,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+753,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+758,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+763,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+768,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+773,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+774,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1128,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1129,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1130,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1131,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1132,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+785,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+790,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+795,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+800,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+801,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1133,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1134,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1135,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1136,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1137,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+812,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+817,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+822,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+827,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+828,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1138,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1139,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1140,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1141,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1142,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+839,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+844,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+849,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("ctr_unit_block ");
    tracep->declBus(c+1176,"R_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1177,"I_FORMAT_CALCULATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1178,"I_FORMAT_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1179,"S_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1180,"B_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1181,"U_FORMAT_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1182,"U_FORMAT_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1183,"J_FORMAT_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1184,"J_FORMAT_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1185,"ADD_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1186,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1187,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1188,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1189,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1190,"SRL_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1191,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1192,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1185,"ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1187,"SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1188,"SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1189,"XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1191,"ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1192,"ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1186,"SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1190,"SRLI_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1185,"BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1186,"BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1189,"BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1190,"BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1191,"BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1192,"BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+44,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+590,"bl_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"bl_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"bl_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"bl_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+597,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+598,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+599,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1143,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_block ");
    tracep->declBus(c+1193,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+583,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+44,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen_block ");
    tracep->declBus(c+1177,"I_FORMAT_CALCULATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1178,"I_FORMAT_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1179,"S_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1180,"B_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1181,"U_FORMAT_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1182,"U_FORMAT_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1183,"J_FORMAT_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1184,"J_FORMAT_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+44,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_block ");
    tracep->declBus(c+1171,"BYTE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1172,"HWORD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1173,"WORD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1171,"DATA_MEMORY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1172,"OUT_PERIPHERALS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1173,"IN_PERIPHERALS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1174,"RESERVED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+602,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+598,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1153,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+585,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1167,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1154,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1155,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1156,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1157,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1158,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1159,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1160,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1161,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1162,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1163,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1164,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1144,"addr_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1145,"dmem_mux_lddata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1146,"oper_mux_lddata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1169,"iper_mux_lddata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1147,"dmux_dmem_st_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1148,"dmux_oper_st_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1170,"input_per_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("output_per_reg");
    tracep->declBus(c+1,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"[2]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"[3]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"[4]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"[5]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"[6]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"[7]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"[8]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"[9]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"[10]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+586,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1149,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("data_memory_inst ");
    tracep->declBus(c+1194,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1150,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+1195,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1195,"psel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1147,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+586,"pstrb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+585,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1145,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1195,"pready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1152,"prdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux_operand_a ");
    tracep->declBus(c+47,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+595,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+600,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_b ");
    tracep->declBus(c+48,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+596,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+601,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_block ");
    tracep->declBus(c+1175,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1196,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1165,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+587,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+588,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+589,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1168,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+594,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_sel_block ");
    tracep->declBus(c+602,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1167,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1197,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+599,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1168,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [0U]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [1U]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [2U]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [3U]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [4U]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [5U]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [6U]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [7U]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                            [8U]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                             [9U]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_per_reg
                             [0xaU]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+49,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
    bufp->fullBit(oldp+50,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                         >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                                   & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                      >> 1U))))))));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
    bufp->fullBit(oldp+52,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o));
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+58,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))),32);
    bufp->fullIData(oldp+59,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))),32);
    bufp->fullBit(oldp+60,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+62,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+65,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),16);
    bufp->fullSData(oldp+66,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),16);
    bufp->fullBit(oldp+67,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+69,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+72,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),4);
    bufp->fullCData(oldp+73,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),4);
    bufp->fullBit(oldp+74,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+76,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+79,((1U & vlSelf->top__DOT__singleCycle__DOT__rs1_data)));
    bufp->fullBit(oldp+80,((1U & vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
    bufp->fullBit(oldp+81,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+83,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__rs1_data) 
                                  & vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    bufp->fullBit(oldp+84,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 1U))));
    bufp->fullBit(oldp+85,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 1U))));
    bufp->fullBit(oldp+86,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                     >> 1U)))));
    bufp->fullBit(oldp+87,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                >> 1U))))));
    bufp->fullBit(oldp+88,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 1U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 1U)))));
    bufp->fullBit(oldp+89,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 2U))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 2U))));
    bufp->fullBit(oldp+91,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                     >> 2U)))));
    bufp->fullBit(oldp+92,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                >> 2U))))));
    bufp->fullBit(oldp+93,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 2U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 2U)))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 3U))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 3U))));
    bufp->fullBit(oldp+96,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                     >> 3U)))));
    bufp->fullBit(oldp+97,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                >> 3U))))));
    bufp->fullBit(oldp+98,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 3U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 3U)))));
    bufp->fullCData(oldp+99,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 4U))),4);
    bufp->fullCData(oldp+100,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 4U))),4);
    bufp->fullBit(oldp+101,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+103,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 4U))));
    bufp->fullBit(oldp+108,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 4U)))));
    bufp->fullBit(oldp+109,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 4U))))));
    bufp->fullBit(oldp+110,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 4U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 4U)))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U))));
    bufp->fullBit(oldp+113,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 5U)))));
    bufp->fullBit(oldp+114,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 5U))))));
    bufp->fullBit(oldp+115,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 5U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 5U)))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U))));
    bufp->fullBit(oldp+118,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 6U)))));
    bufp->fullBit(oldp+119,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 6U))))));
    bufp->fullBit(oldp+120,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 6U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 6U)))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U))));
    bufp->fullBit(oldp+123,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 7U)))));
    bufp->fullBit(oldp+124,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 7U))))));
    bufp->fullBit(oldp+125,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 7U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 7U)))));
    bufp->fullCData(oldp+126,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U))),4);
    bufp->fullCData(oldp+127,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 8U))),4);
    bufp->fullBit(oldp+128,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+130,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 8U))));
    bufp->fullBit(oldp+135,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 8U)))));
    bufp->fullBit(oldp+136,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 8U))))));
    bufp->fullBit(oldp+137,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 8U)))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 9U))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U))));
    bufp->fullBit(oldp+140,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 9U)))));
    bufp->fullBit(oldp+141,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 9U))))));
    bufp->fullBit(oldp+142,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 9U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 9U)))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+145,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+146,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+147,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+148,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+149,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+150,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+151,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+152,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+153,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+154,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+155,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+157,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+160,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+162,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+163,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+164,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+167,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+168,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+169,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+172,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+173,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+174,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+175,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+177,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+178,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+179,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+180,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+181,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+182,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+184,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+186,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+187,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+188,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+189,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+191,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+194,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+195,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+196,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+197,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+198,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+199,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+200,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+201,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+202,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+203,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+204,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+206,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+207,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+208,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+209,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+211,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+212,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+213,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+214,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+215,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+216,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+218,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+222,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+223,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+224,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+225,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+227,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+228,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+229,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+230,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+231,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+233,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+234,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+235,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+238,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+239,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+240,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+241,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+242,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+243,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+245,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+248,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+249,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+250,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+251,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+252,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+253,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+254,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+255,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+256,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+257,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+260,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+261,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+262,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+263,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+265,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+266,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+267,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+268,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+269,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+270,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+272,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+274,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+275,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+276,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+277,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+278,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+279,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+281,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+282,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+283,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+284,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+286,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+287,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+288,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+289,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+290,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+291,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+292,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+293,(((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+294,(((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                 >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+295,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+297,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+298,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+300,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),16);
    bufp->fullSData(oldp+301,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),16);
    bufp->fullBit(oldp+302,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+304,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+305,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+306,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+307,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),4);
    bufp->fullCData(oldp+308,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),4);
    bufp->fullBit(oldp+309,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+311,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+312,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+314,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))));
    bufp->fullBit(oldp+315,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+316,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
    bufp->fullBit(oldp+317,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
    bufp->fullBit(oldp+318,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    bufp->fullBit(oldp+319,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+320,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+321,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+322,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 1U) & (~ (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 1U)))))));
    bufp->fullBit(oldp+323,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+324,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+325,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+326,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+327,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 2U) & (~ (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+328,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+329,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+330,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+331,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+332,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 3U) & (~ (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 3U)))))));
    bufp->fullBit(oldp+333,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 3U)))));
    bufp->fullCData(oldp+334,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+335,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+336,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+338,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+340,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+341,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+342,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+343,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+344,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 4U) & (~ (0xfffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 4U)))))));
    bufp->fullBit(oldp+345,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+346,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+347,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+348,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+349,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 5U) & (~ (0x7ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 5U)))))));
    bufp->fullBit(oldp+350,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+351,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+352,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+353,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+354,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 6U) & (~ (0x3ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 6U)))))));
    bufp->fullBit(oldp+355,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+356,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+357,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+358,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+359,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 7U) & (~ (0x1ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+360,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 7U)))));
    bufp->fullCData(oldp+361,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+362,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+363,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+365,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+366,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+367,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+368,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+369,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+370,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+371,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 8U) & (~ (0xffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 8U)))))));
    bufp->fullBit(oldp+372,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+373,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 9U))));
    bufp->fullBit(oldp+374,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 9U))));
    bufp->fullBit(oldp+375,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+376,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 9U) & (~ (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 9U)))))));
    bufp->fullBit(oldp+377,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+378,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+379,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+380,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+381,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xaU) & (~ (0x3fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+382,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+383,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+384,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+385,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+386,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xbU) & (~ (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+387,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+388,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+389,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+390,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+391,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+392,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+393,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+394,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+395,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+396,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+397,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+398,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xcU) & (~ (0xfU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xcU)))))));
    bufp->fullBit(oldp+399,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+400,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+401,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+402,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+403,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xdU) & (~ (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+404,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+405,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+406,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+407,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+408,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xeU) & (~ (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xeU)))))));
    bufp->fullBit(oldp+409,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+410,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+411,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+412,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+413,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xfU) & (~ (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+414,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xfU)))));
    bufp->fullSData(oldp+415,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+416,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+417,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+418,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+419,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+420,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+421,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+422,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+423,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+424,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+426,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+427,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+428,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+429,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+430,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+431,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+432,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+433,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+434,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+435,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+436,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+437,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+438,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+439,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+440,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+441,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+442,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+443,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+444,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+445,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+446,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+447,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+448,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+449,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+450,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+451,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+452,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+453,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+454,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+455,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+456,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+457,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+458,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+459,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+460,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+461,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+462,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+463,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+464,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+465,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+466,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+467,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+468,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+469,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+470,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+471,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+472,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+473,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+474,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+475,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+476,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+477,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+478,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+479,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+480,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+481,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+482,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+483,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+484,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+485,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+486,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+487,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+488,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+489,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+490,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+491,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+492,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+493,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+494,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+495,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+496,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+497,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+498,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+499,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+500,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+501,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+502,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+503,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+504,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+505,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+506,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+507,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+508,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+509,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+510,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+511,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+512,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+513,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+514,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+515,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+516,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+517,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+518,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+519,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+520,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+521,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+522,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+523,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+524,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+525,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+526,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+527,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+528,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+529,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+530,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                    >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))));
    bufp->fullCData(oldp+531,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+532,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+533,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+534,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+535,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+536,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+537,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+538,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+539,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+540,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+541,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+542,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+543,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+545,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+546,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+547,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+548,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+549,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+550,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+551,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+552,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+553,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+554,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+555,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+556,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+557,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+558,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+559,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+560,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+561,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+562,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+563,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+564,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+565,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+566,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+567,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+568,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+569,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+570,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+571,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+572,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+573,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+574,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+575,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+576,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+577,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+578,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+579,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+580,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+581,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+582,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullSData(oldp+583,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
    bufp->fullBit(oldp+584,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
    bufp->fullCData(oldp+585,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+586,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__pstrb),4);
    bufp->fullCData(oldp+587,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+588,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+589,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 7U))),5);
    bufp->fullBit(oldp+590,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
    bufp->fullBit(oldp+591,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
    bufp->fullBit(oldp+592,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 9U))));
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 8U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 7U))));
    bufp->fullCData(oldp+597,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                       >> 3U))),4);
    bufp->fullBit(oldp+598,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                   >> 2U))));
    bufp->fullCData(oldp+599,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))),2);
    bufp->fullIData(oldp+600,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+601,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+602,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+603,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
    bufp->fullBit(oldp+604,((0U != vlSelf->top__DOT__singleCycle__DOT__alu_data)));
    bufp->fullCData(oldp+605,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
    bufp->fullBit(oldp+606,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t)) 
                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                          >> 1U) | 
                                         ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                          & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+607,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__blarger_s));
    bufp->fullQData(oldp+608,((0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
    bufp->fullQData(oldp+610,(((0xffffffff00000000ULL 
                                | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                               >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
    bufp->fullBit(oldp+612,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__equal_o));
    bufp->fullBit(oldp+613,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__alarger_o));
    bufp->fullCData(oldp+614,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__eq_t),2);
    bufp->fullCData(oldp+615,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__al_t),2);
    bufp->fullCData(oldp+616,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__bl_t),2);
    bufp->fullIData(oldp+617,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a))),32);
    bufp->fullIData(oldp+618,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
    bufp->fullBit(oldp+619,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+620,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+621,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+622,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+623,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+624,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__operand_a)),16);
    bufp->fullSData(oldp+625,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),16);
    bufp->fullBit(oldp+626,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+627,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+628,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+629,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+630,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+631,((0xfU & vlSelf->top__DOT__singleCycle__DOT__operand_a)),4);
    bufp->fullCData(oldp+632,((0xfU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),4);
    bufp->fullBit(oldp+633,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+634,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+635,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+636,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+637,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+638,((1U & vlSelf->top__DOT__singleCycle__DOT__operand_a)));
    bufp->fullBit(oldp+639,((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)));
    bufp->fullBit(oldp+640,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    bufp->fullBit(oldp+641,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    bufp->fullBit(oldp+642,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__operand_a) 
                                   & vlSelf->top__DOT__singleCycle__DOT__operand_b))));
    bufp->fullBit(oldp+643,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+644,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 1U))));
    bufp->fullBit(oldp+645,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 1U)))));
    bufp->fullBit(oldp+646,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+647,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 1U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 1U)))));
    bufp->fullBit(oldp+648,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+649,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 2U))));
    bufp->fullBit(oldp+650,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 2U)))));
    bufp->fullBit(oldp+651,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+652,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 2U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 2U)))));
    bufp->fullBit(oldp+653,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+654,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 3U))));
    bufp->fullBit(oldp+655,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 3U)))));
    bufp->fullBit(oldp+656,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+657,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 3U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 3U)))));
    bufp->fullCData(oldp+658,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 4U))),4);
    bufp->fullCData(oldp+659,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 4U))),4);
    bufp->fullBit(oldp+660,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+661,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+662,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+663,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+664,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+665,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+666,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 4U))));
    bufp->fullBit(oldp+667,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 4U)))));
    bufp->fullBit(oldp+668,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+669,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 4U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 4U)))));
    bufp->fullBit(oldp+670,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+671,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 5U))));
    bufp->fullBit(oldp+672,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 5U)))));
    bufp->fullBit(oldp+673,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+674,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 5U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 5U)))));
    bufp->fullBit(oldp+675,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+676,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 6U))));
    bufp->fullBit(oldp+677,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 6U)))));
    bufp->fullBit(oldp+678,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+679,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 6U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 6U)))));
    bufp->fullBit(oldp+680,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+681,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 7U))));
    bufp->fullBit(oldp+682,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 7U)))));
    bufp->fullBit(oldp+683,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+684,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 7U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 7U)))));
    bufp->fullCData(oldp+685,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 8U))),4);
    bufp->fullCData(oldp+686,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 8U))),4);
    bufp->fullBit(oldp+687,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+688,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+689,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+690,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+691,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+692,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+693,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 8U))));
    bufp->fullBit(oldp+694,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 8U)))));
    bufp->fullBit(oldp+695,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+696,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 8U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 8U)))));
    bufp->fullBit(oldp+697,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+698,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 9U))));
    bufp->fullBit(oldp+699,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 9U)))));
    bufp->fullBit(oldp+700,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+701,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 9U)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 9U)))));
    bufp->fullBit(oldp+702,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+703,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+704,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+705,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+706,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+707,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+708,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+709,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+710,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+711,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+712,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+713,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+714,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+715,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+716,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+717,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+718,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+719,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+720,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+721,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+722,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+723,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+724,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+725,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+726,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+727,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+728,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+729,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+730,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+731,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+732,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+733,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+734,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+735,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+736,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+737,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+738,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+739,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+740,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+741,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+742,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+743,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+744,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+745,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+746,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+747,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+748,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+749,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+750,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+751,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+752,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+753,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+754,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+755,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+756,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+757,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+758,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+759,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+760,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+761,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+762,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+763,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+764,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+765,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+766,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+767,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+768,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+769,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+770,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+771,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+772,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+773,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+774,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+775,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+776,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+777,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+778,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+779,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+780,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+781,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+782,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+783,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+784,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+785,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+786,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+787,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+788,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+789,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+790,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+791,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+792,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+793,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+794,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+795,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+796,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+797,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+798,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+799,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+800,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+801,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+802,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+803,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+804,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+805,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+806,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+807,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+808,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+809,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+810,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+811,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+814,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+815,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+816,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+817,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+818,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+819,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+820,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+821,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+822,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+823,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+824,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+825,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+826,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+827,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+828,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+829,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+830,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+831,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+832,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+833,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+834,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+835,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+836,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+837,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+838,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+839,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+840,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+841,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+842,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+843,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+844,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+845,((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+846,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+847,((1U & ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+848,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+849,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+850,((vlSelf->top__DOT__singleCycle__DOT__operand_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+851,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+852,(((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+853,(((~ (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                 >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+854,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+855,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+856,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+857,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+858,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+859,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))),16);
    bufp->fullSData(oldp+860,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))),16);
    bufp->fullBit(oldp+861,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+862,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+863,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+864,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+865,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+866,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))),4);
    bufp->fullCData(oldp+867,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))),4);
    bufp->fullBit(oldp+868,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+869,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+870,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+871,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+872,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+873,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)))));
    bufp->fullBit(oldp+874,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    bufp->fullBit(oldp+875,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))))));
    bufp->fullBit(oldp+876,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))))));
    bufp->fullBit(oldp+877,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))))));
    bufp->fullBit(oldp+878,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 1U))));
    bufp->fullBit(oldp+879,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 1U))));
    bufp->fullBit(oldp+880,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+881,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 1U) & (~ (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 1U)))))));
    bufp->fullBit(oldp+882,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+883,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 2U))));
    bufp->fullBit(oldp+884,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 2U))));
    bufp->fullBit(oldp+885,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+886,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 2U) & (~ (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+887,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+888,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 3U))));
    bufp->fullBit(oldp+889,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 3U))));
    bufp->fullBit(oldp+890,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+891,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 3U) & (~ (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 3U)))))));
    bufp->fullBit(oldp+892,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 3U)))));
    bufp->fullCData(oldp+893,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+894,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+895,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+896,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+897,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+898,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+899,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+900,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 4U))));
    bufp->fullBit(oldp+901,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 4U))));
    bufp->fullBit(oldp+902,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+903,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 4U) & (~ (0xfffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 4U)))))));
    bufp->fullBit(oldp+904,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+905,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 5U))));
    bufp->fullBit(oldp+906,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 5U))));
    bufp->fullBit(oldp+907,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+908,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 5U) & (~ (0x7ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 5U)))))));
    bufp->fullBit(oldp+909,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+910,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 6U))));
    bufp->fullBit(oldp+911,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 6U))));
    bufp->fullBit(oldp+912,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+913,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 6U) & (~ (0x3ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 6U)))))));
    bufp->fullBit(oldp+914,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+915,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 7U))));
    bufp->fullBit(oldp+916,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 7U))));
    bufp->fullBit(oldp+917,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+918,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 7U) & (~ (0x1ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+919,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 7U)))));
    bufp->fullCData(oldp+920,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+921,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+922,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+923,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+924,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+925,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+926,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+927,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 8U))));
    bufp->fullBit(oldp+928,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 8U))));
    bufp->fullBit(oldp+929,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+930,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 8U) & (~ (0xffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 8U)))))));
    bufp->fullBit(oldp+931,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+932,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 9U))));
    bufp->fullBit(oldp+933,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 9U))));
    bufp->fullBit(oldp+934,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+935,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 9U) & (~ (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                    >> 9U)))))));
    bufp->fullBit(oldp+936,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+937,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+938,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+939,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+940,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xaU) & (~ (0x3fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+941,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+942,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+943,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+944,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+945,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xbU) & (~ (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+946,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+947,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+948,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+949,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+950,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+951,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+952,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+953,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+954,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+955,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+956,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+957,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xcU) & (~ (0xfU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xcU)))))));
    bufp->fullBit(oldp+958,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+959,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+960,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+961,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+962,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xdU) & (~ (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+963,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+964,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+965,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+966,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+967,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xeU) & (~ (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xeU)))))));
    bufp->fullBit(oldp+968,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+969,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+970,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+971,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+972,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0xfU) & (~ (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+973,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                      >> 0xfU)))));
    bufp->fullSData(oldp+974,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+975,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+976,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+977,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+978,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+979,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+980,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+981,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+982,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+983,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+984,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+985,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+986,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+987,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+988,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+989,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+990,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+991,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+992,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+993,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+994,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+995,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+996,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+997,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+998,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+999,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+1000,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x12U)))));
    bufp->fullBit(oldp+1001,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x12U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x12U))))));
    bufp->fullBit(oldp+1002,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x12U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x12U)))));
    bufp->fullBit(oldp+1003,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1004,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1005,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x13U)))));
    bufp->fullBit(oldp+1006,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x13U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+1007,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x13U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x13U)))));
    bufp->fullCData(oldp+1008,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1009,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                        >> 0x14U))),4);
    bufp->fullBit(oldp+1010,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1011,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1012,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1013,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1014,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1015,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1016,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1017,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+1018,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x14U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x14U))))));
    bufp->fullBit(oldp+1019,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x14U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+1020,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1021,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1022,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x15U)))));
    bufp->fullBit(oldp+1023,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x15U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+1024,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x15U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x15U)))));
    bufp->fullBit(oldp+1025,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1026,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1027,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x16U)))));
    bufp->fullBit(oldp+1028,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x16U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x16U))))));
    bufp->fullBit(oldp+1029,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x16U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x16U)))));
    bufp->fullBit(oldp+1030,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1031,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1032,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+1033,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x17U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+1034,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x17U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x17U)))));
    bufp->fullCData(oldp+1035,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x18U))),4);
    bufp->fullCData(oldp+1036,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                        >> 0x18U))),4);
    bufp->fullBit(oldp+1037,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1038,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1039,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1040,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1041,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1042,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1043,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1044,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x18U)))));
    bufp->fullBit(oldp+1045,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x18U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x18U))))));
    bufp->fullBit(oldp+1046,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x18U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x18U)))));
    bufp->fullBit(oldp+1047,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1048,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1049,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+1050,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x19U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+1051,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x19U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+1052,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1053,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1054,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1aU)))));
    bufp->fullBit(oldp+1055,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1aU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1aU))))));
    bufp->fullBit(oldp+1056,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1aU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1aU)))));
    bufp->fullBit(oldp+1057,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1058,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1059,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1bU)))));
    bufp->fullBit(oldp+1060,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1bU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+1061,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1bU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1bU)))));
    bufp->fullCData(oldp+1062,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                >> 0x1cU)),4);
    bufp->fullCData(oldp+1063,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1064,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1065,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1066,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1067,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1068,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32s_1__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1069,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1070,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1071,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1cU)))));
    bufp->fullBit(oldp+1072,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1cU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1cU))))));
    bufp->fullBit(oldp+1073,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1cU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1cU)))));
    bufp->fullBit(oldp+1074,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1075,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1076,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1dU)))));
    bufp->fullBit(oldp+1077,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1dU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+1078,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1dU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1dU)))));
    bufp->fullBit(oldp+1079,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1080,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1081,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1082,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1eU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1eU))))));
    bufp->fullBit(oldp+1083,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1eU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1084,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1085,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1086,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1087,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                     >> 0x1fU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+1088,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__operand_a)) 
                                        >> 0x1fU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1089,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+1090,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                     >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t) 
                                                  >> 1U))))));
    bufp->fullCData(oldp+1091,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+1092,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullBit(oldp+1093,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+1094,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+1095,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+1096,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+1097,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+1098,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1099,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1100,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1101,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1102,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1103,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1104,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1105,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1106,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1107,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1108,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1109,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1110,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1111,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1112,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1113,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1114,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1115,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1116,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1117,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1118,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+1119,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+1120,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+1121,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+1122,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+1123,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1124,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1125,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1126,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1127,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1128,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1129,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1130,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1131,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1132,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1133,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1134,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1135,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1136,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1137,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1138,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1139,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1140,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1141,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1142,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullSData(oldp+1143,(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data),12);
    bufp->fullCData(oldp+1144,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__addr_sel),2);
    bufp->fullIData(oldp+1145,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmem_mux_lddata),32);
    bufp->fullIData(oldp+1146,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__oper_mux_lddata),32);
    bufp->fullBit(oldp+1147,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_dmem_st_en));
    bufp->fullBit(oldp+1148,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dmux_oper_st_en));
    bufp->fullIData(oldp+1149,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data),32);
    bufp->fullSData(oldp+1150,((0xfffU & vlSelf->top__DOT__singleCycle__DOT__alu_data)),12);
    bufp->fullBit(oldp+1151,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))));
    bufp->fullIData(oldp+1152,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__data_memory_inst__DOT__prdata),32);
    bufp->fullIData(oldp+1153,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+1154,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+1155,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+1156,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+1157,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+1158,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+1159,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+1160,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+1161,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+1162,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+1163,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+1164,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+1165,(vlSelf->clk_i));
    bufp->fullBit(oldp+1166,(vlSelf->rst_ni));
    bufp->fullIData(oldp+1167,(((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
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
                                     : ((2U == (3U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)))
                                         ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data
                                         : 0xcafecafeU)))),32);
    bufp->fullIData(oldp+1168,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                 ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                     ? 0U : ((IData)(4U) 
                                             + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))
                                 : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                     ? ((0U == (3U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)))
                                         ? ((0x4000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__instr)
                                             ? (0xffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                             : ((0x80U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                                 ? 
                                                (0xffffff00U 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data))
                                                 : 
                                                (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)))
                                         : ((1U == 
                                             (3U & 
                                              (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU)))
                                             ? ((0x4000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__ld_data)
                                                 : 
                                                ((0x8000U 
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
    bufp->fullIData(oldp+1169,(((0x500U == (0xffffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                 ? ((0x500U == (0xffffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                     ? vlSelf->io_sw_i
                                     : 1U) : 0xcafecafeU)),32);
    bufp->fullIData(oldp+1170,(((0x500U == (0xffffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                 ? vlSelf->io_sw_i : 1U)),32);
    bufp->fullCData(oldp+1171,(0U),2);
    bufp->fullCData(oldp+1172,(1U),2);
    bufp->fullCData(oldp+1173,(2U),2);
    bufp->fullCData(oldp+1174,(3U),2);
    bufp->fullIData(oldp+1175,(0x20U),32);
    bufp->fullCData(oldp+1176,(0xcU),5);
    bufp->fullCData(oldp+1177,(4U),5);
    bufp->fullCData(oldp+1178,(0U),5);
    bufp->fullCData(oldp+1179,(8U),5);
    bufp->fullCData(oldp+1180,(0x18U),5);
    bufp->fullCData(oldp+1181,(0xdU),5);
    bufp->fullCData(oldp+1182,(5U),5);
    bufp->fullCData(oldp+1183,(0x1bU),5);
    bufp->fullCData(oldp+1184,(0x19U),5);
    bufp->fullCData(oldp+1185,(0U),3);
    bufp->fullCData(oldp+1186,(1U),3);
    bufp->fullCData(oldp+1187,(2U),3);
    bufp->fullCData(oldp+1188,(3U),3);
    bufp->fullCData(oldp+1189,(4U),3);
    bufp->fullCData(oldp+1190,(5U),3);
    bufp->fullCData(oldp+1191,(6U),3);
    bufp->fullCData(oldp+1192,(7U),3);
    bufp->fullIData(oldp+1193,(0xeU),32);
    bufp->fullIData(oldp+1194,(0xcU),32);
    bufp->fullBit(oldp+1195,(1U));
    bufp->fullIData(oldp+1196,(5U),32);
    bufp->fullIData(oldp+1197,(0U),32);
}
