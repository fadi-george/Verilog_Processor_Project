`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//	
//	Instruction Register 
//
//	Pass instruction through register if the register is enabled.
//
//////////////////////////////////////////////////////////////////////////////////

module iReg #(parameter M = 32) (input CLK , IR ,       // Clock signal and register enable
										   input [M-1:0] d ,		  // input data
											output reg [M-1:0] q); // output data
											
always @(posedge CLK) begin
	if(IR)begin						// register with enable
	q <= d;							
	end
end

endmodule
