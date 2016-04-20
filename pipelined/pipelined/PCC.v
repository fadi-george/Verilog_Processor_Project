`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	PROGRAM COUNTER
//	
//	Register that takes in a new address on every clock cycle
//
//////////////////////////////////////////////////////////////////////////////////
module PC #(parameter W = 32) (input CLK, EN,
                               input [W-1:0] PC,
								       output reg [W-1:0] PCF);
	 
	 initial begin
		PCF <= 0;							// Start at 0
	 end
	 
	 always @(posedge CLK) begin
		
		if(~EN || EN === 1'bx) begin	// Active low enable 
			
			if(PC > 0) begin
				PCF <= PC;					// Pass new values on every clock cycle
			end
			
		end

	 end

endmodule

