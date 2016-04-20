`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//	
//	One Input Register  
//
//	Pass data from source registers
//
//////////////////////////////////////////////////////////////////////////////////
module regist #(parameter M = 32) (input CLK , EN , CLR ,						// Clock signal
											  input [M-1:0] d1 , 			// 1 M-bit inputs
											  output reg [M-1:0] q1 );	// 1 M-bit ouputs
												
always @(posedge CLK) begin
	
	if(~EN) begin
	
		if(CLR == 0 || CLR === 1'bx) begin
			q1 <= d1;
		end
	
	end
	else begin
		
		q1 <= 0;

	end
end

endmodule
