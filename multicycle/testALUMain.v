`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:58:45 03/07/2014
// Design Name:   ALUMainDec
// Module Name:   C:/Users/FSG/Dropbox/Classes/C475/C475HW2/multicycle/testALUMain.v
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

module testALUMain;

	// Inputs
	reg clk;
	reg rst;
	reg [5:0] Opcode;

	// Outputs
	wire MemtoReg;
	wire RegDst;
	wire IorD;
	wire [1:0] PCSrc;
	wire ALUSrcA;
	wire [1:0] ALUSrcB;
	wire IRWrite;
	wire MemWrite;
	wire PCWrite;
	wire Branch;
	wire RegWrite;
	wire [1:0] ALUOp;

	// Instantiate the Unit Under Test (UUT)
	ALUMainDec uut (
		.clk(clk), 
		.rst(rst), 
		.Opcode(Opcode), 
		.MemtoReg(MemtoReg), 
		.RegDst(RegDst), 
		.IorD(IorD), 
		.PCSrc(PCSrc), 
		.ALUSrcA(ALUSrcA), 
		.ALUSrcB(ALUSrcB), 
		.IRWrite(IRWrite), 
		.MemWrite(MemWrite), 
		.PCWrite(PCWrite), 
		.Branch(Branch), 
		.RegWrite(RegWrite), 
		.ALUOp(ALUOp)
	);
	initial clk = 0;
	always #10 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		rst = 1;
		Opcode = 6'b001000;

		// Wait 100 ns for global reset to finish
		#10; rst = 1;
		#10; rst = 0;       
		// Add stimulus here

	end
      
endmodule

