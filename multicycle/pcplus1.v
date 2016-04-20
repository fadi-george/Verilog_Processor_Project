`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Parametric Adder
//
//	Adds two values together. 
//
//////////////////////////////////////////////////////////////////////////////////

module add2 #(parameter N = 5)(input  [N-1:0] A,    // PC value or sign extended value from the offset
										 input  [N-1:0] B,
										 output [N-1:0] out); // Updated Address
											 
assign out = A + B;  

endmodule
