module ksa_adder #(parameter
	data_size = 32
)
(
	input logic [data_size-1:0]  a,b,		//input 8 bit
	input logic                  cin,

	output logic [data_size-1:0] sum,	//output 8 bit
	output logic                 cout			//overflow bit
);
	
	logic g_pre_no_cin, g_pre_cin;
   logic [data_size-1:0]  p_pre, g_pre, p_c, g_c, p_c_2, g_c_2;
			
	always_comb begin: fco_1_state
		p_c[0] = p_pre[0];
		g_c[0] = g_pre[0];
		p_c_2[0] = p_pre[0];
		g_c_2[0] = g_pre[0];	
	end

	always_comb begin: fco_2_state
		p_c_2[1] = p_c[1];
		g_c_2[1] = g_c[1];	
	end

//pre-processing state if cin = 1
	always_comb begin
		g_pre[0] = cin ? g_pre_cin : g_pre_no_cin;
	end
	
// g_pre[0] no cin
	pg_block pre_pros(a[0], b[0], p_pre[0], g_pre_no_cin);

//g_pre[0] has cin
	assign g_pre_cin = (a[0]&cin) | (b[0]&cin) | (a[0]&b[0]);

/**************generate block**************/
	genvar i;
	generate
//pre-processing state		
		for(i = 1; i < data_size; i++) begin: pcc
			pg_block pre_pros(a[i], b[i], p_pre[i], g_pre[i]);
		end

// first fco state
		for(i = 1; i < data_size; i++) begin:fco_1
			fco_block gen_carry(p_pre[i], p_pre[i-1], g_pre[i], g_pre[i-1], p_c[i], g_c[i]);
		end

// 2nd fco state
		for(i = 2; i < data_size; i++) begin:fco_2
			fco_block gen_carry_2(p_c[i], p_c[i-2], g_c[i], g_c[i-2], p_c_2[i], g_c_2[i]);
		end

//result state
		sum_block sum_0(p_pre[0], cin, sum[0]);
	
		for(i = 1; i < data_size; i++) begin:sum_gen
			sum_block sum_out(p_pre[i], g_c_2[i-1], sum[i]);
		end

		assign	cout = g_c_2[data_size-1];
	endgenerate
   
endmodule