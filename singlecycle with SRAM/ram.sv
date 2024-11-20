module ram(
    input logic i_clk,
    input logic [31:0] i_lsu_addr,
    input logic wren,
    input logic [31:0] i_wdata,
    output logic [31:0] o_data_dmem
);
    
    logic [31:0] dmem [1024:0];
    
    initial begin
		$readmemh("C:/Users/Public/singlecycle/CompArch_Lab/Milestone2_Single Cycle/03_test/dump/instruction.mem", dmem);
	end

    
    always_ff @(posedge i_clk) begin
        if (wren) begin
            dmem[i_lsu_addr] <= i_wdata;
        end
    end

    always_comb begin
        o_data_dmem = dmem[i_lsu_addr];
    end
endmodule
