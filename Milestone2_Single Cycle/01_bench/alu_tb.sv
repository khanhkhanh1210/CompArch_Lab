module alu_tb #(
    parameter WIDTH = 32
);

    logic   [3:0]           i_alu_op;
    logic   [WIDTH-1:0]     i_operand_a;
    logic   [WIDTH-1:0]     i_operand_b;
  
    
    logic   [WIDTH-1:0]     o_alu_data;
    logic                   o_insn_vld;

    logic [WIDTH-1:0] expected;

    

    alu #(WIDTH) dut(
        .i_alu_op(i_alu_op),
        .i_operand_a(i_operand_a),
        .i_operand_b(i_operand_b),
        .o_alu_data(o_alu_data),
        .o_insn_vld(o_insn_vld)
    );

    localparam A_ADD  = 4'b0000;
    localparam A_SUB  = 4'b1000;
    localparam A_XOR  = 4'b0100;
    localparam A_OR   = 4'b0110;
    localparam A_AND  = 4'b0111;
    localparam A_SLL  = 4'b0001;
    localparam A_SRL  = 4'b0101;
    localparam A_SRA  = 4'b1101;
    localparam A_SLT  = 4'b0010;
    localparam A_SLTU = 4'b0011;

    always_comb begin
        case (i_alu_op)
            A_ADD: expected = i_operand_a + i_operand_b;
            A_SUB: expected = i_operand_a - i_operand_b;
            A_SLT: expected = ($signed(i_operand_a) < $signed(i_operand_b[4:0])) ? 1 : 0;
            A_SLTU: expected = (i_operand_a < i_operand_b) ? 1 : 0;
            A_XOR: expected = i_operand_a ^ i_operand_b;
            A_OR: expected = i_operand_a | i_operand_b;
            A_AND: expected = i_operand_a & i_operand_b;
            A_SLL: expected = i_operand_a << i_operand_b;
            A_SRL: expected = i_operand_a >> i_operand_b;
            A_SRA: expected = $signed(i_operand_a) >>> i_operand_b;
            default: expected = 0;
        endcase
    end

    initial begin
        for(int i = 0; i < 16; i = i + 1) begin    
            i_operand_a = $urandom;
            i_operand_b = $urandom;
            for (int i = 0; i < 16; i++) begin
                i_alu_op = i;
                #10;
                if (o_alu_data !== expected) begin
                    $display("Error: i_alu_op = %b, i_operand_a = %d, i_operand_b = %d, o_alu_data = %d, expected = %d",
                            i_alu_op, i_operand_a, i_operand_b, o_alu_data, expected);
                end
            end
            else
            $display ("pass all test");
        end
    end

endmodule
