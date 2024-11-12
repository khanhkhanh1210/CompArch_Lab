
module singlecycle

#(

    parameter                    BYTE          = 2'b00,
    parameter                    HWORD         = 2'b01,
    parameter                    WORD          = 2'b10,
    //parameter for memory mapping 
    parameter                    DATA_MEMORY     = 2'b00,
    parameter                    OUT_PERIPHERALS = 2'b01,
    parameter                    IN_PERIPHERALS  = 2'b10,
    parameter                    RESERVED        = 2'b11
)

(

    //input   logic   [31:0]  io_sw_i  ,
    //output  logic   [31:0]  io_lcd_o ,
    //output  logic   [31:0]  io_ledg_o,
    //output  logic   [31:0]  io_ledr_o,
    output  logic   [31:0]  io_hex0_o,
    output  logic   [31:0]  io_hex1_o,
    //output  logic   [31:0]  io_hex2_o,
    //output  logic   [31:0]  io_hex3_o,
    //output  logic   [31:0]  io_hex4_o,
    /*output  logic   [31:0]  io_hex5_o,
    output  logic   [31:0]  io_hex6_o,
    output  logic   [31:0]  io_hex7_o,*/  
	 output  logic   [5:0]   rs1_addr,
	 output  logic   [31:0]  instr_check,
    output  logic   [31:0]  alu_data_check,
    output  logic   [31:0]  rs1_data_check,
    output  logic   [31:0]  rs2_data_check,
    //output  logic           mem_wren_check,
    //output  logic           bl_less_check,
    //output  logic           bl_equal_check,
    output  logic   [31:0]       imm_check,
        //input 
    input   logic           clk_i   ,
    input   logic           rst_ni
);
    logic   [31:0]  instr;    
    logic           bl_less;    
    logic           bl_equal;                       
    logic           bl_sel;     
    logic           bl_unsigned;
    logic           rd_wren;   
    logic           op_a_sel;   
    logic           op_b_sel;   
    logic   [3:0]   alu_op;
    logic           mem_wren;   
    logic   [1:0]   wb_sel;     
    logic   [31:0]  pc;
    logic   [31:0]  imm;
    logic   [31:0]  rs1_data;
    logic   [31:0]  rs2_data;
    logic   [31:0]  operand_a;
    logic   [31:0]  operand_b;
    logic   [31:0]  alu_data;
    logic   [31:0]  pc_four;
    logic   [31:0]  ld_data;
    logic   [31:0]  wb_data;
   
assign alu_data_check = alu_data;
assign rs1_data_check = rs1_data;
assign rs2_data_check = rs2_data;
assign imm_check = imm ;
assign instr_check = instr;
assign rs1_addr = instr[19:15];

ctrl_unit ctr_unit_block
(   
    //.clk_i          (clk_i),
    .instr_i        (instr),      
    .bl_less_i      (bl_less),    
    .bl_equal_i     (bl_equal),   
    .bl_sel_o       (bl_sel),     
    .bl_unsigned_o  (bl_unsigned),
    .rd_wren_o      (rd_wren),    
    .op_a_sel_o     (op_a_sel),   
    .op_b_sel_o     (op_b_sel),   
    .alu_op_o       (alu_op),     
    .mem_wren_o     (mem_wren),   
    .wb_sel_o       (wb_sel)      
);


PC PC_block
(
   
    .i_clk          (clk_i),
    .i_rst         (rst_ni),
    .sel          (bl_sel),
    .i_pc           (alu_data),
    .pc_o           (pc),
    .pc_4      (pc_four)
);

inst_memory imem_block
(
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),
    .paddr_i        (pc[13:0]),
    .prdata_o       (instr)
	 
	 
);


regfile regfile_block
(     
    .i_clk          (clk_i),
    .i_rst_n         (rst_ni),
    .i_rst1_addr     (instr[19:15]),
    .i_rst2_addr     (instr[24:20]),
    .i_rd_addr      (instr[11:7]),
    .i_rd_data      (wb_data),
    .i_wr_en      (rd_wren),

    .o_rst1_data     (rs1_data),
    .o_rst2_data     (rs2_data)
);


immgen immgen_block
(
    .instr_i        (instr),      
    .imm_o          (imm)
);


brc BRC_block(

    .i_rst1_data     (rs1_data),
    .i_rst2_data     (rs2_data),
    .i_brc_un        (bl_unsigned),      
    .o_brc_less     (bl_less),
    .o_brc_equal     (bl_equal)
);

mux2to1 mux_operand_a
(
    .in0_i          (rs1_data),        
    .in1_i          (pc),
    .sel_i          (op_a_sel),
    .out_o          (operand_a)
);

mux2to1 mux_operand_b
(
    .in0_i          (rs2_data),        
    .in1_i          (imm),
    .sel_i          (op_b_sel),
    .out_o          (operand_b)
);


/* verilator lint_off PINCONNECTEMPTY */
alu alu_block
( 
     .i_alu_op       (alu_op),
    .i_operand_a    (operand_a),
    .i_operand_b    (operand_b),

    .o_alu_data     (alu_data),
    .bru_exp_o      ()
);
/* verilator lint_on PINCONNECTEMPTY */

lsu 
#(

    .BYTE          (BYTE),
    .HWORD         (HWORD),
    .WORD          (WORD),
    //parameter for memory mapping 
    .DATA_MEMORY 		(DATA_MEMORY), 
    .OUT_PERIPHERALS (OUT_PERIPHERALS),
    .IN_PERIPHERALS  (IN_PERIPHERALS),
    .RESERVED        (RESERVED)
) lsu_block
(
    .i_clk          (clk_i),        
    .i_rst         (rst_ni),
    .i_lsu_addr         (alu_data),
    .i_st_data      (rs2_data),    
    .i_lsu_wren        (mem_wren),    
    //i_io_sw        ( i_io_sw),    
    .sel_mod        (instr[14:12]),     

    /* o_ld_data      (ld_data) ,  
    .o_io_lcd       (o_io_lcd),    
    .o_io_ledg     (o_io_ledg),    
    .o_io_ledr     (o_io_ledr),*/    
    .o_io_hex0      (o_io_hex0),
    .o_io_hex1      (o_io_hex1)
    //o_io_hex2      (o_io_hex2),
    //o_io_hex3      (o_io_hex3),
    //o_io_hex4      (o_io_hex4),
    //o_io_hex5      (o_io_hex5),
    //o_io_hex6      (o_io_hex6),
    //o_io_hex7      (o_io_hex7)
    
);
/* verilator lint_on UNUSED */

mux4to1 wb_sel_block
(
    .in0_i          (alu_data),
    .in1_i          (ld_data),
    .in2_i          (pc_four),
    .in3_i          (32'b0),
    .sel_i          (wb_sel),
    .out_o          (wb_data)
);


endmodule : singlecycle