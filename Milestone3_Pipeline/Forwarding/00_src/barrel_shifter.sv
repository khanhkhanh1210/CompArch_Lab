//Barrel shifter is used for SLL, SRL, SRA
module barrel_shifter(
    input logic [31:0]  data,
    input logic [4:0]   amount,
    input logic [1:0]   sel,    // 00: SLL, 01: SRL, 11: SRA  
    output logic [31:0] result
);

    logic [31:0] stage1, stage2, stage3, stage4, stage5;

    assign stage1 = amount[0] ? (sel[1:0] == 2'b00 ? {data[30:0], 1'b0} :                       
                                sel[1:0] == 2'b01 ?  {1'b0, data[31:1]} :                    
                                sel[1:0] == 2'b11 ?  {data[31], data[31:1]} : data) : data;          

    assign stage2 = amount[1] ? (sel[1:0] == 2'b00 ? {stage1[29:0], 2'b00} :
                                sel[1:0] == 2'b01 ?  {2'b00, stage1[31:2]} :
                                sel[1:0] == 2'b11 ?  {{2{data[31]}}, stage1[31:2]} : stage1) : stage1;
        
    assign stage3 = amount[2] ? (sel[1:0] == 2'b00 ? {stage2[27:0], 4'b0000} :  
                                sel[1:0] == 2'b01 ?  {4'b0000, stage2[31:4]} :
                                sel[1:0] == 2'b11 ? {{4{data[31]}}, stage2[31:4]} : stage2) : stage2;

    assign stage4 = amount[3] ? (sel[1:0] == 2'b00 ? {stage3[23:0], 8'h00} :
                                sel[1:0] == 2'b01 ?  {8'h00, stage3[31:8]} :
                                sel[1:0] == 2'b11 ?  {{8{data[31]}}, stage3[31:8]} : stage3) : stage3;

    assign stage5 = amount[4] ? (sel[1:0] == 2'b00 ? {stage4[15:0], 16'h0000} : 
                                sel[1:0] == 2'b01 ?  {16'h0000, stage4[31:16]} :
                                sel[1:0] == 2'b11 ?  {{16{data[31]}}, stage4[31:16]} : stage4) : stage4;

    assign result = stage5;

endmodule