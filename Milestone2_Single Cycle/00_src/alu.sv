module alu
#(
    // parameter; opcode definition
    parameter WIDTH = 32
)
(
    input   logic   [3:0]           i_alu_op,
    input   logic   [WIDTH-1:0]     i_operand_a,
    input   logic   [WIDTH-1:0]     i_operand_b,
  
    
    output  logic   [WIDTH-1:0]     o_alu_data
//    output  logic                   o_bru_exp
);

    localparam A_ADD  = 4'b0000;
    localparam A_SUB  = 4'b0001;
    localparam A_SLT  = 4'b0010;
    localparam A_SLTU = 4'b0011;
    localparam A_XOR  = 4'b0100;
    localparam A_OR   = 4'b0101;
    localparam A_AND  = 4'b0110;
    localparam A_SLL  = 4'b0111;
    localparam A_SRL  = 4'b1000;
    localparam A_SRA  = 4'b1001;
    
    logic [4:0]         shift_number;
    logic               blarger;
    logic [63:0]        alu_data_temp;
    logic [63:0]        alu_data_temp2;


    assign shift_number = i_operand_b[4:0] ;

    add_sub   add_sub(
        .X      (i_operand_a),
        .Y      (i_operand_b),
        .Cin    (i_alu_op[0]),
        .S      (o_alu_data)
    );

    brc #(WIDTH) compare_32bit_s(
        .i_rst1_data(i_operand_a),
        .i_rst2_data(i_operand_b),
        .i_brc_un(i_alu_op[0]),
        .o_brc_equal(),
        .o_brc_less(blarger)
    );

    barrel_shifter  barrel_shifter(
        .data       (i_operand_a),
        .sel        (i_alu_op[1:0]),
        .amount     (shift_number),
        .result     (o_alu_data)
    );

    always_comb begin
        case(i_alu_op)
            A_ADD: o_alu_data = add_sub.S;
            A_SUB: o_alu_data = add_sub.S;
            A_SLT: o_alu_data = {31'b0,blarger};              
            A_SLTU: o_alu_data = {31'b0,blarger};
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
