module PC(
    input  logic        i_clk,       // Clock
    input  logic        i_rst,       // Reset

    input  logic [31:0] i_pc,        // Program counter
    input  logic        sel,         // Select PC + 4 or PC

    output logic [31:0] pc_o      // Next program counter
);
    logic [31:0] pc_next, pc_4;   

    ksa_adder #(32) adder (pc_o, 32'h4, 1'b0, pc_4);

    always_comb begin
        if(sel) begin
            pc_next = pc_4;
        end else begin
            pc_next = i_pc;
        end
    end

    always_ff @(posedge i_clk or negedge i_rst) begin
        if(!i_rst) begin
            pc_o <= 32'h0;
        end else begin
            pc_o <= pc_next;
        end
    end

endmodule 