`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
////////////////////////////////////////////////////////////////////////////////

module testSingEx;

	// Inputs
	reg [15:0] offs;

	// Outputs
	wire [31:0] SigIm;

	// Instantiate the Unit Under Test (UUT)
	signExtend uut (
		.offs(offs), 
		.SigIm(SigIm)
	);

	initial begin
		// Initialize Inputs
		offs = 5;

		// Wait 100 ns for global reset to finish
		#10; offs = -1;
		#10; offs = -10;
		#10; offs = 67;
        
		// Add stimulus here

	end
      
endmodule

