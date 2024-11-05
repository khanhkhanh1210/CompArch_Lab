`timescale 1ns / 1ns

module singlecycle_tb;
logic           clk_i;
logic           rst_ni;
logic   [31:0]  alu_data_check;
logic   [31:0]  rs1_data_check;
logic   [31:0]  rs2_data_check;
logic   [31:0]       imm_check;
/*logic   [31:0]  io_sw_i  ;
logic   [31:0]  io_ledg_o;
logic   [31:0]  io_ledr_o;
logic   [31:0]  io_hex0_o;
logic   [31:0]  io_hex1_o;
logic   [31:0]  io_hex2_o;
logic   [31:0]  io_hex3_o;
logic   [31:0]  io_hex4_o;
logic   [31:0]  io_hex5_o;
logic   [31:0]  io_hex6_o;
logic   [31:0]  io_hex7_o;*/ 

//call ins
singlecycle  dut (/*.io_sw_i(io_sw_i)    ,
                
    .io_ledg_o(io_ledg_o),
		.io_hex1_o(io_hex1_o),
		.io_hex2_o(io_hex2_o),
		.io_hex3_o(io_hex3_o),
		.io_hex4_o(io_hex4_o),
		.io_hex5_o(io_hex5_o),
		.io_hex6_o(io_hex6_o),
		.io_hex7_o(io_hex7_o),*/
		.instr_check (instr_check),
		.alu_data_check(alu_data_check),
		.rs1_data_check(rs1_data_check),
		.rs2_data_check(rs2_data_check),
		.clk_i(clk_i)        ,
	  .rst_ni(rst_ni)
	);

//Input signal setup
  initial begin
    clk_i = 1'b0;
    forever #10 clk_i = ~clk_i;
  end
  
  initial begin
  #5000
  $finish;
  end
  
integer check = 0; 

    always @ (*)
    begin 

        #20; 
        if (alu_data_check == 32'h00000000) // and
        begin 
            check = check + 1;
			$display ("AND pass");
        end

        #10; 
        if (alu_data_check == 32'h00000005) // addi
        begin 
            check = check + 1; 
			$display ("ADDI pass");
        end

       

        $display("%s%d", "The number of correct test case is:" , check); 

    end
  
initial begin
        clk_i   = 1'b0;
	    rst_ni   = 1'b0;
#15     rst_ni = 1'b1;


end
   
endmodule