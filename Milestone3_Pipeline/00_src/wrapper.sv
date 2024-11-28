module wrapper (
    input  logic         CLOCK_50,
    input  logic  [17:0] SW,
    input  logic  [3:0]  KEY,

    output logic  [7:0]  LEDG,
    output logic  [17:0] LEDR,
    output logic  [6:0]  HEX0,
    output logic  [6:0]  HEX1,
    output logic  [6:0]  HEX2,
    output logic  [6:0]  HEX3,
    output logic  [6:0]  HEX4,
    output logic  [6:0]  HEX5,
    output logic  [6:0]  HEX6,
    output logic  [6:0]  HEX7,
    //output logic  [31:0] pc_debug,
    output  logic           LCD_ON,
    output  logic           LCD_EN,
    output  logic           LCD_RS,
	 output	logic				 LCD_RW,
    output  logic   [7:0]   LCD_DATA
	 //sram
	 //output logic    [17:0]   SRAM_ADDR,
    //inout  wire     [15:0]   SRAM_DQ  ,
    //output logic             SRAM_CE_N,
    //output logic             SRAM_WE_N,
    //output logic             SRAM_LB_N,
    //output logic             SRAM_UB_N,
    //output  logic            SRAM_OE_N
);

    
    // Instantiate the singlecycle module
    singlecycle uut (
        .i_clk      (CLOCK_50),
        .i_rst_n    (SW[17]),
        .i_io_sw    (SW[16:0]),
        .i_io_btn   (KEY[3:0]),
        .o_io_lcd   ({LCD_ON, 20'b0, LCD_EN, LCD_RS, LCD_RW, LCD_DATA}),
        .o_io_ledg  (LEDG),
        .o_io_ledr  (LEDR[16:0]),
        .o_io_hex0  (HEX0),
        .o_io_hex1  (HEX1),
        .o_io_hex2  (HEX2),
        .o_io_hex3  (HEX3),
        .o_io_hex4  (HEX4),
        .o_io_hex5  (HEX5),
        .o_io_hex6  (HEX6),
        .o_io_hex7  (HEX7),
        //.o_pc_debug (pc_debug),
        .o_insn_vld (LEDR[17])
		  //.SRAM_ADDR(SRAM_ADDR),
		 //.SRAM_DQ(SRAM_DQ)  ,
		 //.SRAM_CE_N(SRAM_CE_N),
		 //.SRAM_WE_N(SRAM_WE_N),
		 //.SRAM_LB_N(SRAM_LB_N),
		 //.SRAM_UB_N(SRAM_UB_N),
		 //.SRAM_OE_N(SRAM_OE_N)
    );

endmodule
