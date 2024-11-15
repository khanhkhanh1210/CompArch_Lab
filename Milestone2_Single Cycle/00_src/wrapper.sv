
module singlecycle

// #(

//     parameter                    BYTE          = 2'b00,
//     parameter                    HWORD         = 2'b01,
//     parameter                    WORD          = 2'b10,
//     //parameter for memory mapping 
//     parameter                    DATA_MEMORY     = 2'b00,
//     parameter                    OUT_PERIPHERALS = 2'b01,
//     parameter                    IN_PERIPHERALS  = 2'b10,
//     parameter                    RESERVED        = 2'b11
// )

(   //input
    input   logic           CLOCK_50,
    input   logic   [17:0]  SW,    
    input   logic   [3:0]   KEY,

    //output 
    output  logic   [31:0]  o_pc_debug,
    output  logic   [17:0]  LEDR,
    output  logic   [7:0]   LEDG,
    output  logic   [6:0]   HEX0,
    output  logic   [6:0]   HEX1,
    output  logic   [6:0]   HEX2,
    output  logic   [6:0]   HEX3,
    output  logic   [6:0]   HEX4,
    output  logic   [6:0]   HEX5,
    output  logic   [6:0]   HEX6,
    output  logic   [6:0]   HEX7, 
    output  logic           LCD_ON,
    output  logic           LCD_EN,
    output  logic           LCD_RS,
	 output	logic			    LCD_RW,
    output  logic   [7:0]   LCD_DATA,
    
    //SRAM
    output logic    [17:0]   SRAM_ADDR,
    inout  wire    [15:0]   SRAM_DQ  ,
    output logic             SRAM_CE_N,
    output logic             SRAM_WE_N,
    output logic             SRAM_LB_N,
    output logic             SRAM_UB_N,
    output  logic            SRAM_OE_N
);

singlecycle singlecycle(
    .i_clk(CLOCK_50),
    .i_io_sw(SW),
    .i_io_btn(KEY),
    .o_pc_debug(o_pc_debug),
    .o_io_ledr(LEDR),
    .o_io_ledg(LEDG),
    .o_io_hex0(HEX0),
    .o_io_hex1(HEX1),
    .o_io_hex2(HEX2),
    .o_io_hex3(HEX3),
    .o_io_hex4(HEX4),
    .o_io_hex5(HEX5),
    .o_io_hex6(HEX6),
    .o_io_hex7(HEX7),
    .o_io_lcd(LCD_ON),
    .o_io_lcd(LCD_EN),
    .o_io_lcd(LCD_RS),
    .o_io_lcd(LCD_RW),
    .o_io_lcd(LCD_DATA),
    .SRAM_ADDR(SRAM_ADDR),
    .SRAM_DQ(SRAM_DQ),
    .SRAM_CE_N(SRAM_CE_N),
    .SRAM_WE_N(SRAM_WE_N),
    .SRAM_LB_N(SRAM_LB_N),
    .SRAM_UB_N(SRAM_UB_N),
    .SRAM_OE_N(SRAM_OE_N)
)