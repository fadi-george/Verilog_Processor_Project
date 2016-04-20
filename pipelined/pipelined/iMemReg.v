`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Fetch to Decode Register with active low enable and synchronous clear
//
//////////////////////////////////////////////////////////////////////////////////
module DecodeReg #(parameter M = 32 , N = 32) (input CLK , EN , CLR ,	// Clock signal alongside an enable and clear signal
															  input [M-1:0] d1 , 
															  input [N-1:0] d2 ,			// 2 M-bit inputs
															  output reg [M-1:0] q1 , 
															  output reg [N-1:0] q2);	// 2 M-bit ouputs
												
always @(posedge CLK) begin

	if((~EN)) begin
	
		if(CLR == 0 || CLR === 1'bx) begin
		
			q1 <= d1;
			q2 <= d2;
		
		end
		
		else  begin
		
			q1 <= 'bx;
			q2 <= 'bx;
		
		end	
	
	end 
	
end

endmodule
