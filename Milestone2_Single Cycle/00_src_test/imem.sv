module imem (
    input  logic        clk         ,  // Clock
    //input  logic        rst_n       ,  // Reset, active low
    input  logic [31:0] i_imem_addr ,  // Địa chỉ đầu vào 32-bit
    input  logic        i_stop      ,  // Tín hiệu dừng
    output logic [31:0] o_imem_data    // Dữ liệu đầu ra 32-bit (1 câu lệnh)
);

    
    logic [7:0] mem [2047:0];

    // Khởi tạo bộ nhớ từ file `instruction.mem` khi reset
	 initial begin
		$readmemh("mem.dump", mem);
	 end
	 always_comb begin 
		o_imem_data <= mem[i_imem_addr[31:0]];
	 end

endmodule : imem