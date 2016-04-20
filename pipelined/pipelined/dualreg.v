`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//	
//	Dual Input Register  
//
//	Pass data from source registers
//
//////////////////////////////////////////////////////////////////////////////////
module dualreg #(parameter M = 32 , N = 32) (input CLK , EN ,						// Clock signal
												input [M-1:0] d1 , 
												input [N-1:0] d2 ,			// 2 M-bit inputs
												output reg [M-1:0] q1 , 
												output reg [N-1:0] q2);	// 2 M-bit ouputs
												
always @(posedge CLK) begin
	if(EN) begin
		q1 <= d1;
		q2 <= d2;
	end
end

endmodule
