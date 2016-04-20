`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:45 02/19/2014
// Design Name:   dataMemory
// Module Name:   C:/Users/Fadi G/Desktop/C475HW1/singlecycle/testDm.v
// Project Name:  singlecycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testDm;

	// Inputs
	reg CLK;
	reg WE;
	reg [31:0] adrs;
	reg [31:0] WD;

	// Outputs
	wire [31:0] rData;

	// Instantiate the Unit Under Test (UUT)
	dMem uut (
		.CLK(CLK), 
		.WE(WE), 
		.adrs(adrs), 
		.WD(WD), 
		.rData(rData)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		WE = 0;
		adrs = 0;
		WD = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

