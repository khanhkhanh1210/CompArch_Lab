// +FHDR------------------------------------------------------------
//      Copyright (c) 2022 Ho Chi Minh city University of Technology
//                         ALL RIGHTS RESERVED
// -----------------------------------------------------------------
// Filename      : PC.sv
// Author        : Nhat Minh, Quang Ky, Duc Thuan
// Created On    : 2022-10-03 14:00
// Last Modified : 
// -----------------------------------------------------------------
// Description: Program counter
//
//
// -FHDR------------------------------------------------------------

module PC 
(
    //input 
    input     logic              clk_i,
    input     logic              rst_ni,
    input     logic              sel_i,
    input     logic    [31:0]    pc_i,

    //output    
    output    logic    [31:0]    pc_o,
    output    logic    [31:0]    pc_four_o      
);
    logic     [31:0]             nxt_pc;
    logic     [31:0]             pc_four;
    logic     [31:0]             pc;

    assign pc_four = pc + 32'h00000004;
    assign nxt_pc = sel_i ? pc_i : pc_four;
    
    always_ff @(posedge clk_i or negedge rst_ni) begin 
        if (!rst_ni) begin 
            pc <= 32'b0 ;
        end 
        else begin 
            pc <= nxt_pc ;
        end 
    end 
    assign pc_o = pc ;
    assign pc_four_o = pc_four;
endmodule : PC
