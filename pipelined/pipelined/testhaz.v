`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:36:59 03/24/2014
// Design Name:   HazardUnit
// Module Name:   C:/Users/FSG/Dropbox/Classes/C475/C475HW3/pipelined/testhaz.v
// Project Name:  singlecycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: HazardUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testhaz;

	// Inputs
	reg BranchD;
	reg [4:0] RsD;
	reg [4:0] RtD;
	reg [4:0] RsE;
	reg [4:0] RtE;
	reg [4:0] WriteRegE;
	reg MemtoRegE;
	reg RegWriteE;
	reg MemtoRegM;
	reg [4:0] WriteRegM;
	reg RegWriteM;
	reg [4:0] WriteRegW;
	reg RegWriteW;

	// Outputs
	wire StallF;
	wire StallD;
	wire ForwardAD;
	wire ForwardBD;
	wire FlushE;
	wire [1:0] ForwardAE;
	wire [1:0] ForwardBE;

	// Instantiate the Unit Under Test (UUT)
	HazardUnit uut (
		.BranchD(BranchD), 
		.RsD(RsD), 
		.RtD(RtD), 
		.RsE(RsE), 
		.RtE(RtE), 
		.WriteRegE(WriteRegE), 
		.MemtoRegE(MemtoRegE), 
		.RegWriteE(RegWriteE), 
		.MemtoRegM(MemtoRegM), 
		.WriteRegM(WriteRegM), 
		.RegWriteM(RegWriteM), 
		.WriteRegW(WriteRegW), 
		.RegWriteW(RegWriteW), 
		.StallF(StallF), 
		.StallD(StallD), 
		.ForwardAD(ForwardAD), 
		.ForwardBD(ForwardBD), 
		.FlushE(FlushE), 
		.ForwardAE(ForwardAE), 
		.ForwardBE(ForwardBE)
	);

	initial begin
		// Initialize Inputs

		

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

