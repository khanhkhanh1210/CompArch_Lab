//Barrel shifter is used for SLL, SRL, SRA
module barrel_shifter(
    input logic [31:0]  data,
    input logic [4:0]   amount,
    input logic [1:0]   sel,    // 00: SRL, 01: SRA, 11: SLL  
    output logic [31:0] result
);

logic [31:0] stage1, stage2, stage 3, stage 4, stage 5;

assign stage1 = amount[0] ? (sel[1:0] == 2'b00 ? {1'b0, data[31:1]} :
                            sel[1:0] == 2'b01 ? {data[31], data[31:1]} :
                            sel[1:0] == 2'b11 ? {data[31:1], 1'b0} : data) : data;

assign stage2 = amount[1] ? (sel[1:0] == 2'b00 ? {2'b00, stage1[31:2]} :
                            sel[1:0] == 2'b01 ? {{2{data[31]}}, stage1[31:2]} :
                            sel[1:0] == 2'b11 ? {stage1[29:0], 2'b00} : stage1) : stage1;
    
assign stage3 = amount[2] ? (sel[1:0] == 2'b00 ? {4'b0000, stage2[31:4]} :  
                            sel[1:0] == 2'b01 ? {{4{data[31]}}, stage2[31:4]} :
                            sel[1:0] == 2'b11 ? {stage2[27:0], 4'b0000} : stage2) : stage2;

assign stage4 = amount[3] ? (sel[1:0] == 2'b00 ? {8'hff, stage3[31:8]} :
                            sel[1:0] == 2'b01 ? {{8{data[31]}}, stage3[31:8]} :
                            sel[1:0] == 2'b11 ? {stage3[23:0], 8'hff} : stage3) : stage3;

assign stage5 = amount[4] ? (sel[1:0] == 2'b00 ? {16'hffff, stage4[31:16]} : 
                            sel[1:0] == 2'b01 ? {{16{data[31]}}, stage4[31:16]} :
                            sel[1:0] == 2'b11 ? {stage4[15:0], 16'hffff} : stage4) : stage4;

assign result = stage5;

endmodule