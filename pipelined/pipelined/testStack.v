`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////////

module testStack;

	// Inputs
	reg CLK;
	reg push;
	reg pop;
	reg RESET;
	reg [31:0] dio;

	// Outputs
   wire [4:0] sp;
	wire full;
	wire empty;
	wire error;
	wire [31:0] data;

	// Instantiate the Unit Under Test (UUT)
	stack #(.N(32),.WL(32)) uut (
		.CLK(CLK),
		.push(push), 
		.pop(pop), 
		.RESET(RESET), 
		.dio(dio), 
		.sp(sp),
		.full(full), 
		.empty(empty), 
		.error(error), 
		.data(data)
	);
	
	initial CLK = 0;
	always #10 CLK = ~CLK;	

	initial begin
		// Initialize Inputs
		push = 0; pop = 0; RESET = 1;	dio = 1;
		@(posedge CLK); RESET = 0;	push = 1;	
		@(posedge CLK); push = 1; dio = 2;
		@(posedge CLK); push = 1; dio = 4;
		@(posedge CLK); push = 1; dio = 5;
		@(posedge CLK); push = 1; dio = 7;
		@(posedge CLK); push = 1; dio = 4;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 1; dio = 3; pop = 0;
		@(posedge CLK); push = 1; dio = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 1; dio = 2; pop = 0;

	end
      
endmodule

