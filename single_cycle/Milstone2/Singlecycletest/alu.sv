/* verilator lint_off MULTITOP */
// +FHDR------------------------------------------------------------
//      Copyright (c) 2022 Ho Chi Minh city University of Technology
//                         ALL RIGHTS RESERVED
// -----------------------------------------------------------------
// Filename      : alu.sv
// Author        : Tuan Vy, Quy Loc, Phuong Hien
// Created On    : 2022-10-03 14:00
// Last Modified : 
// -----------------------------------------------------------------
// Description: 
//
//
// -FHDR------------------------------------------------------------


/* verilator lint_off UNUSED */
module alu
#(
    // parameter
    parameter WIDTH = 32,
    parameter A_ADD  = 4'b0000 ,
    parameter A_SUB  = 4'b0001 ,
    parameter A_SLL  = 4'b0010 ,
    parameter A_SLT  = 4'b0011 ,
    parameter A_SLTU = 4'b0100 ,
    parameter A_XOR  = 4'b0101 ,
    parameter A_SRL  = 4'b0110 ,
    parameter A_SRA  = 4'b0111 ,
    parameter A_OR   = 4'b1000 ,
    parameter A_AND  = 4'b1001 ,
    parameter A_LUI  = 4'b1010 
	 
)
(   
    
    input   logic   [3:0]           alu_op_i,
    input   logic   [WIDTH-1:0]     operand_a_i,
    input   logic   [WIDTH-1:0]     operand_b_i,
  
    
    output  logic   [WIDTH-1:0]     alu_data_o,
    output  logic                   bru_exp_o
);
    //--------------------declare variable--------------------//
    
  

    logic [4:0]         shift_number;    
 
    //logic               equal_u;
    //logic               alarger_u;
    logic               blarger_u;
    //logic               equal_s;
    //logic               alarger_s;
    logic               blarger_s;
    logic [63:0]        alu_data_temp;
    logic [63:0]        alu_data_temp2;

    
    
    //-----------------instance module---------------------//
    /* verilator lint_off PINCONNECTEMPTY */
    compare_32bit_u compare32u_0(
        .a_i        (operand_a_i[31:0]),
        .b_i        (operand_b_i[31:0]),
        .equal_o    (),
        .alarger_o  (),
        .blarger_o  (blarger_u)
    );
    
    compare_32bit_s compare32s_1(
        .a_i        (operand_a_i[31:0]),
        .b_i        (operand_b_i[31:0]),
        .equal_o    (),
        .alarger_o  (),
        .blarger_o  (blarger_s)
    );
    /* verilator lint_on PINCONNECTEMPTY */
    assign shift_number = operand_b_i[4:0] ;
    assign alu_data_temp = {32'hffffffff,operand_a_i};

    assign alu_data_temp2 = alu_data_temp >> shift_number;
    //-------------------------------------------------------
    always_comb begin
        case (alu_op_i)
				A_ADD   : begin
                alu_data_o = operand_a_i + operand_b_i;
            end
            A_SUB   : begin   
                alu_data_o = operand_a_i + ~(operand_b_i) + 1;
            end
				A_SLT   : begin
                alu_data_o = {31'b0,blarger_s} ;
            end
				A_SLTU  : begin
                alu_data_o = {31'b0,blarger_u} ;
            end
				A_XOR   : begin
                alu_data_o = operand_a_i ^ operand_b_i ;
            end
            A_OR    : begin
                alu_data_o = operand_a_i | operand_b_i ;
            end
            A_AND   : begin
                alu_data_o = operand_a_i & operand_b_i ;
            end
            A_SLL   : begin
                alu_data_o = operand_a_i << shift_number ;
            end
            A_SRL   : begin
                alu_data_o = operand_a_i >> shift_number ;
            end
            
				A_SRA   : begin
               
                if(!operand_a_i[31]) begin 
                    alu_data_o      = operand_a_i >> shift_number;
                end
                else begin       
                    alu_data_o      = alu_data_temp2[31:0];
                end
            end
            A_LUI   : begin
                alu_data_o = operand_b_i ;
            end
            default: begin 
                alu_data_o = 0;
            end
        endcase
        
    end 
    assign bru_exp_o = |alu_data_o ;
endmodule : alu