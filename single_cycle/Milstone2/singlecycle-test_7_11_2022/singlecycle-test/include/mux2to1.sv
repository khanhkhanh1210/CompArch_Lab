module mux2to1 
(
input   logic   [31:0]  in0_i,
input   logic   [31:0]  in1_i,
input   logic           sel_i,
output  logic   [31:0]  out_o
);

assign out_o = (sel_i)? in1_i : in0_i;

endmodule
