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
    output logic      [31:0] o_io_ledg,
    output logic      [31:0] o_io_ledr,
    output logic      [6:0]  o_io_hex0,
    output logic      [6:0]  o_io_hex1,
    output logic      [6:0]  o_io_hex2,
    output logic      [6:0]  o_io_hex3,
    output logic      [6:0]  o_io_hex4,
    output logic      [6:0]  o_io_hex5,
    output logic      [6:0]  o_io_hex6,
    output logic      [6:0]  o_io_hex7
    // output logic             i_stall
);

  logic [15:0] internal_addr;

  logic [31:0] new_data_in;  //data in in case of store
  // logic [3:0] byte_en;
  // Dmem signal
  logic [3:0] [7:0] data_out;
  logic dmem_wren;
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

    if(i_lsu_wren) o_ld_data = 32'd0;
    else begin
      case({data_mem_en, o_per_en, i_per_en})
        3'b001: o_ld_data = data_out;
        3'b010: o_ld_data = o_per_data;
        3'b100: o_ld_data = i_per_data;
        default: o_ld_data = 32'd0;
      endcase
    end
  end

  assign dmem_wren = (data_mem_en && i_lsu_wren);
  assign o_buffer_wren = (o_per_en && i_lsu_wren);
  logic [15:0] mem_addr;    
  
  // Calculate internal byte address by subtracting 0x2000 from addr_i
  assign mem_addr = i_lsu_addr[15:0] - 16'h2000;
  
  // Write operation
  
  // always_comb begin 
  //   case(i_lsu_op)
  //       3'b000: byte_en = 4'b0001;
  //       3'b100: byte_en = 4'b0001;   
  //       3'b001: byte_en = 4'b0011;
  //       3'b101: byte_en = 4'b0011;
  //       3'b010: byte_en = 4'b1111;
  //       default: byte_en = 4'b1111;
  //   endcase
  // end

  data_memory dmem (
    .i_clk(i_clk),
    .i_lsu_addr(mem_addr),
    .i_wdata(i_st_data),
    // .bmask(byte_en),
    .wren(dmem_wren),
    .o_data_dmem(data_out)
  );
  
  // assign i_stall = ((internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF)&&((instr==7'b0100011)||(instr==7'b0000011)))? ~i_ACK : 1'b0;

endmodule