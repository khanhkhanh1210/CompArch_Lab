/* verilator lint_off MULTITOP */
package mypkg;
    typedef enum logic[3:0] {
	    A_ADD  = 4'b0000 ,
        A_SUB  = 4'b0001 ,
        A_SLL  = 4'b0010 ,
        A_SLT  = 4'b0011 ,
        A_SLTU = 4'b0100 ,
        A_XOR  = 4'b0101 ,
        A_SRL  = 4'b0110 ,
        A_SRA  = 4'b0111 ,
        A_OR   = 4'b1000 ,
        A_AND  = 4'b1001 ,
        A_LUI  = 4'b1010 
	} alu_op_e;
 endpackage : mypkg

