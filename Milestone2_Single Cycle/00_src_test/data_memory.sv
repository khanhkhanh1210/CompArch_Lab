module data_memory (
    input logic i_clk,
    input logic [15:0] i_lsu_addr,
    input logic wren,
    // input logic [3:0] bmask,
    input logic [31:0] i_wdata,
    output logic [31:0] o_data_dmem
);
    logic [31:0] dmem [2047:0];
    always_ff @(posedge i_clk) begin
        if (wren) begin
            dmem[i_lsu_addr] <= i_wdata;
        end
    end

    always_comb begin
        o_data_dmem = dmem[i_lsu_addr];
    end

    // always_ff @(posedge i_clk) begin
    //     if (wren) begin
    //         case (bmask)
    //             4'b0001: dmem[i_lsu_addr][ 7: 0] <= i_wdata[ 7: 0];
    //             4'b0010: dmem[i_lsu_addr][15: 8] <= i_wdata[15: 8];
    //             4'b0100: dmem[i_lsu_addr][23:16] <= i_wdata[23:16];
    //             4'b1000: dmem[i_lsu_addr][31:24] <= i_wdata[31:24];
    //             default: dmem[i_lsu_addr] <= i_wdata;
    //         endcase
    //     end
    // end

    // always_comb begin
    //     case (bmask)
    //         4'b0001: o_data_dmem = dmem[i_lsu_addr][ 7: 0];
    //         4'b0010: o_data_dmem = dmem[i_lsu_addr][15: 8];
    //         4'b0100: o_data_dmem = dmem[i_lsu_addr][23:16];
    //         4'b1000: o_data_dmem = dmem[i_lsu_addr][31:24];
    //         default: o_data_dmem = dmem[i_lsu_addr];
    //     endcase
    // end
endmodule