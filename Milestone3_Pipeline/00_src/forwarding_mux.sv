module forwarding_mux (
    input logic [1:0] mux_sel,
    input logic [31:0] EX_regdata, MEM_regdata, WB_regdata,
    output logic [31:0] data_out
);

always_comb begin
    case(mux_sel)
        2'b00: data_out = EX_regdata;
        2'b01: data_out = WB_regdata;
        2'b10: data_out = MEM_regdata;
        default: data_out = EX_regdata;
    endcase
end

endmodule