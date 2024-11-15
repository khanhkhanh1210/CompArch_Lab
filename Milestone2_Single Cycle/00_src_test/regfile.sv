module regfile(
    input logic          i_clk,              // Clock
    input logic          i_rst_n,            // Reset
    
    input logic  [4:0]   i_rst1_addr,        // Address of the first source register
    input logic  [4:0]   i_rst2_addr,        // Address of the second source register
    
    input logic  [4:0]   i_rd_addr,          // Address of the destination register
    input logic  [31:0]  i_rd_data,          // Data to write to the destination register
    input logic          i_wr_en,             // Write enable for the destination register 

    output logic [31:0]  o_rst1_data,        // Data from the first source register
    output logic [31:0]  o_rst2_data         // Data from the second source register
);
    logic [31:0] r_regfile[31:0];
    
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_regfile[31:0] <= '{default: '0};
        end else if (i_wr_en) begin
            r_regfile[i_rd_addr] <= i_rd_data;
            r_regfile[0] <= '0;
        end
    end

    assign o_rst1_data = r_regfile[i_rst1_addr];
    assign o_rst2_data = r_regfile[i_rst2_addr];

endmodule