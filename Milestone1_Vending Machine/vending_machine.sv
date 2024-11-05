//veding machine
module vending_machine(
    input logic clk, rst_n,
    input logic nickle, dime, quarter,    
    output logic [2:0] change, // 000: no change, 001: 5$, 010: 10$, 011: 15$, 100: 20$
    output logic soda
);

// coin input value
    logic [4:0] coin;

// coin value
    logic [4:0] coin_value;
    logic [4:0] change_value;
    logic [4:0] coin_value_reg;

// state machine
    typedef enum logic {
        ACCEPT,
        DISPENSE
    } state;

// create state machine
    state current_state, next_state;   
    always_ff @ (posedge clk or negedge rst_n) begin : state_machine
        if (!rst_n) current_state <= ACCEPT;
        else current_state <= next_state;
    end

// state transition 
    always_comb begin: state_transition
        case (current_state)
            ACCEPT: begin
                if (coin_value >= 5'd20) next_state = DISPENSE;
                else next_state = ACCEPT;
            end
            DISPENSE: begin
                if (coin_value >= 5'd20) next_state = DISPENSE;
                else next_state = ACCEPT;
            end
            default: next_state =  ACCEPT;
        endcase
    end

// decode coin value
    always_comb begin: coin_decode
        case ({quarter, dime, nickle})
            3'b001: coin = 5'd5;
            3'b010: coin = 5'd10;
            3'b100: coin = 5'd25;
            default: coin = 5'd0;
        endcase
    end

// coin total value
    always_ff@ (posedge clk or negedge rst_n) begin: accumulator
        if (!rst_n) coin_value <= 0;
        else if(coin_value >= 5'd20) coin_value <= coin;
        else if (!(coin_value >= 5'd20)) coin_value <= coin_value + coin;
    end

//keep change value
    always_ff@ (posedge clk or negedge rst_n) begin: keep_change
        if (!rst_n) coin_value_reg <= 0;
        else if (coin_value >= 5'd20) coin_value_reg <= coin_value;
    end

//change decode
    always_comb begin: change_decode
            case (change_value)
            5'd5: change = 3'b001;
            5'd10: change = 3'b010;
            5'd15: change = 3'b011;
            5'd20: change = 3'b100;
            default: change = 3'b000;
        endcase
    end

// state output
    always_comb begin: state_output
        change_value = (coin_value_reg - 5'd20) & {5{current_state}};
        soda = current_state;
    end

endmodule