`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:51 03/05/2014
// Design Name:   ALUMainDec
// Module Name:   C:/Users/FSG/Dropbox/Classes/C475/C475HW2/multicycle/testMainDec.v
// Project Name:  singlecycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALUMainDec
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testMainDec;

	// Inputs
	reg [5:0] op;
	reg CLK;
	reg RESET;

	// Outputs
	wire Mem2Reg;
	wire RegDs;
	wire IrD;
	wire [1:0] PCSr;
	wire ALUSrA;
	wire [1:0] ALUSrB;
	wire IRWr;
	wire MemWr;
	wire PCWr;
	wire Brnch;
	wire RegWr;
	wire [1:0] ALUop;

	// Instantiate the Unit Under Test (UUT)
	ALUMainDec uut (
		.CLK(CLK), 
		.op(op),
		.Mem2Reg(Mem2Reg), 
		.RegDs(RegDs), 
		.IrD(IrD), 
		.PCSr(PCSr), 
		.ALUSrA(ALUSrA), 
		.ALUSrB(ALUSrB), 
		.IRWr(IRWr), 
		.MemWr(MemWr), 
		.PCWr(PCWr), 
		.Brnch(Brnch), 
		.RegWr(RegWr), 
		.ALUop(ALUop)
	);
	initial CLK = 0;
	always #10 CLK = ~ CLK;
	
	initial begin
		// Initialize Inputs
		op = 8;
		RESET = 1;

		// Wait 100 ns for global reset to finish
		#10; RESET = 0;
        
		// Add stimulus here

	end
      
endmodule

