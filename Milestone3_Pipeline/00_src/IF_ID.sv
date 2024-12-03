module IF_ID (
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] pc_F,
    input logic [31:0] pc_four_F,
    input logic [31:0] instr_F,
    output logic [31:0] pc_D,
    output logic [31:0] pc_four_D,
    output logic [31:0] instr_D
);

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n)
            begin
                pc_D <= 32'h0;
                pc_four_D <= 32'h0;
                instr_D <= 32'h0;
            end
        else begin
                pc_D <= pc_F;
                pc_four_D <= pc_four_F;
                instr_D <= instr_F;
        end
    end

endmodule