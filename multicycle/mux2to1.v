`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	2-to-1 Multiplexer
//	
//	Takes 2 N bit inputs and determines which one to send out based on the 
//	select line.
//
//////////////////////////////////////////////////////////////////////////////////

module mux2to1 #(parameter N = 32)( input [N-1:0] A , B , // N bit inputs
												input Sel,				 // Select Line
												output [N-1:0] out);	 // N bit output
												
assign out = (Sel) ? B : A;

endmodule
