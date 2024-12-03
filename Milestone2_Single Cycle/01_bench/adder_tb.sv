module add_sub_tb #(
    parameter DATA_SIZE = 32
)();
    logic [DATA_SIZE-1:0] a, b;
    logic [DATA_SIZE-1:0] sum;
    logic select;
    logic c;
    logic [DATA_SIZE-1:0] expected;
    int sub_errors = 0;
    int add_errors = 0; 

    add_sub #(DATA_SIZE) dut(a, b, select, sum);

    initial begin
        $dumpfile("add_sub_tb.vcd");
        $dumpvars(0, add_sub_tb);
    end

    initial begin
        for(int i = 0; i < 2**10; i++) begin
            a = $urandom;
            b = $urandom;
            select = $urandom_range(0, 1);
            #5;
            expected = (select) ? a - b : a + b;
            if (sum !== expected) begin
                $display("Error: a = %d, b = %d, select = %b, sum = %b, expected = %b",
                        a, b, select, sum, expected);
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