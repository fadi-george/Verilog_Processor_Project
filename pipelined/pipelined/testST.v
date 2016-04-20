`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//		Fadi George
//----------------------------------
//		COMPE 470	HW ASSIGNMENT 5
//----------------------------------
//
//		Test Bench for Stack Module:
//
//		Test the stack for specified sequence of pushes and pops.
//		
//////////////////////////////////////////////////////////////////////////////////

module testStack;

	reg CLK;	reg push; reg pop; reg RESET;	reg [2:0] di; 						// Inputs
	
   wire [3:0] sp;	wire full; wire empty; wire error; wire [2:0] data; 	// Outputs

	// Instantiate the Unit Under Test (UUT)
	stack #(.N(4),.WL(3)) uut (.CLK(CLK),.push(push),.pop(pop),.RESET(RESET),.di(di), 
			.sp(sp),.full(full),.empty(empty),.error(error),.data(data));
	
	initial CLK = 0;
	always #10 CLK = ~CLK;	// Clock Signal with 20 ns Period

	initial begin
		// Initialize Inputs
		push = 0; pop = 0; RESET = 1;	di = 1;
		@(posedge CLK); RESET = 0;	push = 1;			// at each posedge of the clock	
		@(posedge CLK); push = 1; di = 2;				// change push and pop signal
		@(posedge CLK); push = 1; di = 4;				// to match specified sequence
		@(posedge CLK); push = 1; di = 5;
		@(posedge CLK); push = 1; di = 7;
		@(posedge CLK); push = 1; di = 4;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 1; di = 3; pop = 0;
		@(posedge CLK); push = 1; di = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 0; pop = 1;
		@(posedge CLK); push = 1; di = 2; pop = 0;
	end   
endmodule

