
module singlecycle

(   //input
    input  logic    [31:0]  i_io_sw,
    output  logic   [31:0]  o_io_lcd,
    output  logic   [8:0]  o_io_ledg,    
    output  logic   [16:0]  o_io_ledr,
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
    
    input  logic    [3:0]   i_io_btn,
	 //sram 
	  output logic    [17:0]   SRAM_ADDR,
    inout  wire      [15:0]   SRAM_DQ  ,
    output logic             SRAM_CE_N,
    output logic             SRAM_WE_N,
    output logic             SRAM_LB_N,
    output logic             SRAM_UB_N,
    output  logic            SRAM_OE_N
    
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
        .o_io_hex7      (o_io_hex7),
		  .SRAM_ADDR      (SRAM_ADDR),
        .SRAM_DQ        (SRAM_DQ),
        .SRAM_CE_N      (SRAM_CE_N),
        .SRAM_WE_N      (SRAM_WE_N),
        .SRAM_LB_N      (SRAM_LB_N),
        .SRAM_UB_N      (SRAM_UB_N),
        .SRAM_OE_N      (SRAM_OE_N)
    );
		
    immgen immgen_block
    (
        .instr_i        (instr),
        .imm_o          (imm)
    );
   always_comb begin
        case(wb_sel)
            2'b00: wb_data = alu_data;
            2'b01: wb_data = ld_data;
            2'b10: wb_data = pc_4;
            default: wb_data = 32'b0;
        endcase
    end
endmodule : singlecycle