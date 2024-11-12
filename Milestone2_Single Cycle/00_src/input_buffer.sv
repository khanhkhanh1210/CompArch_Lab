module input_buffer(
input logic [15:0] addr_i,
input logic [31:0] io_sw_i,
input logic [3:0] io_btn_i,
output logic [31:0] o_ld_data
);


localparam SWITCH_ADDR_START = 16'h7800;
localparam SWITCH_ADDR_END   = 16'h780F;
localparam BUTTON_ADDR_START = 16'h7810;
localparam BUTTON_ADDR_END   = 16'h781F;


// Reading from peripherals or memory based on address
always_comb begin
    if (addr_i >= SWITCH_ADDR_START && addr_i <= SWITCH_ADDR_END) begin
        o_ld_data = io_sw_i;  // Load data from switches
    end else if (addr_i >= BUTTON_ADDR_START && addr_i <= BUTTON_ADDR_END) begin
        o_ld_data = {28'b0, io_btn_i};  // Load data from buttons
    end else begin
        o_ld_data = 32'h0;
    end
    end

endmodule