module inst_memory #(
  parameter int unsigned IMEM_W = 14    // 2^IMEM_W = 16K
) (
  input  logic [IMEM_W-1:0] paddr_i ,
  output logic [31:0]       prdata_o,

  input  logic              clk_i   ,
  input  logic              rst_ni
  
);



  logic [3:0][7:0] imem [2**(IMEM_W-2)-1:0];


  initial begin
    $readmemh("C:/Users/doand/OneDrive/Desktop/singlecycle/memory/instmem.data.sim",imem);
  end



  always_comb begin : proc_data
    prdata_o = imem[paddr_i[IMEM_W-1:2]][3:0];
  end

endmodule : inst_memory
