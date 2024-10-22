module mux4to1 
(
input   logic   [31:0]  in0_i,
input   logic   [31:0]  in1_i,
input   logic   [31:0]  in2_i,
input   logic   [31:0]  in3_i,
input   logic   [1:0]   sel_i,
output  logic   [31:0]  out_o
);

always_comb begin 
    case (sel_i)
        2'b00: out_o = in0_i;
        2'b01: out_o = in1_i;
        2'b10: out_o = in2_i;
        2'b11: out_o = in3_i;
        default: out_o = 32'b0;
    endcase
end

endmodule: mux4to1
