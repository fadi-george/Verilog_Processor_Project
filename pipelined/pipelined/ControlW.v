`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Control Signal Register that pushes values from the memory stage to the writeback stage
//
//////////////////////////////////////////////////////////////////////////////////
module ControlW	(input CLK ,  

						 input regwrM , 					// write enable for register file
						 input [1:0] memregM ,		   // for determining which to write into register value											
															
						 output reg regwrW , 
						 output reg [1:0] memregW );	
																
always @(posedge CLK) begin // push values on the rising edge of the clock

		regwrW  <= regwrM;
		memregW <= memregM;

end

endmodule
