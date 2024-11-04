module add_sub_tb #(
    parameter DATA_SIZE = 4
)();
    logic [DATA_SIZE-1:0] a, b;
    logic [DATA_SIZE-1:0] sum;
    logic select;
    logic c;
    logic [DATA_SIZE:0] expected;
    int sub_errors = 0;
    int add_errors = 0;

    add_sub #(DATA_SIZE) dut(a, b, select, sum, c);

    initial begin
        for(int i = 0; i < 2**(DATA_SIZE*2 + 1); i++) begin
            {a, b, select} = $urandom;
            #5;
            expected = (select) ? a - b : a + b;
            if ({c,sum} !== expected) begin
                $display("Error: a = %d, b = %d, select = %b, sum = %b, expected = %b",
                        a, b, select, {c, sum}, expected);
                if (select) begin
                    sub_errors++;
                end
                else begin
                    add_errors++;
                end
            end
        end
        $display("Test finished with %3d subtraction errors.", sub_errors);
        $display("Test finished with %3d addition errors.", add_errors);
    end
endmodule