module alu_tb #(
    parameter WIDTH = 32
)

    logic   [3:0]           i_alu_op;
    logic   [WIDTH-1:0]     i_operand_a;
    logic   [WIDTH-1:0]     i_operand_b;
  
    
    logic   [WIDTH-1:0]     o_alu_data;
    logic                   o_bru_exp;

    logic [WIDTH-1:0] expected;

    type

    alu #(WIDTH) dut(
        .i_alu_op(i_alu_op),
        .i_operand_a(i_operand_a),
        .i_operand_b(i_operand_b),
        .o_alu_data(o_alu_data),
        .o_bru_exp(o_bru_exp)
    );

    typedef enum logic [3:0] { 
        A_ADD  = 4'b0000 ,
        A_SUB  = 4'b0001 ,
        A_SLT  = 4'b0010 ,
        A_SLTU = 4'b0011 ,
        A_XOR  = 4'b0100 ,
        A_OR   = 4'b0101 ,
        A_AND  = 4'b0110 ,
        A_SLL  = 4'b0111 ,
        A_SRL  = 4'b1000 ,
        A_SRA  = 4'b1001
    } OPCODE;

    OPCODE i_alu_op[3:0];

    always_comb begin
        case(i_alu_op)
                A_ADD: expected = i_operand_a + i_operand_b;
                A_SUB: expected = i_operand_a - i_operand_b;
                A_SLT: expected = ($signed(i_operand_a) < $signed(i_operand_b)) ? 1 : 0;
                A_SLTU: expected = (i_operand_a < i_operand_b) ? 1 : 0;
                A_XOR: expected = i_operand_a ^ i_operand_b;
                A_OR: expected = i_operand_a | i_operand_b
                A_AND: expected = i_operand_a & i_operand_b;
                A_SLL: expected = i_operand_a << i_operand_b;
                A_SRL: expected = i_operand_a >> i_operand_b;
                //arithmetic shift right
                A_SRA: expected = $signed(i_operand_a) >>> i_operand_b;
                default: expected = 0;
        endcase
    end

    initial begin
        for(int i = 0; i < 2**(32 * 2 + 4); i++) begin
            {i_alu_op, i_operand_a, i_operand_b} = $urandom;
            #5;
            if(o_alu_data !== expected) begin
                $display("Error: i_alu_op = %d, i_operand_a = %d, i_operand_b = %d, o_alu_data = %d, expected = %d",
                        i_alu_op, i_operand_a, i_operand_b, o_alu_data, expected);
            end
        end
    end

endmodule
