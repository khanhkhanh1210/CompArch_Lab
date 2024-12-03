
module pipelined

(   //input
    input  logic    [31:0]  i_io_sw,
    output  logic   [31:0]  o_io_lcd,
    output  logic   [31:0]  o_io_ledg,    
    output  logic   [31:0]  o_io_ledr,
    output  logic   [6:0]   o_io_hex0,
    output  logic   [6:0]   o_io_hex1,
    output  logic   [6:0]   o_io_hex2,
    output  logic   [6:0]   o_io_hex3,
    output  logic   [6:0]   o_io_hex4,
    output  logic   [6:0]   o_io_hex5,
    output  logic   [6:0]   o_io_hex6,
    output  logic   [6:0]   o_io_hex7,

    output  logic   [31:0]  o_pc_debug,
    output  logic           o_insn_vld,
    input   logic           i_clk,
    input   logic           i_rst_n,
    
    input  logic    [31:0]   i_io_btn
);
    logic   [31:0]  io_sw_i;
    logic   [31:0]  instr;                      // Instruction
    logic           br_less;                    // Branch less signal
    logic           br_equal;                   // Branch equal signal
    logic           pc_sel;                     // Program counter select signal
    logic           br_un;
    logic           rd_wren;   
    logic           opa_sel, opb_sel;
    logic   [3:0]   alu_op;
    logic           mem_wren;   
    logic   [1:0]   wb_sel;     
    logic   [31:0]  pc, pc_4;
    logic   [31:0]  rs1_data;
    logic   [31:0]  rs2_data;
    logic   [31:0]  operand_a;
    logic   [31:0]  operand_b;
    logic   [31:0]  alu_data;
    logic   [31:0]  ld_data;
    logic   [31:0]  wb_data;
    logic           insn_vld_alu;
    logic           insn_vld_ctrl;
    logic   [31:0]  imm; 
   


//--------------------Instruction Fetch stage--------------------

    logic [31:0] pc_stall;
    logic [31:0] PCTargetE;
    logic        PCSrcE;

    PC PC_block
    (
        .i_clk         (i_clk),
        .i_rst         (i_rst_n),
        .sel           (PCSrcE),
        .stall         (pc_stall),
        .i_pc          (alu_data),
        .pc_o          (pc),
        .pc_4          (pc_4)
    );
    
    always_ff @(posedge i_clk) begin
        o_pc_debug <= pc;
    end

    imem imem
    (
        .i_clk         (i_clk),
        .i_imem_addr   (pc),
        .o_imem_data   (instr),
        .i_stop        (1'b0)	 
    );

    logic [31:0] instr_F, instr_D;
    logic [31:0] pc_D, pc_4_D;

    assign instr_F = instr;

    IF_ID IF_ID_block
    (
        .i_clk        (i_clk),
        .i_rst_n      (i_rst_n),
        .pc_F         (pc),
        .pc_four_F    (pc_4),
        .instr_F      (instr_F),
        .pc_D         (pc_D),
        .pc_four_D    (pc_4_D),
        .instr_D      (instr_D)
    );

//--------------------Instruction Decode stage--------------------

    logic [31:0] pc_E, pc_4_E;
    // logic [31:0] instr_E;
    logic 
    logic        br_equal_E, br_less_E;
    logic        pc_sel_E;
    logic        br_un_E;
    logic        rd_wren_E;
    logic        opa_sel_E, opb_sel_E;
    logic [3:0]  alu_op_E;
    logic        mem_wren_E;
    logic        insn_vld_E;
    logic [1:0]  wb_sel_E;
    logic [31:0] rs1_data_E, rs2_data_E, imm_E;
    logic [4:0]  rd_addr_E, rs1_addr_E, rs2_addr_E;

    immgen immgen_block
    (
        .instr_i        (instr_D),
        .imm_o          (imm)
    );

    brc BRC_block(
        .i_rst1_data     (rs1_data),
        .i_rst2_data     (rs2_data),
        .i_brc_un        (br_un),      
        .o_brc_less      (br_less),
        .o_brc_equal     (br_equal)
    );

    ctrl_unit ctr_unit_block
    (
        .instr        (instr_D),
        .br_less      (br_less),
        .br_equal     (br_equal),
        .pc_sel       (pc_sel),
        .br_un        (br_un),
        .rd_wren      (rd_wren),
        .opa_sel      (opa_sel),
        .opb_sel      (opb_sel),
        .alu_op       (alu_op),
        .mem_wren     (mem_wren),
        .wb_sel       (wb_sel),
        .insn_vld     (insn_vld_ctrl)
    );

    regfile regfile_block
    (     
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        .i_rst1_addr    (instr_D[19:15]),
        .i_rst2_addr    (instr_D[24:20]),
        .i_rd_addr      (instr_D[11:7]),
        .i_rd_data      (wb_data),
        .i_wr_en        (rd_wren_W),
        .o_rst1_data    (rs1_data),
        .o_rst2_data    (rs2_data)
    );

    ID_EX ID_EX_block
    (
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        .pc_D           (pc_D),
        .pc_four_D      (pc_4_D),
        .instr_D        (instr_D),

        .br_equal_D     (br_equal),
        .br_less_D      (br_less),

        .pc_sel_D       (pc_sel),
        .br_un_D        (br_un),
        .rd_wren_D      (rd_wren),
        
        .opa_sel_D      (opa_sel),
        .opb_sel_D      (opb_sel),
        .alu_op_D       (alu_op),

        .mem_wren_D     (mem_wren),
        .insn_vld_D     (insn_vld_ctrl),
        .wb_sel_D       (wb_sel),

        .rs1_data_D     (rs1_data),
        .rs2_data_D     (rs2_data),
        .imm_D          (imm),

        .rd_addr_D      (instr_D[11:7]),
        .rs1_addr_D     (instr_D[19:15]),
        .rs2_addr_D     (instr_D[24:20]),

        // Output signals
        .pc_E           (pc_E),
        .pc_four_E      (pc_4_E),
        .instr_E        (instr_E),
        
        .br_equal_E     (br_equal_E),
        .br_less_E      (br_less_E),
        .pc_sel_E       (pc_sel_E),
        .br_un_E        (br_un_E),
        
        .rd_wren_E      (rd_wren_E),
        .opa_sel_E      (opa_sel_E),
        .opb_sel_E      (opb_sel_E),
        .alu_op_E       (alu_op_E),
        .mem_wren_E     (mem_wren_E),
        .insn_vld_E     (insn_vld_E),
        .wb_sel_E       (wb_sel_E),

        .rs1_data_E     (rs1_data_E),
        .rs2_data_E     (rs2_data_E),
        .imm_E          (imm_E),
        .rd_addr_E      (rd_addr_E),
        .rs1_addr_E     (rs1_addr_E),
        .rs2_addr_E     (rs2_addr_E)
    );

//--------------------Execute stage--------------------

    logic rd_wren_M, mem_wren_M, insn_vld_M;
    logic [31:0] pc_4_M;
    logic [31:0] alu_data_M;
    logic [31:0] rs2_data_M;
    logic [4:0] rd_addr_M;
    logic [31:0] instr_M;


    always_comb begin: opa_sel_block
        if(!opa_sel_E) begin
            operand_a = rs1_data_E;
        end else begin
            operand_a = pc_E;
        end
    end

    always_comb begin: opb_sel_block
        if(opb_sel_E) begin
            operand_b = imm_E;
        end else begin
            operand_b = rs2_data_E;
        end
    end

    alu alu_block
    ( 
        .i_alu_op       (alu_op_E),
        .i_operand_a    (operand_a),
        .i_operand_b    (operand_b),

        .o_alu_data     (alu_data),
        .o_insn_vld     (insn_vld_alu)
    );
    always_ff @(posedge i_clk) begin
        o_insn_vld <= insn_vld_alu & insn_vld_E; 
    end
   
    EX_MEM EX_MEM_block
    (
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        // .pc_E           (pc_E),
        .pc_four_E      (pc_4_E),
        .instr_E        (instr_E),
        .rd_wren_E      (rd_wren_E),
        .mem_wren_E     (mem_wren_E),
        .alu_data_E     (alu_data),
        .rs2_data_E     (rs2_data_E),
        .wb_sel_E       (wb_sel_E),
        // .insn_vld_E     (o_insn_vld),
        .rd_addr_E      (rd_addr_E),
    
        // .pc_M           (pc),
        .rd_wren_M      (rd_wren_M),
        .mem_wren_M     (mem_wren_M),
        .wb_sel_M       (wb_sel_M),
        .alu_data_M     (alu_data_M),
        .rs2_data_M     (rs2_data_M),
        .pc_four_M      (pc_4_M),
        .instr_M        (instr_M),
        // .insn_vld_M     (o_insn_vld),
        .rd_addr_M      (rd_addr_M)
    );

//--------------------Memory stage--------------------

    logic [31:0] pc_4_W;
    logic [31:0] alu_data_W;
    logic [31:0] ld_data_W;
    logic [1:0] wb_sel_W;
    logic [4:0] rd_addr_W;
    logic [31:0] instr_W;

    lsu lsu_block
    (
        .i_clk          (i_clk),        
        .i_rst_n        (i_rst_n),
        .i_lsu_addr     (alu_data_M),
        .i_st_data      (rs2_data_M),  
        .i_lsu_wren     (mem_wren_M),  
        .i_io_sw        (i_io_sw), 
        .i_io_btn       (i_io_btn),
        .instr          (instr_M[6:0]),
        .i_lsu_op       (instr_M[14:12]),
        .o_ld_data      (ld_data)
        .o_io_lcd       (o_io_lcd),
        .o_io_ledr      (o_io_ledr),
        .o_io_ledg      (o_io_ledg),  
        .o_io_hex0      (o_io_hex0),
        .o_io_hex1      (o_io_hex1),
        .o_io_hex2      (o_io_hex2),
        .o_io_hex3      (o_io_hex3),
        .o_io_hex4      (o_io_hex4),
        .o_io_hex5      (o_io_hex5),
        .o_io_hex6      (o_io_hex6),
        .o_io_hex7      (o_io_hex7)
    );
	
    MEM_WB MEM_WB_block
    (
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        // .pc_M           (pc),
        .pc_four_M      (pc_4),
        .instr_M        (instr_M),
        .rd_wren_M      (rd_wren_M),
        // .insn_vld_M     (o_insn_vld),
        .alu_data_M     (alu_data_M),
        .ld_data_M      (ld_data),
        .wb_sel_M       (wb_sel_M),
        .rd_addr_M      (rd_addr_M),
        // .pc_W           (pc),

        .pc_four_W      (pc_4_W),
        .instr_W        (instr_W),
        .rd_wren_W      (rd_wren_W),
        // .insn_vld_W     (o_insn_vld),
        .alu_data_W     (alu_data_W),
        .ld_data_W      (ld_data_W),
        .wb_sel_W       (wb_sel_W),
        .rd_addr_W      (rd_addr_W)
    );

//--------------------Write-back stage--------------------

   always_comb begin
        case(wb_sel_W)
            2'b00: wb_data = alu_data_W;
            2'b01: wb_data = ld_data_W;
            2'b10: wb_data = pc_4_W;
            default: wb_data = 32'b0;
        endcase
    end

// Hazard detection unit
    
    hazard_detection (
        .EX_MEM_rd_wren (rd_wren_E),
        .D_reg1_addr (rs1_addr_E),
        .D_reg2_addr (rs2_addr_E),
        .E_rd_addr (rd_addr_M),
        .stall (pc_stall),
        .enable (PCSrcE),
    );

endmodule : pipelined