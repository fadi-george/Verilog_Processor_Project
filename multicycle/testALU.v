`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:32:35 02/19/2014
// Design Name:   ALU
// Module Name:   C:/Users/Fadi G/Desktop/C475HW1/singlecycle/testALU.v
// Project Name:  singlecycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
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

