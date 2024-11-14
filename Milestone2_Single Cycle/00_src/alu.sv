module alu
#(
    // parameter; opcode definition
    parameter WIDTH = 32
)
(
    input   logic   [3:0]           i_alu_op,
    input   logic   [WIDTH-1:0]     i_operand_a,
    input   logic   [WIDTH-1:0]     i_operand_b,
    
    output  logic   [WIDTH-1:0]     o_alu_data,
    output  logic                   o_insn_vld
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
        
    logic [4:0]         shift_number;
    logic               blarger;
    logic [WIDTH-1:0]   add_sub_result;
    logic [WIDTH-1:0]   barrel_shifter_result;
    


    assign shift_number = i_operand_b[4:0] ;

    add_sub  #(32) add_sub(
        .X      (i_operand_a),
        .Y      (i_operand_b),
        .Cin    (i_alu_op[3]),
        .S      (add_sub_result)
    );

    brc #(WIDTH) compare_32bit_s(
        .i_rst1_data(i_operand_a),
        .i_rst2_data(i_operand_b),
        .i_brc_un(!i_alu_op[0]),
        .o_brc_equal(),
        .o_brc_less(blarger)
    );

    barrel_shifter  barrel_shifter(
        .data       (i_operand_a),
        .sel        (i_alu_op[3:2]),
        .amount     (shift_number),
        .result     (barrel_shifter_result)
    );

    always_comb begin
        case(i_alu_op)
            A_ADD: begin
                o_alu_data = add_sub_result;
                o_insn_vld = 1;
            end
            A_SUB: begin
                o_alu_data = add_sub_result;
                o_insn_vld = 1;
            end
            A_SLT: begin
                o_alu_data = {31'b0,blarger};     
                o_insn_vld = 1;
            end         
            A_SLTU: begin
                o_alu_data = {31'b0,blarger};
                o_insn_vld = 1;
            end
            A_XOR: begin
                o_alu_data = i_operand_a ^ i_operand_b;
                o_insn_vld = 1;
            end
            A_OR: begin
                o_alu_data = i_operand_a | i_operand_b;
                o_insn_vld = 1;
            end
            A_AND: begin
                o_alu_data = i_operand_a & i_operand_b;
                o_insn_vld = 1;
            end
            A_SLL: begin
                o_alu_data = barrel_shifter_result;
                o_insn_vld = 1;
            end
            A_SRL: begin
                o_alu_data = barrel_shifter_result;
                o_insn_vld = 1;
            end
            A_SRA: begin
                o_alu_data = barrel_shifter_result;
                o_insn_vld = 1;
            end
            default: begin
                o_alu_data = 0;
                o_insn_vld = 0;
            end
        endcase
    end
endmodule
