module immgen
(
    input   logic   [31:0]    instr_i,
    output  logic   [31:0]    imm_o
);

    localparam I_FORMAT_CALCULATE      = 5'b00100;
    localparam I_FORMAT_LOAD           = 5'b00000;
    localparam S_FORMAT                = 5'b01000;
    localparam B_FORMAT                = 5'b11000;
    localparam U_FORMAT_LUI            = 5'b01101;
    localparam U_FORMAT_AUIPC          = 5'b00101;
    localparam J_FORMAT_JAL            = 5'b11011;
    localparam J_FORMAT_JALR           = 5'b11001;
    
    always_comb begin
        case (instr_i[6:2])
            I_FORMAT_CALCULATE,I_FORMAT_LOAD: 
                begin 
                    imm_o = {{20{instr_i[31]}},instr_i[31:20]};
                end
            S_FORMAT: 
                begin 
                    imm_o = {{20{instr_i[31]}},instr_i[31:25],instr_i[11:7]}; 
                end
            B_FORMAT: 
                begin
                    imm_o = {{20{instr_i[31]}},instr_i[7],instr_i[30:25], instr_i[11:8], 1'b0}; 
                end
                // 
            U_FORMAT_LUI,U_FORMAT_AUIPC: 
                begin 
                    imm_o = {instr_i[31:12], 12'b0};
                end
            J_FORMAT_JAL: 
                begin 
                    imm_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0}; 
                end 
            J_FORMAT_JALR: 
                begin 
                    imm_o = {{20{instr_i[31]}},instr_i[31:20]}; 
                end    
            default:
                begin 
                    imm_o = 32'b0;  
                end
        endcase
    end
endmodule
