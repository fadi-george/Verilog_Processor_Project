`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	2-to-1 Multiplexer
//	
//	Takes 2 N bit inputs and determines which one to send out based on the 
//	select line.
//
//////////////////////////////////////////////////////////////////////////////////

module mux2to1 #(parameter N = 32)( input [N-1:0] A , B , 		// N bit inputs
												input Sel,						// Select - Line
												output reg [N-1:0] out);   // N bit output
								
always @* begin

	case(Sel)
		0: out <= A;        // Either pass A or B
		1: out <= B;
		default: out <= 0;
	endcase
	
end								

endmodule
