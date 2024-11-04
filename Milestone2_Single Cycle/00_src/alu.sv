module alu
#(
    // parameter; opcode definition
    parameter WIDTH = 32,
)
(
    input   logic   [3:0]           i_alu_op,
    input   logic   [WIDTH-1:0]     i_operand_a,
    input   logic   [WIDTH-1:0]     i_operand_b,
  
    
    output  logic   [WIDTH-1:0]     o_alu_data,
//    output  logic                   o_bru_exp
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

    logic [4:0]         shift_number;
    logic               blarger_u;
    logic               blarger_s;
    logic [63:0]        alu_data_temp;
    logic [63:0]        alu_data_temp2;


    assign shift_number = i_operand_b[4:0] ;

    add_sub   add_sub(
        .X      (i_operand_a),
        .Y      (i_operand_b),
        .Cin    (i_alu_op[0]),
        .S      (o_alu_data)
    );

    compare_32bit_u compare32u_0(
        .a_i        (i_operand_a[31:0]),
        .b_i        (i_operand_b[31:0]),
        .equal_o    (),
        .alarger_o  (),
        .blarger_o  (blarger_u)
    );
        
    compare_32bit_s compare32s_1(
        .a_i        (i_operand_a[31:0]),
        .b_i        (i_operand_b[31:0]),
        .equal_o    (),
        .alarger_o  (),
        .blarger_o  (blarger_s)
    );

    barrel_shifter  barrel_shifter(
        .data       (i_operand_a),
        .sel        (i_alu_op[1:0]),
        .amount     (shift_number),
        .result     (o_alu_data)
    );

    assign blarger_s = compare_32bit_s.blarger_o;
    assign blarger_u = compare_32bit_u.blarger_o;

    always_comb begin
        case(i_alu_op)
            A_ADD: o_alu_data = add_sub.S;
            A_SUB: o_alu_data = add_sub.S;
            A_SLT: o_alu_data = {31'b0,blarger_s};              
            A_SLTU: o_alu_data = {31'b0,blarger_u};
            A_XOR: o_alu_data = i_operand_a ^ i_operand_b;
            A_OR: o_alu_data = i_operand_a | i_operand_b;
            A_AND: o_alu_data = i_operand_a & i_operand_b;
            A_SLL: o_alu_data = barrel_shifter.result;
            A_SRL: o_alu_data = barrel_shifter.result;
            A_SRA: o_alu_data = barrel_shifter.result;
            default: o_alu_data = 0;
        endcase
    end
endmodule
