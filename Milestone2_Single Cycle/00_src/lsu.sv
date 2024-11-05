module lsu 
#(
    // Parameter for data memory
    parameter BYTE          = 2'b00,
    parameter HWORD         = 2'b01,
    parameter WORD          = 2'b10,
    // Parameter for memory mapping 
    parameter DATA_MEMORY     = 2'b00,
    parameter OUT_PERIPHERALS = 2'b01,
    parameter IN_PERIPHERALS  = 2'b10,
    parameter RESERVED        = 2'b11
)
(
    // Inputs
    input     logic              i_clk,
    input     logic              i_rst,
    input     logic    [31:0]    i_lsu_addr,
    input     logic    [31:0]    i_st_data,
    input     logic              i_lsu_wren, // 1 to write and 0 to read
    input     logic    [31:0]    i_io_sw, // switch
    input     logic    [2:0]     sel_mod,
    input     logic    [3:0]     i_io_btn, //buttons
    // Outputs
    output    logic    [31:0]    o_ld_data,
    output    logic    [31:0]    o_io_lcd,
    output    logic    [31:0]    o_io_ledg,
    output    logic    [31:0]    o_io_ledr,
    output    logic    [6:0]     o_io_hex0,
    output    logic    [6:0]     o_io_hex1,
    output    logic    [6:0]     o_io_hex2,
    output    logic    [6:0]     o_io_hex3,
    output    logic    [6:0]     o_io_hex4,
    output    logic    [6:0]     o_io_hex5,
    output    logic    [6:0]     o_io_hex6,
    output    logic    [6:0]     o_io_hex7
);

    logic              [1:0]     addr_sel;
    // Internal signals
    logic              [31:0]    dmem_mux_lddata; // Connects dmem output to mux input  
    logic              [31:0]    oper_mux_lddata;
    logic              [31:0]    iper_mux_lddata;
    logic                        dmux_dmem_st_en;
    logic                        dmux_oper_st_en;
    logic              [31:0]    input_per_reg;
    logic              [6:0]     output_per_reg   [7:0]; // 7-bit wide for each hex display
    logic              [3:0]     pstrb;

    // Generate addr_sel
    always_comb begin
        if (( i_lsu_addr[15:8] == 8'h00) || ( i_lsu_addr[15:8] == 8'h01) || ( i_lsu_addr[15:8] == 8'h02) || ( i_lsu_addr[15:8] == 8'h03) || ( i_lsu_addr[15:8] == 8'h04) || ( i_lsu_addr[15:8] == 8'h05) || ( i_lsu_addr[15:8] == 8'h06) || ( i_lsu_addr[15:8] == 8'h07)) begin 
            addr_sel = DATA_MEMORY;
        end 
        else if ( i_lsu_addr[15:8] == 8'h08) begin 
            addr_sel = OUT_PERIPHERALS;
        end
        else if ( i_lsu_addr[15:8] == 8'h09) begin 
            addr_sel = IN_PERIPHERALS;
        end
        else begin 
            addr_sel = RESERVED;
        end      
    end 
	
    // De-mux for st_en_i
    always_comb begin 
        case (addr_sel) 
            DATA_MEMORY : begin 
                dmux_dmem_st_en   = st_en_i;
                dmux_oper_st_en   = 1'b0;
            end
            OUT_PERIPHERALS : begin 
                dmux_dmem_st_en   = 1'b0;
                dmux_oper_st_en   = st_en_i;           
            end
            IN_PERIPHERALS : begin 
                dmux_dmem_st_en   = 1'b0;
                dmux_oper_st_en   = 1'b0;       
            end 
            RESERVED : begin 
                dmux_dmem_st_en   = 1'b0;
                dmux_oper_st_en   = 1'b0;  
            end 
            default : begin 
            end 
        endcase
    end

    // Input peripherals
    always_comb begin 
        if ( i_lsu_addr[15:0] == 16'h0900) begin 
            input_per_reg = io_sw_i;
        end
        else begin 
            input_per_reg  = 32'b1;
        end 
    end
    
    always_comb begin 
        if ( i_lsu_addr[15:0] == 16'h0900) begin
            iper_mux_lddata = input_per_reg;
        end
        else begin 
            iper_mux_lddata = 32'hCAFECAFE;
        end 
    end 
    
    // Output peripherals
    always_ff @(posedge clk_i) begin
        if (dmux_oper_st_en) begin
            case ( i_lsu_addr[15:0])
                16'h0800 : output_per_reg[0] <= st_data_i[6:0];
                16'h0810 : output_per_reg[1] <= st_data_i[6:0];
                16'h0820 : output_per_reg[2] <= st_data_i[6:0];
                16'h0830 : output_per_reg[3] <= st_data_i[6:0];
                16'h0840 : output_per_reg[4] <= st_data_i[6:0];
                16'h0850 : output_per_reg[5] <= st_data_i[6:0];
                16'h0860 : output_per_reg[6] <= st_data_i[6:0];
                16'h0870 : output_per_reg[7] <= st_data_i[6:0];
            endcase
        end
    end

    // Data memory control
    always_comb begin
        if (sel_mod[1:0] == BYTE) begin
            pstrb = 4'b0001;
        end 
        else if (sel_mod[1:0] == HWORD) begin
            pstrb = 4'b0011;
        end
        else if (sel_mod[1:0] == WORD) begin
            pstrb = 4'b1111;
        end
        else begin
            pstrb = 4'b0000;
        end
    end

    data_memory data_memory_inst (
        .clk_i      (clk_i),
        .rst_ni     (rst_ni),
        .paddr_i    ( i_lsu_addr[11:0]),
        .sel_mod    (sel_mod), 
        .pwdata_i   (st_data_i),
        .pwrite_i   (dmux_dmem_st_en),
        .penable_i  (1'b1),
        .psel_i     (1'b1),
        .pstrb_i    (pstrb),
        .pready_o   (),
        .prdata_o   (dmem_mux_lddata)
    );

    // Mux for ld_data_o
    logic [31:0] ld_data;
    always_comb begin 
        case (addr_sel)
            DATA_MEMORY     : ld_data = dmem_mux_lddata;
            OUT_PERIPHERALS : ld_data = oper_mux_lddata;
            IN_PERIPHERALS  : ld_data = iper_mux_lddata;
            RESERVED        : ld_data = 32'b1;
            default         : ld_data = 32'hCAFECAFE;
        endcase
    end 

    always_comb begin 
        case (sel_mod[1:0]) 
            BYTE : begin
                if (sel_mod[2] == 1'b1) begin 
                    o_ld_data = ld_data & 32'h000000FF;
                end 
                else begin 
                    if (ld_data[7] == 1'b1) begin 
                        o_ld_data = ld_data & 32'h000000FF | 32'hFFFFFF00;
                    end
                    else begin 
                        o_ld_data = ld_data & 32'h000000FF;
                    end
                end
            end
            HWORD : begin
                if (sel_mod[2] == 1'b1) begin 
                    o_ld_data= ld_data & 32'h0000FFFF;
                end 
                else begin 
                    if (ld_data[15] == 1'b1) begin 
                        o_ld_data= ld_data & 32'h0000FFFF | 32'hFFFF0000;
                    end
                    else begin 
                        o_ld_data= ld_data & 32'h0000FFFF;
                    end
                end
            end
            WORD : begin 
                o_ld_data = ld_data;
            end
            default : begin 
                o_ld_data = 32'hCAFECAFE;
            end
        endcase
    end

    // Peripherals output
   // assign io_lcd_o   = output_per_reg[10];
    //assign io_ledg_o  = output_per_reg[9];
    //assign io_ledr_o  = output_per_reg[8];
    assign io_hex0_o  = output_per_reg[0];
    assign io_hex1_o  = output_per_reg[1];
    assign io_hex2_o  = output_per_reg[2];
    assign io_hex3_o  = output_per_reg[3];
    assign io_hex4_o  = output_per_reg[4];
    assign io_hex5_o  = output_per_reg[5];
    assign io_hex6_o  = output_per_reg[6];
    assign io_hex7_o  = output_per_reg[7];

endmodule : lsu
