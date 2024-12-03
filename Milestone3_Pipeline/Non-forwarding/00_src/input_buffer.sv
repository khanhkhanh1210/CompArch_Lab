module input_buffer(
    input logic [15:0] addr_i,
    input logic        i_clk,
    input logic        i_rst_n,
    input logic [31:0] io_sw_i,
    input logic [31:0]  io_btn_i,
    output logic [31:0] o_ld_data
);

    localparam SWITCH_ADDR_START = 16'h7800;
    localparam SWITCH_ADDR_END   = 16'h780F;
    localparam BUTTON_ADDR_START = 16'h7810;
    localparam BUTTON_ADDR_END   = 16'h781F;

    logic [31:0] sw_reg;
    logic [31:0] btn_reg;
    logic btn_en;
    logic sw_en;


    // Reading from peripherals or memory based on address
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (~i_rst_n) begin
            sw_reg <= 32'h0;
            btn_reg <= 32'h0;
        end else begin
            sw_reg <= io_sw_i;
            btn_reg <= io_btn_i;
        end
    end

    always_comb begin
        sw_en = (addr_i >= SWITCH_ADDR_START && addr_i <= SWITCH_ADDR_END);
        btn_en = (addr_i >= BUTTON_ADDR_START && addr_i <= BUTTON_ADDR_END);
    end

        
    always_comb begin
        case({sw_en, btn_en})
            2'b01: o_ld_data = btn_reg;
            2'b10: o_ld_data = sw_reg;
            default: o_ld_data = 32'h0;
        endcase
    end
endmodule
