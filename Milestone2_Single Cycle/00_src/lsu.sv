module lsu 
(
    //input
    input     logic              i_clk,
    input     logic              i_rst,
    input     logic    [15:0]    i_lsu_addr,
    input     logic    [31:0]    i_st_data,
    input     logic              i_lsu_wren, //1 to write and 0 to read
    input     logic    [31:0]    i_io_sw,
    input     logic    [3:0]     i_io_btn,
    //output 
    output    logic    [31:0]    o_ld_data,

    output    logic    [31:0]    o_io_lcd,
    output    logic    [31:0]    o_io_ledg,
    output    logic    [31:0]    o_io_ledr,

    //output for hex display
    output    logic    [6:0]     o_io_hex0,
    output    logic    [6:0]     o_io_hex1,
    output    logic    [6:0]     o_io_hex2,
    output    logic    [6:0]     o_io_hex3,
    output    logic    [6:0]     o_io_hex4,
    output    logic    [6:0]     o_io_hex5,
    output    logic    [6:0]     o_io_hex6,
    output    logic    [6:0]     o_io_hex7,

    //output input for SRAM
    output logic [17:0]   SRAM_ADDR,
    inout  logic [15:0]   SRAM_DQ ,
    output logic          SRAM_CE_N,
    output logic          SRAM_WE_N,
    output logic          SRAM_LB_N,
    output logic          SRAM_UB_N,
    input  logic          SRAM_OE_N,
    output logic          o_ACK
);
    logic output_buffer_en, data_memory_en, input_buffer_en;
    // output peripherals from 0x7000 to 0x77FF
    assign output_buffer_en = (i_lsu_addr[15:6] == 10'b0111 0000 00);
    
    // data memory from 0x0000 to 0x3FFF
    assign data_memory_en = (i_lsu_addr[15:14] == 2'd0);

    // input buffer from 0x7800 to 0x781F
    assign input_buffer_en = (i_lsu_addr[15:5] == 11'b0111 1000 000);

    // output buffer
    output_buffer output_buffer(
        .i_clk(i_clk),
        .i_rst(i_rst),
        .i_lsu_wren(i_lsu_wren & output_buffer_en),
        .i_lsu_addr(i_lsu_addr[5:0]),
        .i_st_data(i_st_data),
        .o_io_hex0(o_io_hex0),
        .o_io_hex1(o_io_hex1),
        .o_io_hex2(o_io_hex2),
        .o_io_hex3(o_io_hex3),
        .o_io_hex4(o_io_hex4),
        .o_io_hex5(o_io_hex5),
        .o_io_hex6(o_io_hex6),
        .o_io_hex7(o_io_hex7),
        .o_io_lcd(o_io_lcd),
        .o_io_ledg(o_io_ledg),
        .o_io_ledr(o_io_ledr),
        .o_ld_data(o_ld_data)
    );

    // input buffer
    input_buffer input_buffer(
        .i_clk(i_clk),
        .i_rst(i_rst),
        .i_io_sw(i_io_sw),
        .o_ld_data(o_ld_data),
        .i_io_btn(i_io_btn),
        .i_lsu_wren(i_lsu_wren & input_buffer_en)
    );

    // data memory

    sram_IS61WV25616_controller_32b_5lr data_memory(
        .i_ADDR(i_lsu_addr),
        .i_WDATA(i_st_data),
        .i_BMASK(4'b1111),
        .i_WREN(i_lsu_wren & data_memory_en),
        .i_RDEN(~i_lsu_wren & data_memory_en),
        .o_RDATA(o_ld_data),
        .o_ACK(o_ACK),
        .SRAM_ADDR(SRAM_ADDR),
        .SRAM_DQ(SRAM_DQ),
        .SRAM_CE_N(SRAM_CE_N),
        .SRAM_WE_N(SRAM_WE_N),
        .SRAM_LB_N(SRAM_LB_N),
        .SRAM_UB_N(SRAM_UB_N),
        .SRAM_OE_N(SRAM_OE_N),
        .i_clk(i_clk),
        .i_reset(i_rst)
    );

endmodule