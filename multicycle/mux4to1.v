`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	4-to-1 Multiplexer
//	
//	Takes 4 N bit inputs and determines which one to send out based on the 
//	select line.
//
//////////////////////////////////////////////////////////////////////////////////

module mux4to1 #(parameter N = 32)( input [N-1:0] A , B , C , D ,// N bit inputs
												input [1:0] Sel,
												output reg [N-1:0] out);
always @* begin										
	
	case(Sel)
 
	2'b00: out = A; 
	2'b01: out = B;
	2'b10: out = C;
	2'b11: out = D;

default: out = 2'bxx;
endcase
end

endmodule
