module imem (
    input logic        i_clk,      // Clock
    input  logic [31:0] i_imem_addr ,  // Địa chỉ đầu vào 32-bit
    input  logic        i_stop      ,  // Tín hiệu dừng
    output logic [31:0] o_imem_data    // Dữ liệu đầu ra 32-bit (1 câu lệnh)
);

    logic [31:0] sram_out;
    
    sram imem_ram (
        .i_clk(i_clk),
        .i_lsu_addr({2'b0, i_imem_addr[31:2]}),
        .wren(1'b0),
        .i_wdata(32'h0),
        .o_data_dmem(sram_out)
    );

	 
    // 32bit mem saved in 4 locations 8bit mem
    always_comb begin
        o_imem_data = sram_out;
    end

endmodule : imem