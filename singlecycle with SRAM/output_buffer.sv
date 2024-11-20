module output_buffer (
  // Inputs:
  input logic i_clk,
  input logic i_rst_n,
  input logic [15:0] i_addr,
  input logic [31:0] i_wr_data,
  input logic i_wr_en,
  // Outputs:
  output logic [31:0] o_ld_data,
  output logic [17:0] o_io_ledr,
  output logic [8:0] o_io_ledg,
  output logic [6:0] o_io_hex0,
  output logic [6:0] o_io_hex1,
  output logic [6:0] o_io_hex2,
  output logic [6:0] o_io_hex3,
  output logic [6:0] o_io_hex4,
  output logic [6:0] o_io_hex5,
  output logic [6:0] o_io_hex6,
  output logic [6:0] o_io_hex7,
  output logic [31:0] o_io_lcd
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
  if (!i_rst_n) begin
    // Reset assignments
    o_io_ledr <= 18'b0;
    o_io_ledg <= 9'b0;
    o_io_hex0 <= 7'b0;
    o_io_hex1 <= 7'b0;
    o_io_hex2 <= 7'b0;
    o_io_hex3 <= 7'b0;
    o_io_hex4 <= 7'b0;
    o_io_hex5 <= 7'b0;
    o_io_hex6 <= 7'b0;
    o_io_hex7 <= 7'b0;
    o_io_lcd  <= 32'b0;
  end else if (i_wr_en) begin
    case (i_addr)
        16'h7000: o_io_ledr <= i_wr_data[26:9];
        16'h7010: o_io_ledg <= i_wr_data[8:0];
     // 7-segment LEDs (HEX0 to HEX3)
        16'h7023: o_io_hex3 <= i_wr_data[6:0];
        16'h7022: o_io_hex2 <= i_wr_data[6:0];
        16'h7021: o_io_hex1 <= i_wr_data[6:0];
        16'h7020: o_io_hex0 <= i_wr_data[6:0];
        16'h7024: o_io_hex4 <= i_wr_data[6:0];
        16'h7025: o_io_hex5 <= i_wr_data[6:0];
        16'h7026: o_io_hex6 <= i_wr_data[6:0];
        16'h7027: o_io_hex7 <= i_wr_data[6:0];
        16'h7030: o_io_lcd <= i_wr_data;
      default: begin
        o_io_ledr <= 18'b0;
        o_io_ledg <= 9'b0;
        o_io_hex0 <= 7'b0;
        o_io_hex1 <= 7'b0;
        o_io_hex2 <= 7'b0;
        o_io_hex3 <= 7'b0;
        o_io_hex4 <= 7'b0;
        o_io_hex5 <= 7'b0;
        o_io_hex6 <= 7'b0;
        o_io_hex7 <= 7'b0;
        o_io_lcd  <= 32'b0;
      end
    endcase
  end
end

// Combinational logic for reading data
always_comb begin
  case (i_addr)
    16'h7000: o_ld_data = o_io_ledr;  // Red LEDs
    16'h7010: o_ld_data = o_io_ledg;  // Green LEDs
    16'h7020: o_ld_data = {25'b0, o_io_hex0};
      16'h7021: o_ld_data = {25'b0, o_io_hex1};
      16'h7022: o_ld_data = {25'b0, o_io_hex2};
      16'h7023: o_ld_data = {25'b0, o_io_hex3};
      16'h7024: o_ld_data = {25'b0, o_io_hex4};
      16'h7025: o_ld_data = {25'b0, o_io_hex5};
      16'h7026: o_ld_data = {25'b0, o_io_hex6};
      16'h7027: o_ld_data = {25'b0, o_io_hex7};
      16'h7030: o_ld_data = o_io_lcd;  // LCD
    default:  o_ld_data = 32'd0;  // Ensure default assignment
  endcase
end
endmodule
