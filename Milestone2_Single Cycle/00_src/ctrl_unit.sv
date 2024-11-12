module ctrl_unit
(
    //input 
    input   logic   [31:0]  instr,          // the current instruction 
    input   logic           br_less,        // the "less" result of the branch comparaton
    input   logic           br_equal,       // the "equal" result of the branch comparaton
    
    //output
    output  logic           pc_sel,        // select signal between pc+4:0 or pc ALU:1
    output  logic           br_un,          // 1 if the two operands are unsigned.
    output  logic           rd_wren,       // 1 if writing to the RegFile, otherwise 0
    output  logic           opa_sel,      //choose between rs1_data (0) or pc (1) to wire into operand_a of ALU.
    output  logic           opb_sel,      // choose between rs2_data (0) or imm (1) to wire into operand_b of ALU
    output  logic   [3:0]   alu_op,        // an operation that the ALU has to perform
    output  logic           mem_wren,      //1  write LSU, otherwise 0 
    output  logic   [1:0]   wb_sel,         // choose between  alu_data (0), ld_data (1), or pc_four (2) to write back into rd_data of RegFile
	output  logic           insn_vld
);

// localparam format command
    // localparam       R_FORMAT            =   7'b0110011;
    // localparam       I_FORMAT_CALCULATE  =   7'b0010011;
    localparam       IR_FORMAT           =   7'b0x10011;
    localparam       I_FORMAT_LOAD       =   7'b0000011;
    localparam       S_FORMAT            =   7'b0100011;
    localparam       B_FORMAT            =   7'b1100011;
    localparam       U_FORMAT            =   7'b0x10111;
    localparam       J_FORMAT            =   7'b110x111;
    
    // operation 
    always_comb begin 
        casex(instr[6:0])
            IR_FORMAT: begin
                insn_vld = 1'b1;
                br_un = instr[12];                        // branch signed or unsigned
                pc_sel = 1'b0;                              // select pc+4
                rd_wren = 1'b1;                             // write enable to RegFile
                opa_sel = 1'b0;                             // operand A select from rs1_data
                opb_sel = ~instr[5];                      // operand B select from rs2_data or imm
                mem_wren = 1'b0;                            // memory write disable
                wb_sel = 2'b00;                             // write back select from alu_data
                alu_op = {instr[30], instr[14:12]};     // ALU operation
            end
                                
            I_FORMAT_LOAD: begin
                insn_vld = 1'b1;
                br_un = 1'b1;                               // branch unsigned
                pc_sel = 1'b0;                              // select pc+4
                rd_wren = 1'b1;                             // write enable to RegFile
                opa_sel = 1'b0;                             // operand A select from rs1_data
                opb_sel = 1'b1;                             // operand B select from imm
                mem_wren = 1'b0;                            // memory write disable
                wb_sel = 2'b01;                             // write back select from ld_data
                alu_op = 4'b0000;                           // ADD operation
            end
                                                     
            S_FORMAT: begin
                pc_sel = 1'b0;                              // select pc+4
                br_un = 1'b1;                               // branch unsigned
                rd_wren = 1'b0;                             // write disable
                opa_sel = 1'b0;                             // operand A select from rs1_data
                opb_sel = 1'b1;                             // operand B select from imm
                mem_wren = 1'b1;                            // memory write enable
                wb_sel = 2'b00;                             // write back select from alu_data
                alu_op = 4'b0000;                           // ADD operation
                insn_vld = 1'b1;
            end
                                                     
            B_FORMAT: begin     
                insn_vld = 1'b1;
                casex(instr[14:12])
                    3'b00x: pc_sel = br_equal; // pc = pc + imm if equal
                    3'b10x: pc_sel = br_less; //  pc = pc + imm if less
                    3'b11x: pc_sel = br_less; //  pc = pc + imm if greater
                endcase
                br_un = instr[13];                        // branch signed or unsigned
                rd_wren = 1'b0;                             // write disable
                opa_sel = 1'b1;                             // operand A select from pc
                opb_sel = 1'b1;                             // operand B select from imm
                mem_wren = 1'b0;                            // memory write disable
                wb_sel = 2'b00;                             // write back select from alu_data
                alu_op = 4'b0000;                           // ADD operation
            end
            
            U_FORMAT: begin
                insn_vld = 1'b1;
                pc_sel = 1'b0;                              // select pc+4
                br_un = 1'b1;                               // branch unsigned
                rd_wren = 1'b1;                             // write enable to RegFile
                opa_sel = instr[30];                      // operand A select from pc or rs1_data
                opb_sel = 1'b1;                             // operand B select from imm
                mem_wren = 1'b0;                            // memory write disable
                wb_sel = 2'b00;                             // write back select from alu_data
                alu_op = 4'b0000;                           // ADD operation
                insn_vld = 1'b1;
            end

            J_FORMAT: begin
                insn_vld = 1'b1;
                pc_sel = 1'b1;                              // select alu_data
                br_un = 1'b1;                               // branch unsigned
                rd_wren = 1'b1;                             // write enable to RegFile
                opa_sel = instr[28];                      // operand A select from pc or rs1_data
                opb_sel = 1'b1;                             // operand B select from imm
                mem_wren = 1'b0;                            // memory write disable
                wb_sel = 2'b10;                             // write back select from pc_four
                alu_op = 4'b0000;                           // ADD operation
            end

            default: begin
                pc_sel = 1'b0;
                br_un = 1'b0;
                rd_wren = 1'b0;
                opa_sel = 1'b0;
                opb_sel = 1'b0;
                alu_op = 4'b0000;
                mem_wren = 1'b0;
                wb_sel = 2'b00;
                insn_vld = 1'b0;

            end
        endcase 
    end

endmodule: ctrl_unit
