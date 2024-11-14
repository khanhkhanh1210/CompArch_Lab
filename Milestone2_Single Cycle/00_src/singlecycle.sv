
module singlecycle

// #(

//     parameter                    BYTE          = 2'b00,
//     parameter                    HWORD         = 2'b01,
//     parameter                    WORD          = 2'b10,
//     //parameter for memory mapping 
//     parameter                    DATA_MEMORY     = 2'b00,
//     parameter                    OUT_PERIPHERALS = 2'b01,
//     parameter                    IN_PERIPHERALS  = 2'b10,
//     parameter                    RESERVED        = 2'b11
// )

(   //input
    input   logic           CLOCK_50,
    input   logic           SW[17],
    input   logic   [16:0]  SW,    
    input   logic   [3:0]   KEY,

    //output 
    output  logic   [31:0]  o_pc_debug,
    output  logic   [16:0]  LEDR,
    output  logic   [7:0]   LEDG,
    output  logic   [6:0]   HEX0,
    output  logic   [6:0]   HEX1,
    output  logic   [6:0]   HEX2,
    output  logic   [6:0]   HEX3,
    output  logic   [6:0]   HEX4,
    output  logic   [6:0]   HEX5,
    output  logic   [6:0]   HEX6,
    output  logic   [6:0]   HEX7, 
	output  logic           o_insn_vld,
    output  logic   [7:0]   LCD_DATA
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
    logic   [31:0]  pc_four;
    logic   [31:0]  ld_data;
    logic   [31:0]  wb_data;
    logic insn_vld_alu;
    logic insn_vld_ctrl;
    
    assign io_sw_i[16:0] = SW;
   
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
    
        .i_clk         (CLOCK_50),
        .i_rst         (SW[17]),
        .sel           (pc_sel),
        .i_pc          (alu_data),
        .pc_o          (pc),
        .pc_4          (pc_4)
    );
    assign o_pc_debug = pc;

    imem imem
    (
        .clk           (CLOCK_50),
        .rst_n         (SW[17]),
        .i_imem_addr   (pc),
        .o_imem_data   (instr),
        .i_stop        (1'b0)	 
    );


    regfile regfile_block
    (     
        .i_clk          (CLOCK_50),
        .i_rst_n        (SW[17]),
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
        if(opa_sel) begin
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
    assign o_insn_vld = insn_vld_alu | insn_vld_ctrl;

    lsu lsu_block
    (
        .i_clk          (CLOCK_50),        
        .i_rst          (SW[17]),
        .i_lsu_addr     (alu_data),
        .i_st_data      (rs2_data),    
        .i_lsu_wren     (mem_wren),    
        .io_sw_i        (io_sw_i),    
        .io_btn_i       (KEY),
        .instr          (instr[6:0]),
        .i_lsu_op       (instr[14:12]),
        .o_ld_data      (ld_data),  
        .io_lcd_o       (o_io_lcd),
        .io_ledr_o      (LEDR),
        .io_ledg_o      (LEDG),  
        .io_hex0_o      (HEX0),
        .io_hex1_o      (HEX1),
        .io_hex2_o      (HEX2),
        .io_hex3_o      (HEX3),
        .io_hex4_o      (HEX4),
        .io_hex5_o      (HEX5),
        .io_hex6_o      (HEX6),
        .io_hex7_o      (HEX7) 
    );

    immgen immgen_block
    (
        .i_instr        (instr),
        .o_imm          (imm)
    );
   always_comb begin
        case(wb_sel)
            2'b00: wb_data = alu_data;
            2'b01: wb_data = ld_data;
            2'b10: wb_data = 32'b0;
            default: wb_data = 32'b0;
        endcase
    end
endmodule : singlecycle