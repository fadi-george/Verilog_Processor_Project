`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Sign Extend
//
// Sign extends the 16-bit offset to produce a 32-bit value
// 
//////////////////////////////////////////////////////////////////////////////////

module signExtend #(parameter Ex = 16 , Imm = 32)( input [Ex-1:0] offs,       // offset value in instruction
																	output [Imm-1:0] SigIm); 	// 32-bit output from sign-extending
																	
assign SigIm[Imm-1:Imm-16] = {16{offs[15]}};	// Sign extends to upper 16 bits
assign SigIm[Ex-1:0] = offs[Ex-1:0];			// Lower 16 bits should stay the same

endmodule
