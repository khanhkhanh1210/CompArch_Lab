module add_sub #(parameter data_size = 4)
(
    input logic [data_size-1:0]  X, 
    input logic [data_size-1:0]  Y, 
    input logic                  Cin,           //

    output logic [data_size-1:0] S,
    // output logic                 Co
);

    logic cout;

    // ksa_adder #(data_size) adder (X, {data_size{Cin}}^Y, Cin, S, cout);
    assign S = X + ({data_size{Cin}} ^ Y ) + Cin;
    // assign Co = cout^Cin;           

endmodule
