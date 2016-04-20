`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	PROGRAM COUNTER
//	
//	Register that takes in a new address on every clock cycle
//
//////////////////////////////////////////////////////////////////////////////////

module pc #(parameter N = 5)(input CLK , RST , PCW ,		// clock signal and reset
									  input [N-1:0] oldp, 			// new address to pass in
									  output reg [N-1:0] newp);	// address to pass out

always @(posedge CLK or posedge RST)begin
		if(RST) begin
			newp <= 15;		// start at address 15
		end
		if(PCW) begin
			newp <= oldp;  // otherwise pass in the new address
		end
end

endmodule
