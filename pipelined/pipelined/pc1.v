`timescale 1ns / 1ps
module PCD #(parameter W = 32) 
	(input [W-1:0] PC,
    input CLK, EN, 
    output reg [W-1:0] PCout, PCPlus1);
	 
	 initial
		PCPlus1 = 0;

	 always @(posedge CLK) begin
		if (PC > 0 && !EN)
			PCout <= PC;	
		else if (!EN)
			PCout <= PCPlus1;
	 end
	 
	 always @*
		PCPlus1 <= PCout + 1;	
		
endmodule
