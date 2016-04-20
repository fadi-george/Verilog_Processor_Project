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

module ALU #(parameter W = 32 , A = 5) (input signed [W-1:0] srcA , 			 // 2 32-bit inputs
										  input signed [W-1:0] srcB ,	         
										  input [A-1:0] AluCon ,		                // select-line for the ALU
										  input [A-1:0] ShiftAmt ,                    // value to shift by
										  output reg [W-1:0] ALUres);                 // output result of ALU
reg signed [W - 1:0] LO;									  
reg signed [W - 1:0] HI;	// high and low for 2 32-bit multiplication									  
										  
always@* begin

	case(AluCon)											// perform distinct operations
	
		5'b00000: ALUres = srcA & srcB;				// and operation
		5'b00001: ALUres = srcA | srcB;				// or operation
		5'b00010: ALUres = srcA + srcB;				// add operation		
		5'b00011: ALUres = (srcB << ShiftAmt);	   // sll 
		
		5'b00100: ALUres = srcA & (~(srcB)); 		
		5'b00101: ALUres = srcA | (~(srcB)); 
		5'b00110: ALUres = srcA - srcB;				// subtract operation
		5'b00111: ALUres = ((srcA < srcB)? 1:0);	// SLT operation
		
	   5'b01000: ALUres = 0;							// used for jr comparator 
		5'b01001: begin 
			ALUres = 0;
			{HI , LO} = srcA * srcB;					// mult
		end
		5'b01010: ALUres = (srcB << 16);			   // shift left by 16 bits 
		5'b01011: ALUres = srcA ^ srcB;				// xor
		
		5'b01100: ALUres = (srcB >> ShiftAmt);	   // srl
		5'b01101: ALUres = (srcB >>> ShiftAmt);	// sra
		5'b01110: ALUres = (srcB << srcA);			// sllv 
		5'b01111: ALUres = (srcB >> srcA);			// srlv 
		
		5'b10000: ALUres = (srcB >>> srcA);		   // srav
		5'b10001: ALUres = srcA * srcB;				// mul
		5'b10010: ALUres = LO;                    // mflo
		
		default: ALUres = 0;                    
	endcase
	
end

endmodule
