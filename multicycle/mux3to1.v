`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	3-to-1 Multiplexer
//	
//	Takes 3 N bit inputs and determines which one to send out based on the 
//	select line.
//
//////////////////////////////////////////////////////////////////////////////////
module mux3to1 #(parameter N = 32) (input [N-1:0] A,B,C,
										 	   input [1:0] sel,
											   output reg [N-1:0] out);
always @* begin

case(sel)
	2'b00:	out = A;
	2'b01:	out = B;
	2'b10:	out = C;
	default: out = 32'bxxxx_xxxx_xxxx_xxxx_xxxx_xxxx_xxxx_xxxx;
endcase

end
endmodule
