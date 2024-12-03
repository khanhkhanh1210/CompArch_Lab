module comparator #(
    parameter DATA_SIZE = 32
)(
    input logic [DATA_SIZE-1:0] i_rst1_data,   // Data from the first register
    input logic [DATA_SIZE-1:0] i_rst2_data,   // Data from the second register
    output logic                o_brc_equal,   // Output is 1 if rst1 == rst2
    output logic                o_brc_less     // Output is 1 if rst1 < rst2, 0 otherwise
);
    localparam DATA_SIZE_HALF = DATA_SIZE / 2;

    generate
        if (DATA_SIZE == 1) begin
            // Base case: compare 1 bit
            assign o_brc_equal = i_rst1_data ~^ i_rst2_data;
            assign o_brc_less = (~i_rst1_data & i_rst2_data);
        end
        else begin
            // Recursive case: split and compare DATA_SIZE_HALF bits at a time
            logic ehigh, lhigh, elow, llow;
            comparator #(DATA_SIZE_HALF) highcomp(
                .i_rst1_data(i_rst1_data[DATA_SIZE-1:DATA_SIZE_HALF]),
                .i_rst2_data(i_rst2_data[DATA_SIZE-1:DATA_SIZE_HALF]),
                .o_brc_equal(ehigh),
                .o_brc_less(lhigh)
            );
            comparator #(DATA_SIZE_HALF) lowcomp(
                .i_rst1_data(i_rst1_data[DATA_SIZE_HALF-1:0]),
                .i_rst2_data(i_rst2_data[DATA_SIZE_HALF-1:0]),
                .o_brc_equal(elow),
                .o_brc_less(llow)
            );

            // Merge results
            assign o_brc_equal = ehigh & elow;
            assign o_brc_less = lhigh | ehigh & llow;
        end
    endgenerate
endmodule
