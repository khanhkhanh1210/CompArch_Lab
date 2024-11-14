module lsu_tb #(
    parameter WIDTH = 32
);

    logic   [31:0]  i_lsu_addr;
    logic   [31:0]  i_st_data;
    logic           i_lsu_wren;
    logic           i_clk;
    logic           i_rst_n;
    logic   [6:0]   instr;
    logic   [31:0]  io_sw_i;
    logic   [3:0]   io_btn_i;
    logic   [2:0]   i_lsu_op;
    logic   [31:0]  o_ld_data;
    logic   [31:0]  io_lcd_o;
    logic   [31:0]  io_ledr_o;
    logic   [31:0]  io_ledg_o;
    logic   [6:0]   io_hex0_o;
    logic   [6:0]   io_hex1_o;
    logic   [6:0]   io_hex2_o;
    logic   [6:0]   io_hex3_o;
    logic   [6:0]   io_hex4_o;
    logic   [6:0]   io_hex5_o;
    logic   [6:0]   io_hex6_o;
    logic   [6:0]   io_hex7_o;
    logic   [17:0]  SRAM_ADDR;
    logic   [15:0]  SRAM_DQ;
    logic           SRAM_CE_N, SRAM_WE_N, SRAM_LB_N, SRAM_UB_N, SRAM_OE_N;
    logic           i_stall;

    logic [15:0] internal_addr;

    logic [31:0] new_data_in;
    logic [3:0] byte_en;
    logic [3:0] [7:0] data_memory;
    logic dmem_wren;
    logic [31:0] o_per_data;
    logic o_buffer_wren;
    logic [31:0] i_per_data;
    logic [31:0] new_data_o;
    logic i_ACK;

    lsu #(WIDTH) dut(
        .i_lsu_addr(i_lsu_addr),
        .i_st_data(i_st_data),
        .i_lsu_wren(i_lsu_wren),
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .instr(instr),
        .io_sw_i(io_sw_i),
        .io_btn_i(io_btn_i),
        .i_lsu_op(i_lsu_op),
        .o_ld_data(o_ld_data),
        .io_lcd_o(io_lcd_o),
        .io_ledr_o(io_ledr_o),
        .io_ledg_o(io_ledg_o),
        .io_hex0_o(io_hex0_o),
        .io_hex1_o(io_hex1_o),
        .io_hex2_o(io_hex2_o),
        .io_hex3_o(io_hex3_o),
        .io_hex4_o(io_hex4_o),
        .io_hex5_o(io_hex5_o),
        .io_hex6_o(io_hex6_o),
        .io_hex7_o(io_hex7_o),
        .SRAM_ADDR(SRAM_ADDR),
        .SRAM_DQ(SRAM_DQ),
        .SRAM_CE_N(SRAM_CE_N),
        .SRAM_WE_N(SRAM_WE_N),
        .SRAM_LB_N(SRAM_LB_N),
        .SRAM_UB_N(SRAM_UB_N),
        .SRAM_OE_N(SRAM_OE_N),
        .i_stall(i_stall)
    );

    initial begin
        for(int i = 0; i < 16; i = i + 1) begin    
            i_lsu_addr = $urandom;
            i_st_data = $urandom;
            i_lsu_wren = $urandom;
            i_clk = $urandom;
            i_rst_n = $urandom;
            instr = $urandom;
            io_sw_i = $urandom;
            io_btn_i = $urandom;
            i_lsu_op = $urandom;
            #10;
            if (o_ld_data !== new_data_o) begin
                $display("Error: i_lsu_addr = %h, i_st_data = %h, i_lsu_wren = %b, i_clk = %b, i_rst_n = %b, instr = %h, io_sw_i = %h, io_btn_i = %h, i_lsu_op = %h, o_ld_data = %h, new_data_o = %h",
                        i_lsu_addr, i_st_data, i_lsu_wren, i_clk, i_rst_n, instr, io_sw_i, io_btn_i, i_lsu_op, o_ld_data, new_data_o);
            end
        end
    end