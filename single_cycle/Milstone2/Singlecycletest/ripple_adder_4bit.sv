module ripple_adder(X, Y, S, Co, Cin);

 input logic [3:0] X, Y;// Two 4-bit inputs
 output logic [3:0] S;
 input logic Cin;
 output logic Co;
 logic w1, w2, w3, cout;

ksa_adder create_adder(X,{4{Cin}}^Y,Cin,S,cout);

assign Co = cout^Cin;


/*

 // instantiating 4 1-bit full adders in Verilog
fulladder u1(X[0], Cin^Y[0], Cin, S[0], w1);
fulladder u2(X[1], Cin^Y[1], w1, S[1], w2);
fulladder u3(X[2], Cin^Y[2], w2, S[2], w3);
fulladder u4(X[3], Cin^Y[3], w3, S[3], cout);

assign Co = cout^Cin;
*/
endmodule
