    `timescale 1ns / 1ps

module singlecycle_wrapper();

    // Input and output declarations
    reg [31:0] i_io_sw;
    wire [31:0] o_io_lcd;
    wire [31:0] o_io_ledg;
    wire [31:0] o_io_ledr;
    wire [6:0] o_io_hex0;
    wire [6:0] o_io_hex1;
    wire [6:0] o_io_hex2;
    wire [6:0] o_io_hex3;
    wire [6:0] o_io_hex4;
    wire [6:0] o_io_hex5;
    wire [6:0] o_io_hex6;
    wire [6:0] o_io_hex7;
    wire [31:0] o_pc_debug;
    wire o_insn_vld;
    reg i_clk;
    reg i_rst_n;
    reg [3:0] i_io_btn;

    // Instantiate the singlecycle module
    singlecycle sc(
        .i_io_sw(i_io_sw),
        .o_io_lcd(o_io_lcd),
        .o_io_ledg(o_io_ledg),
        .o_io_ledr(o_io_ledr),
        .o_io_hex0(o_io_hex0),
        .o_io_hex1(o_io_hex1),
        .o_io_hex2(o_io_hex2),
        .o_io_hex3(o_io_hex3),
        .o_io_hex4(o_io_hex4),
        .o_io_hex5(o_io_hex5),
        .o_io_hex6(o_io_hex6),
        .o_io_hex7(o_io_hex7),
        .o_pc_debug(o_pc_debug),
        .o_insn_vld(o_insn_vld),
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_io_btn(i_io_btn)
    );

    // Clock generation for simulation
    initial begin
        i_clk = 0;
        forever #5 i_clk = ~i_clk;  // 100 MHz clock
    end

    // Reset and input stimulus
    initial begin
        // Reset pulse
        i_rst_n = 0;
        i_io_sw = 0;
        i_io_btn = 4'hF;  // Assuming active low
        #100;
        i_rst_n = 1;
        #100;

        // Example input sequence
        i_io_sw = 32'hA5A5_A5A5;  // Example switch input pattern
        #20;
        i_io_btn = 4'b0111;  // Simulate button press
        #20;
        i_io_btn = 4'hF;  // Release button
    end

endmodule
