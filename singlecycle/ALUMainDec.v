`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// ALU Main Decoder
//	
//	Determines what signals to set for the writing to memories or for jumps.
//
//////////////////////////////////////////////////////////////////////////////////

module ALUMainDec (input [5:0] op,				// operational code
						 output reg MemReg, 			// controls if ALU result should be used if not read from the data memory first
						 output reg MemWr, 			// write enable for the data memery 
						 output reg Brnch, 			// to see if a branch needs to be taken
						 output reg ALUsrc, 			// controls if a register value or an immediate get passed into the ALU
						 output reg RegDs, 			// determines what address to write to for the register file
						 output reg RegWr,			// write enable for register file
						 output reg jmp,				// jump select line for jump multiplexer 
						 output reg [1:0] ALUop);

always@* begin
	case(op) 			// based on op-code, determine what signals to send
	
	6'b000000: begin  // R-Type instruction
	RegWr = 1; RegDs = 1; ALUsrc = 0; Brnch = 0; MemWr = 0; MemReg = 0; ALUop = 2'b10; jmp = 0;
	end
			
	6'b100011: begin	// lw instruction
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; MemWr = 0; MemReg = 1; ALUop = 2'b00; jmp = 0;
	end	
	
	6'b101011: begin  // sw instruction 
	RegWr = 0; RegDs = 1'bx; ALUsrc = 1; Brnch = 0; MemWr = 1; MemReg = 1'bx; ALUop = 2'b00; jmp = 0;
	end		
	
	6'b000100: begin	// branch equal (beq)
	RegWr = 0; RegDs = 1'bx; ALUsrc = 0; Brnch = 1; MemWr = 0; MemReg = 1'bx; ALUop = 2'b01; jmp = 0;
	end	
	
	6'b001000: begin	// add immediate (addi)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; MemWr = 0; MemReg = 0; ALUop = 2'b00; jmp = 0;
	end 

	6'b000010: begin	// jump instruction (j)
	RegWr = 0; RegDs = 1'bx; ALUsrc = 1'bx; Brnch = 1'bx; MemWr = 0; MemReg = 1'bx; ALUop = 2'bxx; jmp = 1;
	end
	
	6'b000011: begin	// jump and link instruction (jal)
	RegWr = 0; RegDs = 1'bx; ALUsrc = 1'bx; Brnch = 1'bx; MemWr = 0; MemReg = 1'bx; ALUop = 2'bxx; jmp = 1;
	end
	endcase
end

endmodule
