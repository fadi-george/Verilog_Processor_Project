`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Memory to WriteBack Register - Passes value on the rising edge of the clock
//
//////////////////////////////////////////////////////////////////////////////////
module WriteBackReg #(parameter M = 32 , N = 5)(input CLK ,  

																input [M-1:0] RD , 				// data from datamemory
																input [M-1:0] ALUM ,				// alu result in the memory stage									
																input [N-1:0] writeRM ,			// destination register
														     	input [M-1:0] pcPlusM ,			// address of an instruction
																
																output reg [M-1:0] RDW , 
																output reg [M-1:0] ALUW ,
																output reg [N-1:0] writeRW ,
																output reg [M-1:0] pcPlusW);	
																
always @(posedge CLK) begin

		RDW 	  <= RD;
		ALUW    <= ALUM;
		writeRW <= writeRM;	
		pcPlusW <= pcPlusM;
		
end

endmodule
