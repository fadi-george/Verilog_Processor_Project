`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//	
//	Data Register 
//
//	Pass data through a register
//
//////////////////////////////////////////////////////////////////////////////////
module dReg #(parameter M = 32) (input CLK, 					// Clock signal
										   input [M-1:0] d,			// Input data
											output reg [M-1:0] q);	// Output data
											
always @(posedge CLK) begin
	q <= d;
end

endmodule
