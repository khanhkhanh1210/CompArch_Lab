module imem (
    input  logic [31:0] i_imem_addr ,  // Địa chỉ đầu vào 32-bit
    input  logic        i_stop      ,  // Tín hiệu dừng
    output logic [31:0] o_imem_data    // Dữ liệu đầu ra 32-bit (1 câu lệnh)
);

    
    logic [7:0] mem [1024:0];

    // Khởi tạo bộ nhớ từ file `instruction.mem` khi reset
	 initial begin
		$readmemh("mem.dump", mem);
	 end`
	 
    // 32bit mem saved in 4 locations 8bit mem
    always_comb begin
        o_imem_data = {mem[i_imem_addr], mem[i_imem_addr+1], mem[i_imem_addr+2], mem[i_imem_addr+3]};
    end

endmodule : imem