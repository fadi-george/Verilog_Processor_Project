`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// ALU (Arithmetic Logic Unit)
//
// Peforms on operation with two inputs
//
// Based on the control signal(AluCon), the ALU will be perform
//
//////////////////////////////////////////////////////////////////////////////////

module ALU #(parameter W = 32) (input signed [W-1:0] srcA , 			 // 2 32-bit inputs
										  input signed [W-1:0] srcB ,	
										  input [2:0] AluCon ,		    // select-line for the ALU
										  output Zero,						 // zero branch
										  output reg [W-1:0] ALUres);  // result from the ALU operation
always@* begin

	case(AluCon)									// perform distinct operations
	3'b000: ALUres = srcA & srcB;				// and operation
	3'b001: ALUres = srcA | srcB;				// or operation
	3'b010: ALUres = srcA + srcB;				// add operation
	3'b100: ALUres = srcA & (~(srcB)); 		
	3'b101: ALUres = srcA | (~(srcB)); 
	3'b110: ALUres = srcA - srcB;				// subtract operation
	3'b111: ALUres =(srcA < srcB)? 1:0;		// SLT operation
	default: ALUres = 16'bxxxx_xxxx_xxxx_xxxx;
	endcase
	
end

assign Zero = (ALUres == 0) ? 1 : 0;      // Zero output is high if the result of the ALU operation is a zero

endmodule
