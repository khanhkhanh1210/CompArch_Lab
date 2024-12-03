module EX_MEM (
    input logic i_clk, i_rst_n,
    input logic [31:0] pc_E, pc_four_E,
    input logic [31:0] instr_E,
    input logic rd_wren_E, mem_wren_E, i_insn_vld_E,
    input logic [31:0] alu_data_E, rs2_data_E,
    input logic [1:0] wb_sel_E,
    input logic [4:0] rd_addr_E,
    output logic [31:0] pc_M, pc_four_M,
    output logic [31:0] instr_M
    output logic rd_wren_M, mem_wren_M, insn_vld_M,
    output logic [31:0] alu_data_M, rs2_data_M,
    output logic [1:0] wb_sel_M,
    output logic [4:0] rd_addr_M
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        pc_M <= 32'h0;
        pc_four_M <= 32'h0;
        instr_M <= 32'h0;
        rd_wren_M <= 1'b0;
        mem_wren_M <= 1'b0;
        insn_vld_M <= 1'b0;
        alu_data_M <= 32'h0;
        rs2_data_M <= 32'h0;
        wb_sel_M <= 2'b00;
        rd_addr_M <= 5'h0;
    end 
    else begin
        pc_M <= pc_E;
        pc_four_M <= pc_four_E;
        instr_M <= instr_E;
        rd_wren_M <= rd_wren_E;
        mem_wren_M <= mem_wren_E;
        insn_vld_M <= i_insn_vld_E;
        alu_data_M <= alu_data_E;
        rs2_data_M <= rs2_data_E;
        wb_sel_M <= wb_sel_E;
        rd_addr_M <= rd_addr_E;
    end
end

endmodule