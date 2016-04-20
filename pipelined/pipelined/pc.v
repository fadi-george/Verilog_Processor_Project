`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	PROGRAM COUNTER
//	
//	Register that takes in a new address on every clock cycle
//
//////////////////////////////////////////////////////////////////////////////////
module PC2 #(parameter W = 32) (input CLK, EN,
                              input [W-1:0] PC,
								      output reg [W-1:0] PCout);
										//output reg [W-1:0] Pplus1);
	 
	 initial begin
		PCout <= 0;
	 end
	 
	 always @(posedge CLK) begin
		
		if(~EN || EN === 1'bx) begin
			PCout <= PC;
		end

	 end

endmodule

