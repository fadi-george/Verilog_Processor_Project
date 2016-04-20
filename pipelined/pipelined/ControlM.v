`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Control Signal Register that pushes values from the execute stage to the memory stage
//
//////////////////////////////////////////////////////////////////////////////////
module ControlM	(input CLK ,  

						 input regwrE , 				// for writing to the register file
						 input [1:0] memregE ,		// value to write into the register file												
						 input memwrE ,				// for writing to the data memory
															
						 output reg regwrM , 		
						 output reg [1:0] memregM ,
						 output reg memwrM );	
																
always @(posedge CLK) begin	// push values on the rising edge of the clock

		regwrM  <= regwrE;
		memregM <= memregE;
		memwrM  <= memwrE;	

end

endmodule
