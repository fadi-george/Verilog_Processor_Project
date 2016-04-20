`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//	
//	Dual Input Register  
//
//	Pass data from source registers
//
//////////////////////////////////////////////////////////////////////////////////
module dualReg #(parameter M = 32) (input CLK , 						// Clock signal
												input [M-1:0] d1 , d2 ,			// 2 M-bit inputs
												output reg [M-1:0] q1 , q2);	// 2 M-bit ouputs
												
always @(posedge CLK) begin
	q1 <= d1;
	q2 <= d2;
end

endmodule
