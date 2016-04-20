`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
//
//  Test Single Cycle Datapath
//	 
//	 Tests instructions
//
////////////////////////////////////////////////////////////////////////////////

module testLWSW;

	// Inputs
	reg CLK;	reg RST; 	
	
 
	// Instantiate the Unit Under Test (UUT)
	topp uut (.CLK(CLK), .RST(RST));
	
	
	// Set clock signal
	initial CLK = 0;         
	always #10 CLK = ~CLK;
	
	
	initial begin
	
		RST = 0;		 
		#10; RST = 1;	// Turn off reset signal
		#20; 
		#20; 
		#20;   
		#20; 
		#20; 					
		#20;
		
	end
      
      
endmodule

