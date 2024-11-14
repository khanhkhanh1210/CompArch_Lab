module sram_tb();
    logic [17:0]   i_ADDR   ;
    logic [31:0]   i_WDATA  ;
    logic [ 3:0]   i_BMASK  ;
    logic          i_WREN   ;
    logic          i_RDEN   ;
    logic [31:0]   o_RDATA  ;
    logic          o_ACK    ;
    logic          clk      ;

    logic [17:0]   SRAM_ADDR;
    logic [15:0]   SRAM_DQ  ;
    logic          SRAM_CE_N;
    logic          SRAM_WE_N;
    logic          SRAM_LB_N;
    logic          SRAM_UB_N;
    logic          SRAM_OE_N;

    logic i_clk;
    logic i_reset;

    sram_IS61WV25616_controller_32b_5lr dut(
        .i_ADDR(i_ADDR),
        .i_WDATA(i_WDATA),
        .i_BMASK(i_BMASK),
        .i_WREN(i_WREN),
        .i_RDEN(i_RDEN),
        .o_RDATA(o_RDATA),
        .o_ACK(o_ACK),
        .SRAM_ADDR(SRAM_ADDR),
        .SRAM_DQ(SRAM_DQ),
        .SRAM_CE_N(SRAM_CE_N),
        .SRAM_WE_N(SRAM_WE_N),
        .SRAM_LB_N(SRAM_LB_N),
        .SRAM_UB_N(SRAM_UB_N),
        .SRAM_OE_N(SRAM_OE_N),
        .i_clk(i_clk),
        .i_reset(i_reset)
    );

    always clk = #5 ~clk;

endmodule

    
