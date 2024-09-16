//veding machine
module vending_machine(
    input logic clk, rst_n,
    input logic nickle, dime, quarter,    
    output logic [2:0] change, // 000: no change, 001: 5$, 010: 10$, 011: 15$, 100: 20$
    output logic soda,
// state test
    output logic [1:0] state_test,
    output logic [4:0] coin_value_test
);

// coin input value
    logic [4:0] coin;

// coin value
    logic [4:0] coin_value;
    logic [4:0] change_value;

// state machine
    typedef enum logic [1:0] {
        IDLE,
        ACCEPT,
        DISPENSE
    } state;

// create state machine
    state current_state, next_state;   
    always_ff @ (posedge clk or negedge rst_n) begin : state_machine
        if (!rst_n) current_state <= IDLE;
        else current_state <= next_state;
    end

// state transition 
    always_comb begin
        state_test = current_state;
        case (current_state)
            IDLE: next_state = ACCEPT;
            ACCEPT: begin
                if (coin_value >= 5'd20) next_state = DISPENSE;
                else next_state = ACCEPT;
            end
            DISPENSE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end

// decode coin value
    always_comb begin
        coin_value_test = coin_value;
        case ({quarter, dime, nickle})
            3'b001: coin = 5'd5;
            3'b010: coin = 5'd10;
            3'b100: coin = 5'd25;
            default: coin = 5'd0;
        endcase
    end

// coin total value
    always_ff@ (posedge clk or negedge rst_n) begin: acc
        if (!rst_n) coin_value <= 0;
        else if (current_state == IDLE) coin_value <= 0;
        else if (current_state == ACCEPT) coin_value <= coin_value + coin;
    end

//change decode
    always_comb begin
            case (change_value)
            5'd5: change = 3'b001;
            5'd10: change = 3'b010;
            5'd15: change = 3'b011;
            5'd20: change = 3'b100;
            default: change = 3'b000;
        endcase
    end

// state output
    always_comb begin
        case (current_state)
            IDLE: begin
                soda = 0;
                change_value = 0;
            end
            ACCEPT: begin
                soda = 0;
                change_value = 0;
            end
            DISPENSE: begin
                soda = 1;
                change_value = coin_value - 5'd20;
            end
            default: begin
                soda = 0;
                change_value = 0;
            end
        endcase
    end

endmodule