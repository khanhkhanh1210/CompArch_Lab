module input_buffer (

	input wire [31:0] i_io_sw,   
	input wire [3:0] i_io_btn,    
	input wire i_clk, i_rst, addr,  // addr[4]
	output reg [31:0] input_buffer_out    

);
	wire [31:0] i_io_btn_in;
    assign i_io_btn_in = {28'b0, i_io_btn};
	
	wire [31:0] buttons_buf_out;
	wire [31:0] switch_buf_out;
register buttons_buf(
    .clk    (i_clk),
    .rst    (i_rst),
    .en	    (1'b1),
    .D	    (i_io_btn_in),
    .Q	    (buttons_buf_out)
	);
register switch_buf(
    .clk    (i_clk),
    .rst    (i_rst),
    .en	    (1'b1),
    .D	    (i_io_sw),
    .Q	    (switch_buf_out)
	);
mux_2to1 mux(
    .d1(buttons_buf_out),
    .d0(switch_buf_out),
    .sel(addr),
    .y(input_buffer_out)
    );
endmodule
