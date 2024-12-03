module hazard_detection (
    input logic EX_mem_wren,
    input logic [4:0] D_reg1_addr, D_reg2_addr, E_rd_addr,
    output logic stall, enable
);

always_comb begin
    if (EX_mem_wren && (E_rd_addr != 0) && ((E_rd_addr == D_reg1_addr) || (E_rd_addr == D_reg2_addr))) begin
        stall = 1'b1;
        enable = 1'b0;
    end
    else begin
        stall = 1'b0;
        enable = 1'b1;
    end
end

endmodule