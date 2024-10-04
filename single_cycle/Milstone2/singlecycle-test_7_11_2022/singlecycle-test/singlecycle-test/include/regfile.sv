// +FHDR------------------------------------------------------------
//      Copyright (c) 2022 Ho Chi Minh city University of Technology
//                         ALL RIGHTS RESERVED
// -----------------------------------------------------------------
// Filename      : regfile.sv
// Author        : Nhat Minh, Quang Ky, Duc Thuan
// Created On    : 2022-10-18 07:00
// Last Modified : 
// -----------------------------------------------------------------
// Description:
//
//
// -FHDR------------------------------------------------------------
/* verilator lint_off UNUSED */
module regfile
#(
    parameter                              DATA_WIDTH = 32,
    parameter                              ADDR_WIDTH = 5
)
(    //input 
    input     logic                        clk_i, //positive clock
    input     logic                        rst_ni, //active low reset
    input     logic    [ADDR_WIDTH-1:0]    rs1_addr_i,
    input     logic    [ADDR_WIDTH-1:0]    rs2_addr_i,
    input     logic    [ADDR_WIDTH-1:0]    rd_addr_i,
    input     logic    [DATA_WIDTH-1:0]    rd_data_i,
    input     logic                        rd_wren_i,
    //output 
    output    logic    [DATA_WIDTH-1:0]    rs1_data_o,
    output    logic    [DATA_WIDTH-1:0]    rs2_data_o
    
);
    logic    [DATA_WIDTH-1:0]    mem    [2**ADDR_WIDTH - 1 : 0] ;
    //write rd_data


    always_ff @(posedge  clk_i) begin
            if ((rd_wren_i == 1'b1) && (rd_addr_i != 5'b00000) ) begin 
                mem[rd_addr_i] <= rd_data_i ;
               // $writememh("/home/anhky1214/lab_comparch/lab1_ex/lab4/memory/regfile.txt",mem);
            end
	end
    always_comb begin
    rs1_data_o = mem[rs1_addr_i];
    rs2_data_o = mem[rs2_addr_i];
    end 
    //read rs1 rs2 data
endmodule : regfile
