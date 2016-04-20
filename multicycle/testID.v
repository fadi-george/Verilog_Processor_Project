`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:54:52 03/06/2014
// Design Name:   IDMem
// Module Name:   C:/Users/Fadi G/Desktop/Dropbox/Classes/C475/C475HW2/multicycle/testID.v
// Project Name:  singlecycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDMem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testID;

	// Inputs
	reg CLK;
	reg We;
	reg [31:0] addr;
	reg [31:0] Wd;

	// Outputs
	wire [31:0] dout;

	// Instantiate the Unit Under Test (UUT)
	IDMem uut (
		.CLK(CLK), 
		.We(We), 
		.addr(addr), 
		.Wd(Wd), 
		.dout(dout)
	);
	initial CLK = 0;
	always #10 CLK = ~CLK;
	
	initial begin
		// Initialize Inputs

		We = 0;
		addr = 0;
		Wd = 0;

		// Wait 100 ns for global reset to finish
		#20; addr = 1;
		#20; addr = 2;
		#20; addr = 3;
		#20; addr = 4;
		#20; addr = 5;
		#20; addr = 6;
		#20; addr = 7;
		#20; addr = 8;      
		// Add stimulus here

	end
      
endmodule

