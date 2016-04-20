`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// 
////////////////////////////////////////////////////////////////////////////////

module testALU;

	// Inputs
	reg [31:0] srcA;
	reg [31:0] srcB;
	reg [2:0] AluCon;

	// Outputs
	wire Zero;
	wire [31:0] ALUres;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.srcA(srcA), 
		.srcB(srcB), 
		.AluCon(AluCon), 
		.Zero(Zero), 
		.ALUres(ALUres)
	);

	initial begin
		// Initialize Inputs
		srcA = 14;
		srcB = -24;
		AluCon = 2;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

