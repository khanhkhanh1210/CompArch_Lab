module PC(
    input  logic        i_clk,       // Clock
    input  logic        i_rst,       // Reset

    input  logic [31:0] i_pc,        // Program counter
    input  logic        sel,         // Select PC + 4 if sel = 1, else select i_pc

    output logic [31:0] pc_o,      // Next program counter
    output logic [31:0] pc_4      // Program counter + 4
);
    logic [31:0] pc_next;   
	
	assign pc_4 = pc_o + 4;

    always_comb begin
        if(sel == 0) begin
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