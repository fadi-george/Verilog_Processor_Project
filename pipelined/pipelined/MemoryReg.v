`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Execute to Memory Register - Just passes values on the rising edge of the clock
//
//////////////////////////////////////////////////////////////////////////////////
module MemoryReg #(parameter M = 32 , N = 5)  ( input CLK ,  

																input [M-1:0] alures , 			// control signal inputs
																input [M-1:0] writeDE ,			// ALU result , write dataM and write Reg M 										
																input [N-1:0] writeRE ,
														    	input [M-1:0] pcplusE ,			// PCplus1 value
																
																output reg [M-1:0] aluM , 
																output reg [M-1:0] writeDM ,
																output reg [N-1:0] writeRM ,
																output reg [M-1:0] pcplusM);	
																
always @(posedge CLK) begin

		aluM 	  <= alures;
		writeDM <= writeDE;
		writeRM <= writeRE;	
		pcplusM <= pcplusE;
		
end

endmodule
