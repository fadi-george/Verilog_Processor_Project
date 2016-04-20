`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	3-to-1 Multiplexer
//	
//	Takes 3 N bit inputs and determines which one to send out based on the 
//	select line.
//
//////////////////////////////////////////////////////////////////////////////////
module mux3to1 #(parameter N = 32) (input [N-1:0] A,B,C,			// 3 N bit inputs
										 	   input [1:0] sel,				// select line
											   output reg [N-1:0] out);	// output signal
always @* begin

case(sel)
	2'b00:	out = A;
	2'b01:	out = B;
	2'b10:	out = C;
	default: out = 0;
endcase

end
endmodule
