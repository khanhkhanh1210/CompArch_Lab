module lsu (  // A memory for loading(read) or storing(write) data words
    input logic [31:0]       i_lsu_addr, 
    input logic [31:0]       i_st_data,
    input logic              i_lsu_wren,
    input logic              i_clk,
    input logic              i_rst_n,
    
    input logic       [6:0]  instr,
    input logic       [31:0] i_io_sw,
    input logic       [3:0]  i_io_btn,
    input logic       [2:0]  i_lsu_op,

    output logic      [31:0] o_ld_data,
    output logic      [31:0] o_io_lcd,
    output logic      [8:0] o_io_ledg,
    output logic      [17:0] o_io_ledr,
    output logic      [6:0]  o_io_hex0,
    output logic      [6:0]  o_io_hex1,
    output logic      [6:0]  o_io_hex2,
    output logic      [6:0]  o_io_hex3,
    output logic      [6:0]  o_io_hex4,
    output logic      [6:0]  o_io_hex5,
    output logic      [6:0]  o_io_hex6,
    output logic      [6:0]  o_io_hex7,
	  //sram
	  

	  output logic [17:0]   SRAM_ADDR,
	  inout  wire  [15:0]   SRAM_DQ,
	  output logic          SRAM_CE_N,
	  output logic          SRAM_WE_N,
	  output logic          SRAM_LB_N,
	  output logic          SRAM_UB_N,
	  output  logic          SRAM_OE_N,

    output logic             i_stall
);

  logic [15:0] internal_addr;
  logic i_ACK;
  logic [3:0] byte_en;
  // Dmem signal
  logic [31:0] data_out;
  logic dmem_wren;
  logic [31:0] mem_out;
  logic [31:0] mem_in;
  // Output peripheral signal
  logic [31:0] o_per_data;
  logic o_buffer_wren;

  // Input peripheral signal
  logic [31:0] i_per_data;
  
  //input buffer instantiation

  input_buffer IN_BUFF (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .addr_i(internal_addr),
      .io_sw_i(i_io_sw),
      .io_btn_i(i_io_btn),
      .o_ld_data(i_per_data)
  );

  //output instantiation

  output_buffer OUT_BUFF (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .i_addr(internal_addr),
      .i_wr_data(i_st_data),
      .i_wr_en(o_buffer_wren),
      .o_ld_data(o_per_data),
      .o_io_ledr(o_io_ledr),
      .o_io_ledg(o_io_ledg),
      .o_io_hex0(o_io_hex0),
      .o_io_hex1(o_io_hex1),
      .o_io_hex2(o_io_hex2),
      .o_io_hex3(o_io_hex3),
      .o_io_hex4(o_io_hex4),
      .o_io_hex5(o_io_hex5),
      .o_io_hex6(o_io_hex6),
      .o_io_hex7(o_io_hex7),
      .o_io_lcd(o_io_lcd)
  );

  assign internal_addr = i_lsu_addr[15:0];

  logic data_mem_en, o_per_en, i_per_en;

  always_comb begin
    data_mem_en = (internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF);
    o_per_en = (internal_addr >= 16'h7000 && internal_addr <= 16'h703F);
    i_per_en = (internal_addr >= 16'h7800 && internal_addr <= 16'h781F);
    case({data_mem_en, o_per_en, i_per_en})
      3'b100: o_ld_data = data_out;
      3'b010: o_ld_data = o_per_data;
      3'b001: o_ld_data = i_per_data;
      default: o_ld_data = 32'd0;
    endcase
  end


  assign dmem_wren = (data_mem_en && i_lsu_wren);
  assign o_buffer_wren = (o_per_en && i_lsu_wren);
  logic [15:0] mem_addr;    
  
  // Calculate internal byte address by subtracting 0x2000 from addr_i
  assign mem_addr = i_lsu_addr[15:0] - 16'h2000;
  assign SRAM_OE_N = 1'b0;
  
 // sram instantiation
 sram_IS61WV25616_controller_32b_3lr sram (
 	  .i_ADDR   (mem_addr),
	  .i_WDATA  (i_st_data),
	  .i_BMASK  (byte_en),
	  .i_WREN   (dmem_wren),
	  .i_RDEN   (1'b1),
	  .o_RDATA  (data_out),
	  .o_ACK    (i_ACK),

	  .SRAM_ADDR(SRAM_ADDR),
	  .SRAM_DQ  (SRAM_DQ),
	  .SRAM_CE_N(SRAM_CE_N),
	  .SRAM_WE_N(SRAM_WE_N),
	  .SRAM_LB_N(SRAM_LB_N),
	  .SRAM_UB_N(SRAM_UB_N),
	  .SRAM_OE_N(),
	  .i_clk(i_clk),
	  .i_reset(i_rst_n)
);
 assign i_stall = ((internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF)&&((instr==7'b0100011)||(instr==7'b0000011)))? ~i_ACK : 1'b0;

  // Write operation
  
  always_comb begin 
     case(i_lsu_op)
         3'b000: byte_en = 4'b0001;
         3'b100: byte_en = 4'b0001;   
         3'b001: byte_en = 4'b0011;
         3'b101: byte_en = 4'b0011;
         3'b010: byte_en = 4'b1111;
         default: byte_en = 4'b1111;
     endcase
   end

  
	endmodule
  
  /*data_memory dmem (
    .i_clk(i_clk),
    .i_lsu_addr(mem_addr),
    .i_wdata(mem_in),
    // .bmask(byte_en),
    .wren(dmem_wren),
    .o_data_dmem(mem_out)
  );

  always_comb begin
    case (i_lsu_op)
      3'b000:  data_out = {{24{mem_out[7]}}, mem_out[7:0]};  // LB
      3'b001:  data_out = {{16{mem_out[15]}}, mem_out[15:0]};  // LH
      3'b010:  data_out = mem_out;  // LW
      3'b100:  data_out = {24'b0, mem_out[7:0]};  // LBU
      3'b101:  data_out = {16'b0, mem_out[15:0]};  // LHU
      default: data_out = 32'b0;
    endcase
  end

  always_comb begin
    case (i_lsu_op)
      3'b000:  mem_in = {mem_out[31:8], i_st_data[7:0]};  // sb
      3'b001:  mem_in = {mem_out[31:16], i_st_data[15:0]};  // sh
      3'b010:  mem_in = i_st_data;  // sw
      default: mem_in = 32'b0;
    endcase
  end
  
  assign i_stall = ((internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF)&&((instr==7'b0100011)||(instr==7'b0000011)))? ~i_ACK : 1'b0;*/