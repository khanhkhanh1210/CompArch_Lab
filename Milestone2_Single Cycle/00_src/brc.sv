module brc #(
    parameter DATA_SIZE = 32
)(
    input logic [DATA_SIZE-1:0] i_rst1_data,   // Data from the first register
    input logic [DATA_SIZE-1:0] i_rst2_data,   // Data from the second register
    input logic                 i_brc_un,      // Comparison mode (1 if signed, 0 if unsigned)
    output logic                o_brc_equal,   // Output is 1 if rst1 == rst2
    output logic                o_brc_less     // Output is 1 if rst1 < rst2, 0 otherwise
);
    logic equal, less;
    comparator #(DATA_SIZE) comp(i_rst1_data, i_rst2_data, equal, less);

    always_comb begin
        if (i_brc_un) begin
            o_brc_less = (i_rst1_data[DATA_SIZE-1] & ~i_rst2_data[DATA_SIZE-1]) |               // If signed, compare sign bits
                    (~(i_rst1_data[DATA_SIZE-1] ^ i_rst2_data[DATA_SIZE-1]) & less);      
        end else begin
            o_brc_less = less;
        end
        o_brc_equal = equal;
    end

endmodule
