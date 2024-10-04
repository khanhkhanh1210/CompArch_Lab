/* verilator lint_off UNUSED */
//Bits of signal are not used: 'instr_i'[31,29:15,11:7,1:0]
module ctrl_unit
#(  
    // parameter format command
    parameter       R_FORMAT            =   5'b01100,
    parameter       I_FORMAT_CALCULATE  =   5'b00100,
    parameter       I_FORMAT_LOAD       =   5'b00000,
    parameter       S_FORMAT            =   5'b01000,
    parameter       B_FORMAT            =   5'b11000,
    parameter       U_FORMAT_LUI        =   5'b01101,
    parameter       U_FORMAT_AUIPC      =   5'b00101,
    parameter       J_FORMAT_JAL        =   5'b11011,
    parameter       J_FORMAT_JALR       =   5'b11001,
    
     
    
    // parameter function in format command 
        // R_FORMAT
    parameter       ADD_SUB             =   3'b000,      
    parameter       SLL                 =   3'b001,
    parameter       SLT                 =   3'b010,
    parameter       SLTU                =   3'b011,
    parameter       XOR                 =   3'b100,
    parameter       SRL_SRA             =   3'b101,
    parameter       OR                  =   3'b110,
    parameter       AND                 =   3'b111,
        
        // I_FORMAT_CALCULATE
    parameter       ADDI                =   3'b000,
    parameter       SLTI                =   3'b010,
    parameter       SLTIU               =   3'b011,
    parameter       XORI                =   3'b100,
    parameter       ORI                 =   3'b110,
    parameter       ANDI                =   3'b111,
    parameter       SLLI                =   3'b001,
    parameter       SRLI_SRAI           =   3'b101,
        
        // I_FORMAT_LOAD
    /*
    parameter       LB                  =   3'b000,
    parameter       LH                  =   3'b001,
    parameter       LW                  =   3'b010,
    parameter       LBU                 =   3'b100,
    parameter       LHU                 =   3'b101,
        
        // S_FORMAT
    parameter       SB                  =   3'b000,
    parameter       SH                  =   3'b001,
    parameter       SW                  =   3'b010,
    */
    
        // B_FORMAT
    parameter       BEQ                 =   3'b000,
    parameter       BNE                 =   3'b001,
    parameter       BLT                 =   3'b100,
    parameter       BGE                 =   3'b101,
    parameter       BLTU                =   3'b110,
    parameter       BGEU                =   3'b111
)
(
    //input 
    //input   logic           clk_i,
    input   logic   [31:0]  instr_i,          // the current instruction 
    input   logic           bl_less_i,        // the "less" result of the branch comparaton
    input   logic           bl_equal_i,       // the "equal" result of the branch comparaton
    //output
    output  logic           bl_sel_o,        // select signal between pc+4:0 or pc ALU:1
    output  logic           bl_unsigned_o,   // 1 if the two operands are unsigned.
    output  logic           rd_wren_o,       // 1 if writing to the RegFile, otherwise 0
    output  logic           op_a_sel_o,      //choose between rs1_data (0) or pc (1) to wire into operand_a of ALU.
    output  logic           op_b_sel_o,      // choose between rs2_data (0) or imm (1) to wire into operand_b of ALU
    output  logic   [3:0]   alu_op_o,        // an operation that the ALU has to perform
    output  logic           mem_wren_o,      //1 write LSU, otherwise 0 
    output  logic   [1:0]   wb_sel_o         // choose between  dalu_data (0), ld_data (1), or pc_four (2) to write back into rd_data of RegFile
);

/* verilator lint_off UNOPTFLAT */  
    logic   [11:0]      data;
/* verilator lint_on UNOPTFLAT */  


// operation 
   
    always_comb begin 
        case(instr_i[6:2])
            R_FORMAT: begin
                case(instr_i[14:12])
                    ADD_SUB: begin 
                            if(!instr_i[30])    data = 12'b0_1_0_0_0_0000_0_00;
                            else                data = 12'b0_1_0_0_0_0001_0_00;        
                    end                              
                    SLL    :                    data = 12'b0_1_0_0_0_0010_0_00;  
                    SLT    :                    data = 12'b0_1_0_0_0_0011_0_00;
                    SLTU   :                    data = 12'b0_1_0_0_0_0100_0_00;
                    XOR    :                    data = 12'b0_1_0_0_0_0101_0_00;
                    SRL_SRA: begin                   
                            if(!instr_i[30])    data = 12'b0_1_0_0_0_0110_0_00; 
                            else                data = 12'b0_1_0_0_0_0111_0_00;                          
                    end                              
                    OR     :                    data = 12'b0_1_0_0_0_1000_0_00;
                    AND    :                    data = 12'b0_1_0_0_0_1001_0_00;
                    default: begin                   
                                                data = 12'b0;                    
                    end                              
                endcase                              
            end                                      
                                                     
            I_FORMAT_CALCULATE: begin                
                case(instr_i[14:12])                 
                    ADDI    :                   data = 12'b0_1_0_0_1_0000_0_00;  
                    SLTI    :                   data = 12'b0_1_0_0_1_0011_0_00;
                    SLTIU   :                   data = 12'b0_1_0_0_1_0100_0_00;
                    XORI    :                   data = 12'b0_1_0_0_1_0101_0_00;
                    ORI     :                   data = 12'b0_1_0_0_1_1000_0_00;
                    ANDI    :                   data = 12'b0_1_0_0_1_1001_0_00;
                    SLLI    :                   data = 12'b0_1_0_0_1_0010_0_00;
                    SRLI_SRAI: begin                      
                            if(!instr_i[30])    data = 12'b0_1_0_0_1_0110_0_00; 
                            else                data = 12'b0_1_0_0_1_0111_0_00;                          
                    end                              
                    default: begin                   
                                                data = 12'b0; 
                    end                              
                endcase                              
            end                                      
                                                     
            I_FORMAT_LOAD:                      data = 12'b0_1_0_0_1_0000_0_01;  
                                                     
            S_FORMAT:                           data = 12'b0_0_0_0_1_0000_1_00;
                                                     
            B_FORMAT: begin                         
                case(instr_i[14:12])                 
                    BEQ: begin                       
                        if(bl_equal_i)          data = 12'b1_0_0_1_1_0000_0_00;
                        else                    data = 12'b0_0_0_1_1_0000_0_00;
                    end                              
                    BNE: begin                       
                        if(!bl_equal_i)         data = 12'b1_0_0_1_1_0000_0_00;
                        else                    data = 12'b0_0_0_1_1_0000_0_00;
                    end                              
                    BLT: begin                       
                        if(bl_less_i)           data = 12'b1_0_0_1_1_0000_0_00;
                        else                    data = 12'b0_0_0_1_1_0000_0_00;
                    end                              
                    BGE: begin                       
                        if(!bl_less_i)          data = 12'b1_0_0_1_1_0000_0_00;
                        else                    data = 12'b0_0_0_1_1_0000_0_00;
                    end                             
                    BLTU: begin                      
                        if(bl_less_i)           data = 12'b1_0_1_1_1_0000_0_00;
                        else                    data = 12'b0_0_1_1_1_0000_0_00;
                    end                             
                    BGEU: begin                     
                        if(!bl_less_i)          data = 12'b1_0_1_1_1_0000_0_00;
                        else                    data = 12'b0_0_1_1_1_0000_0_00;
                    end                             
                    default: begin                  
                                                data = 12'b0; 
                    end
                endcase            
            end
            
            U_FORMAT_LUI    :                   data = 12'b0_1_0_0_1_1010_0_00;                        
            U_FORMAT_AUIPC  :                   data = 12'b0_1_0_1_1_0000_0_00;
            J_FORMAT_JAL    :                   data = 12'b1_1_0_1_1_0000_0_10;
            J_FORMAT_JALR   :                   data = 12'b1_1_0_0_1_0000_0_10;
            default: begin
                                                data = 12'b0;
            end
        endcase 
    end
 
    assign bl_sel_o         = data[11];
    assign rd_wren_o        = data[10];   
    assign bl_unsigned_o    = data[9];
    assign op_a_sel_o       = data[8];
    assign op_b_sel_o       = data[7];
    assign alu_op_o         = data[6:3];
    assign mem_wren_o       = data[2];
    assign wb_sel_o         = data[1:0];
 
endmodule: ctrl_unit
