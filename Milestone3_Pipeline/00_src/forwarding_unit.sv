module forwarding_unit (
    input logic rd_wren_M, rd_wren_W,
    input logic [4:0] rs1_addr_D, rs2_addr_D, rs1_addr_E, rs2_addr_E,
    input logic [4:0] rd_addr_E, rd_addr_M, rd_addr_W,
    output logic [1:0] ForwardA, ForwardB
);

always_comb begin
// Forwarding logic for rs1
    if (rd_wren_M && rd_addr_M != 0 && (rd_addr_M == rs1_addr_D)) begin
        ForwardA = 2'b10;
    end
    else if (rd_wren_W && rd_addr_W != 0 && (rd_addr_W == rs1_addr_D)) begin
        ForwardA = 2'b01;
    end
    else begin
        ForwardA = 2'b00;
    end
// Forwarding logic for rs2
    if (rd_wren_M && rd_addr_M != 0 && (rd_addr_M == rs2_addr_D)) begin
        ForwardB = 2'b10;
    end
    else if (rd_wren_W && rd_addr_W != 0 && (rd_addr_W == rs2_addr_D)) begin
        ForwardB = 2'b01;
    end
    else begin
        ForwardB = 2'b00;
    end

endmodule 