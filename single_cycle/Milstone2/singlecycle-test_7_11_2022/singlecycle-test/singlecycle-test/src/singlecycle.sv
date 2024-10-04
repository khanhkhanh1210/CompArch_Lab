`default_nettype none

/* verilator lint_off UNUSED */
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
//import mypkg::*;        chỉ thêm khi đổ kit
(

    input   logic   [31:0]  io_sw_i  ,
    output  logic   [31:0]  io_lcd_o ,
    output  logic   [31:0]  io_ledg_o,
    output  logic   [31:0]  io_ledr_o,
    output  logic   [31:0]  io_hex0_o,
    output  logic   [31:0]  io_hex1_o,
    output  logic   [31:0]  io_hex2_o,
    output  logic   [31:0]  io_hex3_o,
    output  logic   [31:0]  io_hex4_o,
    output  logic   [31:0]  io_hex5_o,
    output  logic   [31:0]  io_hex6_o,
    output  logic   [31:0]  io_hex7_o,  
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
//    alu_op_e   alu_op; chỉ thêm khi đổ kit   
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

// creat instr

PC PC_block
(
   
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),
    .sel_i          (bl_sel),
    .pc_i           (alu_data),
    
    .pc_o           (pc),
    .pc_four_o      (pc_four)
);
//inst memory
inst_memory imem_block
(
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),
    .paddr_i         (pc[13:0]),
    //.wdata_i        (32'b0),
    //.wren_i         (1'b0),
    .prdata_o         (instr)
	 
	 
);

// rd_data
regfile regfile_block
(    //input 
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),
    .rs1_addr_i     (instr[19:15]),
    .rs2_addr_i     (instr[24:20]),
    .rd_addr_i      (instr[11:7]),
    .rd_data_i      (wb_data),
    .rd_wren_i      (rd_wren),

    .rs1_data_o     (rs1_data),
    .rs2_data_o     (rs2_data)
);

//ImmGen
immgen immgen_block
(
    .instr_i        (instr),      
    .imm_o          (imm)
);

//BRC
brcomp BRC_block(
    //input
    .rs1_data_i     (rs1_data),
    .rs2_data_i     (rs2_data),
    .br_unsigned_i  (bl_unsigned),
    //output        
    .br_less_o      (bl_less),
    .br_equal_o     (bl_equal)
);

// mux 2 to 1 choose operand a or b

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

// ALU
/* verilator lint_off PINCONNECTEMPTY */
alu alu_block
( 
    .alu_op_i       (alu_op),
    .operand_a_i    (operand_a),
    .operand_b_i    (operand_b),

    .alu_data_o     (alu_data),
    .bru_exp_o      ()
);
/* verilator lint_on PINCONNECTEMPTY */
// LSU
lsu 
#(

    .BYTE          (BYTE),
    .HWORD         (HWORD),
    .WORD          (WORD),
    //parameter for memory mapping 
    .DATA_MEMORY (DATA_MEMORY), 
    .OUT_PERIPHERALS (OUT_PERIPHERALS),
    .IN_PERIPHERALS  (IN_PERIPHERALS),
    .RESERVED        (RESERVED)
) lsu_block
(
    .clk_i          (clk_i),        
    .rst_ni         (rst_ni),
    .addr_i         (alu_data),
    .st_data_i      (rs2_data),    
    .st_en_i        (mem_wren),    
    .io_sw_i        (io_sw_i),    
    .sel_mod        (instr[14:12]),     

    .ld_data_o      (ld_data),    
    .io_lcd_o       (io_lcd_o),    
    .io_ledg_o      (io_ledg_o),    
    .io_ledr_o      (io_ledr_o),    
    .io_hex0_o      (io_hex0_o),
    .io_hex1_o      (io_hex1_o),
    .io_hex2_o      (io_hex2_o),
    .io_hex3_o      (io_hex3_o),
    .io_hex4_o      (io_hex4_o),
    .io_hex5_o      (io_hex5_o),
    .io_hex6_o      (io_hex6_o),
    .io_hex7_o      (io_hex7_o)
    
);
/* verilator lint_on UNUSED */
// mux select wb_sel
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
