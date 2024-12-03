module MEM_WB (
    input logic i_clk, i_rst_n,
    input logic [31:0] pc_M, pc_four_M,
    input logic [31:0] instr_M,
    input logic rd_wren_M, insn_vld_M,
    input logic [31:0] alu_data_M, ld_data_M,
    input logic [1:0] wb_sel_M,
    input logic [4:0] rd_addr_M,
    output logic [31:0] pc_W, pc_four_W,
    output logic [31:0] instr_W,
    output logic rd_wren_W, insn_vld_W,
    output logic [31:0] alu_data_W, ld_data_W,
    output logic [1:0] wb_sel_W,
    output logic [4:0] rd_addr_W
);

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            pc_W <= 32'h0;
            pc_four_W <= 32'h0;
            instr_W <= 32'h0;
            rd_wren_W <= 1'b0;
            insn_vld_W <= 1'b0;
            alu_data_W <= 32'h0;
            ld_data_W <= 32'h0;
            wb_sel_W <= 2'b00;
            rd_addr_W <= 5'h0;
        end 
        else begin
            pc_W <= pc_M;
            pc_four_W <= pc_four_M;
            instr_W <= instr_M;
            rd_wren_W <= rd_wren_M;
            insn_vld_W <= insn_vld_M;
            alu_data_W <= alu_data_M;
            ld_data_W <= ld_data_M;
            wb_sel_W <= wb_sel_M;
            rd_addr_W <= rd_addr_M;
        end
    end

endmodule