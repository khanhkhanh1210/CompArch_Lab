module lsu (  // A memory for loading(read) or storing(write) data words
    input logic [31:0] i_lsu_addr, i_st_data,
    input logic i_lsu_wren,
    input logic i_clk,
    input logic i_rst_n,
    
    input logic [6:0] instr,
    input logic       [31:0] i_io_sw,
    input logic       [3:0]  i_io_btn,
    input logic [2:0] i_lsu_op,

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
    output logic      [6:0]  o_io_hex7,
    output [17:0] SRAM_ADDR,
    inout [15:0] SRAM_DQ,
    output SRAM_CE_N, SRAM_WE_N, SRAM_LB_N, SRAM_UB_N, SRAM_OE_N,
    output i_stall
);

  logic [15:0] internal_addr;

  logic [31:0] new_data_in;  //data in in case of store
  logic [3:0] byte_en;
  // Dmem signal
  logic [3:0] [7:0] data_memory;
  logic dmem_wren;
  // Output peripheral signal
  logic [31:0] o_per_data;
  logic o_buffer_wren;

  // Input peripheral signal
  logic [31:0] i_per_data;

  logic [31:0] new_data_o;
  logic i_ACK;

  
  //input buffer instantiation

  input_buffer IN_BUFF (
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
      .i_wr_data(new_data_in),
      .i_wr_en(o_buffer_wren),
      .o_ld_data(o_per_data),
      .o_io_ledr(io_ledr_o),
      .o_io_ledg(io_ledg_o),
      .o_io_hex0(io_hex0_o),
      .o_io_hex1(io_hex1_o),
      .o_io_hex2(io_hex2_o),
      .o_io_hex3(io_hex3_o),
      .o_io_hex4(io_hex4_o),
      .o_io_hex5(io_hex5_o),
      .o_io_hex6(io_hex6_o),
      .o_io_hex7(io_hex7_o),
      .o_io_lcd(io_lcd_o)
  );

  assign internal_addr = i_lsu_addr[15:0];

  logic data_mem_en, o_per_en, i_per_en;
  always_comb begin
    data_mem_en = (internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF);
    o_per_en = (internal_addr >= 16'h7000 && internal_addr <= 16'h703F);
    i_per_en = (internal_addr >= 16'h7800 && internal_addr <= 16'h781F);

    if(i_lsu_wren) new_data_o = 32'd0;
    else begin
      case({data_mem_en, o_per_en, i_per_en})
        3'b001: new_data_o = data_memory;
        3'b010: new_data_o = o_per_data;
        3'b100: new_data_o = i_per_data;
        default: new_data_o = 32'd0;
      endcase
    end
  end

  assign dmem_wren = (data_mem_en && i_lsu_wren);
  assign o_buffer_wren = (o_per_en && i_lsu_wren);
  logic [31:0] mem_data;  
  logic [15:0] mem_addr;    
  
  // Calculate internal byte address by subtracting 0x2000 from addr_i
  assign mem_addr = i_lsu_addr[15:0] - 16'h2000;
  
  // Write operation
  always_comb begin
    mem_data = i_st_data;
  end

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

  sram_IS61WV25616_controller_32b_3lr  sram(
    .i_ADDR(mem_addr),
    .i_WDATA(mem_data),
    .i_BMASK(byte_en),
    .i_WREN(dmem_wren),
    .i_RDEN(!i_lsu_wren),
    .o_RDATA(data_memory),
    .o_ACK(i_ACK),
    .SRAM_ADDR(SRAM_ADDR),
    .SRAM_DQ(SRAM_DQ)  ,
    .SRAM_CE_N(SRAM_CE_N),
    .SRAM_WE_N(SRAM_WE_N),
    .SRAM_LB_N(SRAM_LB_N),
    .SRAM_UB_N(SRAM_UB_N),
    .SRAM_OE_N(SRAM_OE_N),
    .i_clk(i_clk),
    .i_reset(i_rst_n)
  );
  
  assign i_stall = ((internal_addr >= 16'h2000 && internal_addr <= 16'h3FFF)&&((instr==7'b0100011)||(instr==7'b0000011)))? ~i_ACK : 1'b0;


  always_comb begin
    case (i_lsu_op)
      3'b000:  o_ld_data = {{24{new_data_o[7]}}, new_data_o[7:0]};  // LB
      3'b001:  o_ld_data = {{16{new_data_o[15]}}, new_data_o[15:0]};  // LH
      3'b010:  o_ld_data = new_data_o;  // LW
      3'b100:  o_ld_data = {24'b0, new_data_o[7:0]};  // LBU
      3'b101:  o_ld_data = {16'b0, new_data_o[15:0]};  // LHU
      default: o_ld_data = 32'b0;
    endcase
  end

  always_comb begin
    case (i_lsu_op)
      3'b000:  new_data_in = {new_data_o[31:8], i_st_data[7:0]};  // sb
      3'b001:  new_data_in = {new_data_o[31:16], i_st_data[15:0]};  // sh
      3'b010:  new_data_in = i_st_data;  // sw
      default: new_data_in = 32'b0;
    endcase
  end
endmodule

