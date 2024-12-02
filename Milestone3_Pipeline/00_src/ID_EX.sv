module ID_EX (
    input logic i_clk, i_rst_n,
    input logic [31:0] pc_D, pc_four_D,
    input logic [31:0] instr_D,
    input logic [3:0] alu_op_D,
    input logic br_un_D, rd_wren_D, opa_sel_D, opb_sel_D, mem_wren_D, insn_vld_D,   //control signals
    input logic [31:0] rs1_data_D, rs2_data_D, imm_D,
    input logic [1:0] wb_sel_D,
    input logic [4:0] rd_addr_D, rs1_addr_D, rs2_addr_D,
    output logic [31:0] pc_E, pc_four_E,
        output logic [31:0] instr_E,
    output logic br_un_E, rd_wren_E, opa_sel_E, opb_sel_E, mem_wren_E, insn_vld_E,
    output logic [3:0] alu_op_E,
    output logic [31:0] rs1_data_E, rs2_data_E, imm_E,
    output logic [1:0] wb_sel_E,
    output logic [4:0] rd_addr_E, rs1_addr_E, rs2_addr_E
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        pc_E <= 32'h0;
        pc_four_E <= 32'h0;
        instr_E <= 32'h0;
        br_un_E <= 1'b0;
        rd_wren_E <= 1'b0;
        opa_sel_E <= 1'b0;
        opb_sel_E <= 1'b0;
        mem_wren_E <= 1'b0;
        insn_vld_E <= 1'b0;
        alu_op_E <= 4'b0000;
        rs1_data_E <= 32'h0;
        rs2_data_E <= 32'h0;
        imm_E <= 32'h0;
        wb_sel_E <= 2'b00;
        rd_addr_E <= 5'h0;
        rs1_addr_E <= 5'h0;
        rs2_addr_E <= 5'h0;
    end 
    else begin
        pc_E <= pc_D;
        pc_four_E <= pc_four_D;
        instr_E <= instr_D;
        br_un_E <= br_un_D;
        rd_wren_E <= rd_wren_D;
        opa_sel_E <= opa_sel_D;
        opb_sel_E <= opb_sel_D;
        mem_wren_E <= mem_wren_D;
        insn_vld_E <= insn_vld_D;
        alu_op_E <= alu_op_D;
        rs1_data_E <= rs1_data_D;
        rs2_data_E <= rs2_data_D;
        imm_E <= imm_D;
        wb_sel_E <= wb_sel_D;
        rd_addr_E <= rd_addr_D;
        rs1_addr_E <= rs1_addr_D;
        rs2_addr_E <= rs2_addr_D;
    end
end

endmodule