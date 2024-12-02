
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

    PC PC_block
    (
    
        .i_clk         (i_clk),
        .i_rst         (i_rst_n),
        .sel           (pc_sel),
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

    IF_ID IF_ID_block
    (
        .i_clk        (i_clk),
        .i_rst_n      (i_rst_n),
        .pc_F         (pc),
        .pc_four_F    (pc_4),
        .instr_F      (instr),
        .pc_D         (pc),
        .pc_four_D    (pc_4),
        .instr_D      (instr)
    );

//--------------------Instruction Decode stage--------------------

    ctrl_unit ctr_unit_block
    (
        .instr        (instr),      
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
        .i_rst1_addr    (instr[19:15]),
        .i_rst2_addr    (instr[24:20]),
        .i_rd_addr      (instr[11:7]),
        .i_rd_data      (wb_data),
        .i_wr_en        (rd_wren),
        .o_rst1_data    (rs1_data),
        .o_rst2_data    (rs2_data)
    );

    ID_EX ID_EX_block
    (
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        .pc_D           (pc),
        .pc_four_D      (pc_4),
        .instr_D        (instr),
        .alu_op_D       (alu_op),
        .br_un_D        (br_un),
        .rd_wren_D      (rd_wren),
        .opa_sel_D      (opa_sel),
        .opb_sel_D      (opb_sel),
        .mem_wren_D     (mem_wren),
        .insn_vld_D     (insn_vld_ctrl),
        .rs1_data_D     (rs1_data),
        .rs2_data_D     (rs2_data),
        .imm_D          (imm),
        .wb_sel_D       (wb_sel),
        .rd_addr_D      (instr[11:7]),
        .rs1_addr_D     (instr[19:15]),
        .rs2_addr_D     (instr[24:20]),
        .pc_E           (pc),
        .pc_four_E      (pc_4),
        .instr_E        (instr),
        .br_un_E        (br_un),
        .rd_wren_E      (rd_wren),
        .opa_sel_E      (opa_sel),
        .opb_sel_E      (opb_sel),
        .mem_wren_E     (mem_wren),
        .insn_vld_E     (insn_vld_ctrl),
        .alu_op_E       (alu_op),
        .rs1_data_E     (rs1_data),
        .rs2_data_E     (rs2_data),
        .imm_E          (imm),
        .wb_sel_E       (wb_sel),
        .rd_addr_E      (instr[11:7]),
        .rs1_addr_E     (instr[19:15]),
        .rs2_addr_E     (instr[24:20])
    );

//--------------------Execute stage--------------------

    brc BRC_block(
        .i_rst1_data     (rs1_data),
        .i_rst2_data     (rs2_data),
        .i_brc_un        (br_un),      
        .o_brc_less      (br_less),
        .o_brc_equal     (br_equal)
    );

    always_comb begin: opa_sel_block
        if(!opa_sel) begin
            operand_a = rs1_data;
        end else begin
            operand_a = pc;
        end
    end

    always_comb begin: opb_sel_block
        if(opb_sel) begin
            operand_b = imm;
        end else begin
            operand_b = rs2_data;
        end
    end

    alu alu_block
    ( 
        .i_alu_op       (alu_op),
        .i_operand_a    (operand_a),
        .i_operand_b    (operand_b),

        .o_alu_data     (alu_data),
        .o_insn_vld     (insn_vld_alu)
    );
    always_ff @(posedge i_clk) begin
        o_insn_vld <= insn_vld_alu & insn_vld_ctrl;    
    end

    immgen immgen_block
    (
        .instr_i        (instr),
        .imm_o          (imm)
    );
   
    EX_MEM EX_MEM_block
    (
        .i_clk          (i_clk),
        .i_rst_n        (i_rst_n),
        .pc_E           (pc),
        .pc_four_E      (pc_4),
        .instr_E        (instr),
        .rd_wren_E      (rd_wren),
        .mem_wren_E     (mem_wren),
        .insn_vld_E     (o_insn_vld),
        .alu_data_E     (alu_data),
        .rs2_data_E     (rs2_data),
        .wb_sel_E       (wb_sel),
        .rd_addr_E      (instr[11:7]),
        .pc_M           (pc),
        .pc_four_M      (pc_4),
        .instr_M        (instr),
        .rd_wren_M      (rd_wren),
        .mem_wren_M     (mem_wren),
        .insn_vld_M     (o_insn_vld),
        .alu_data_M     (alu_data),
        .rs2_data_M     (rs2_data),
        .wb_sel_M       (wb_sel),
        .rd_addr_M      (instr[11:7])
    );

//--------------------Memory stage--------------------

    lsu lsu_block
    (
        .i_clk          (i_clk),        
        .i_rst_n        (i_rst_n),
        .i_lsu_addr     (alu_data),
        .i_st_data      (rs2_data),    
        .i_lsu_wren     (mem_wren),    
        .i_io_sw        (i_io_sw),    
        .i_io_btn       (i_io_btn),
        .instr          (instr[6:0]),
        .i_lsu_op       (instr[14:12]),
        .o_ld_data      (ld_data),  
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
        .pc_M           (pc),
        .pc_four_M      (pc_4),
        .instr_M        (instr),
        .rd_wren_M      (rd_wren),
        .insn_vld_M     (o_insn_vld),
        .alu_data_M     (alu_data),
        .ld_data_M      (ld_data),
        .wb_sel_M       (wb_sel),
        .rd_addr_M      (instr[11:7]),
        .pc_W           (pc),
        .pc_four_W      (pc_4),
        .instr_W        (instr),
        .rd_wren_W      (rd_wren),
        .insn_vld_W     (o_insn_vld),
        .alu_data_W     (alu_data),
        .ld_data_W      (ld_data),
        .wb_sel_W       (wb_sel),
        .rd_addr_W      (instr[11:7])
    );

//--------------------Write-back stage--------------------

   always_comb begin
        case(wb_sel)
            2'b00: wb_data = alu_data;
            2'b01: wb_data = ld_data;
            2'b10: wb_data = pc_4;
            default: wb_data = 32'b0;
        endcase
    end

endmodule : pipelined