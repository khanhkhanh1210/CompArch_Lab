module testbench #(
    parameter DATA_SIZE = 8
) ();
    logic[DATA_SIZE-1:0] a, b;
    logic eq, lt;
    logic un;

    logic[1:0] set_eq;
    logic[1:0] expected;
    int num_errors = 0;

    comparator #(DATA_SIZE) dut(a, b, un, eq, lt);

    initial begin
        for (int i = 0; i < 2**DATA_SIZE; i++) begin
            {a, b, set_eq, un} = $urandom;
            if (set_eq === 0)     // 25% chance to set b = a
                b = a;
        // compare sign numbers
            if (un == 0) begin
                expected = {a == b, a < b};
            end else begin
                expected = {a == b, $signed(a) < $signed(b)};
            end
            
            #1;
            if (expected !== {eq, lt}) begin
                $display("Error: a = %b, b = %b, result = %b, expected = %b",
                        a, b, {eq, lt}, expected);
                num_errors++;
            end
            #1;
        end
        $display("Test finished with %3d errors.", num_errors);
    end
endmodule