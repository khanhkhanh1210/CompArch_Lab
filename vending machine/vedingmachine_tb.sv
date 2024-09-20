module vending_testbench();
    // Inputs
    reg clk, rst_n;
    reg nickle, dime, quarter;
    // Outputs
    wire [2:0] change;
    wire soda;
    
    logic [2:0] possible_coin [0:2]; // Array to hold the possible values
    logic [2:0] rand_delay; // Random delay value
        
    vending_machine uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .nickle(nickle), 
        .dime(dime), 
        .quarter(quarter), 
        .change(change), 
        .soda(soda)
    );
    
    task randomize_coin();
        {quarter, dime, nickle} = $urandom_range(0, 2);  // Generate random index
        {quarter, dime, nickle}= possible_coin[{quarter, dime, nickle}];  // Assign the corresponding value
    endtask

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Reset generation
    initial begin
        rst_n = 0;
        #3 rst_n = 1;
    end

    task random_delay();
        rand_delay = $urandom_range(0, 10);  // Random delay between 1 and 10 time units
        #rand_delay;  // Apply the delay
    endtask
    
    // Randomize the coin value
    initial begin
        possible_coin[0] = 3'b001; // 5$
        possible_coin[1] = 3'b010; // 10$
        possible_coin[2] = 3'b100; // 25$
        repeat(50) begin
            randomize_coin();
            #7;
            // turn off the coin input
            {quarter, dime, nickle} = 3'b000;
            random_delay();
        end
        $finish;
end
endmodule   