module regfile(
    input logic          i_clk,              // Clock
    input logic          i_rst_n,            // Reset
    
    input logic  [4:0]   i_rst1_addr,        // Address of the first source register
    input logic  [4:0]   i_rst2_addr,        // Address of the second source register
    
    input logic  [4:0]   i_rd_addr,          // Address of the destination register
    input logic  [31:0]  i_rd_data,          // Data to write to the destination register
    input logic          i_wr_en,             // Write enable for the destination register 

    output logic [31:0]  o_rst1_data,        // Data from the first source register
    output logic [31:0]  o_rst2_data,         // Data from the second source register
    output logic [31:0] reg_dump0,
    output logic [31:0] reg_dump1,
    output logic [31:0] reg_dump2,
    output logic [31:0] reg_dump3,
    output logic [31:0] reg_dump4,
    output logic [31:0] reg_dump5,
    output logic [31:0] reg_dump6,
    output logic [31:0] reg_dump7,
    output logic [31:0] reg_dump8,
    output logic [31:0] reg_dump9,
    output logic [31:0] reg_dump10,
    output logic [31:0] reg_dump11,
    output logic [31:0] reg_dump12,
    output logic [31:0] reg_dump13,
    output logic [31:0] reg_dump14,
    output logic [31:0] reg_dump15,
    output logic [31:0] reg_dump16,
    output logic [31:0] reg_dump17,
    output logic [31:0] reg_dump18,
    output logic [31:0] reg_dump19,
    output logic [31:0] reg_dump20,
    output logic [31:0] reg_dump21,
    output logic [31:0] reg_dump22,
    output logic [31:0] reg_dump23,
    output logic [31:0] reg_dump24,
    output logic [31:0] reg_dump25,
    output logic [31:0] reg_dump26,
    output logic [31:0] reg_dump27,
    output logic [31:0] reg_dump28,
    output logic [31:0] reg_dump29,
    output logic [31:0] reg_dump30,
    output logic [31:0] reg_dump31
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

    always_comb begin
        reg_dump0 = r_regfile[0];
        reg_dump1 = r_regfile[1];
        reg_dump2 = r_regfile[2];
        reg_dump3 = r_regfile[3];
        reg_dump4 = r_regfile[4];
        reg_dump5 = r_regfile[5];
        reg_dump6 = r_regfile[6];
        reg_dump7 = r_regfile[7];
        reg_dump8 = r_regfile[8];
        reg_dump9 = r_regfile[9];
        reg_dump10 = r_regfile[10];
        reg_dump11 = r_regfile[11];
        reg_dump12 = r_regfile[12];
        reg_dump13 = r_regfile[13];
        reg_dump14 = r_regfile[14];
        reg_dump15 = r_regfile[15];
        reg_dump16 = r_regfile[16];
        reg_dump17 = r_regfile[17];
        reg_dump18 = r_regfile[18];
        reg_dump19 = r_regfile[19];
        reg_dump20 = r_regfile[20];
        reg_dump21 = r_regfile[21];
        reg_dump22 = r_regfile[22];
        reg_dump23 = r_regfile[23];
        reg_dump24 = r_regfile[24];
        reg_dump25 = r_regfile[25];
        reg_dump26 = r_regfile[26];
        reg_dump27 = r_regfile[27];
        reg_dump28 = r_regfile[28];
        reg_dump29 = r_regfile[29];
        reg_dump30 = r_regfile[30];
        reg_dump31 = r_regfile[31];
    end

endmodule