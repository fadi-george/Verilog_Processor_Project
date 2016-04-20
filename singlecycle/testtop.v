`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
////////////////////////////////////////////////////////////////////////////////

module testtop;

	// Inputs
	reg CLK;
	reg RST;

	// Outputs
	wire [4:0] tmp;

	// Instantiate the Unit Under Test (UUT)
	topp uut (
		.CLK(CLK), 
		.RST(RST), 
		.tmp(tmp)
	);
	
	
	initial CLK = 0;
	always #10 CLK = ~CLK;
	

	initial begin
		// Initialize Inputs
		RST = 0;
		// Wait 100 ns for global reset to finish
		#10; RST = 1;
		#10; 
		#10; 
		#10; 
		#10; 
		#10; 
	end
      
endmodule

