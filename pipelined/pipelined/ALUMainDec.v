`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// ALU Main Decoder
//	
//	Determines what signals to set for the writing to memories or for jumps and branches.
//
//////////////////////////////////////////////////////////////////////////////////

module ALUMainDec (input [5:0] op,				// operational code
						 output reg [1:0] MemReg, 	// controls if ALU result should be used if not read from the data memory first
						 output reg MemWr, 			// write enable for the data memery 
						 output reg Brnch, 			// to see if a branch needs to be taken
						 output reg Brnchne,			// take branch if source registers are not equal
						 output reg ALUsrc, 			// controls if a register value or an immediate get passed into the ALU
						 output reg [1:0] RegDs, 	// determines what address to write to for the register file
						 output reg RegWr,			// write enable for register file
						 output reg jmp,				// jump select line for jump multiplexer 
						 output reg [2:0] ALUop);  // ALU operation to perform

always@* begin
	case(op) 			// based on op-code, determine what signals to send
	
	6'b000000: begin  // R-Type instruction
	RegWr = 1; RegDs = 1; ALUsrc = 0; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 7; jmp = 0; 
	end

	6'b000010: begin	// jump instruction (j)
	RegWr = 0; RegDs = 2'bxx; ALUsrc = 1'bx; Brnch = 1'bx; Brnchne = 1'bx; MemWr = 0; MemReg = 2'bxx; ALUop = 3'bxxx; jmp = 1;
	end

	6'b000011: begin	// jump and link instruction (jal)
	RegWr = 1; RegDs = 2; ALUsrc = 1'bx; Brnch = 1'bx; Brnchne = 1'bx;  MemWr = 0; MemReg = 2; ALUop = 3'bxxx; jmp = 1;
	end
	
	6'b000100: begin	// branch equal (beq)
	RegWr = 0; RegDs = 2'bxx; ALUsrc = 0; Brnch = 1; Brnchne = 0;  MemWr = 0; MemReg = 2'bxx; ALUop = 1; jmp = 0;
	end	
	
	6'b000101: begin	// branch not equal (bne)
	RegWr = 0; RegDs = 2'bxx; ALUsrc = 0; Brnch = 0; Brnchne = 1; MemWr = 0; MemReg = 2'bxx; ALUop = 1; jmp = 0;
	end	
	
	6'b001000: begin	// add immediate (addi)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 0; jmp = 0;
	end
	
	6'b001010: begin	// slt immediate (slti)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 3; jmp = 0;
	end
	
	6'b001100: begin	// and immediate (andi)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 4; jmp = 0;
	end	
	
	6'b001101: begin	// or immediate (ori)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 5; jmp = 0;
	end
	
	6'b001110: begin	// xor immediate (xori)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 6; jmp = 0;
	end
	
	6'b001111: begin  // load upper immediate (lui)
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 0; ALUop = 2; jmp = 0;
	end
	
	6'b100011: begin	// lw instruction
	RegWr = 1; RegDs = 0; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 0; MemReg = 1; ALUop = 0; jmp = 0;
	end	
	
	6'b101011: begin  // sw instruction 
	RegWr = 0; RegDs = 2'bxx; ALUsrc = 1; Brnch = 0; Brnchne = 0; MemWr = 1; MemReg = 2'bxx; ALUop = 0; jmp = 0;
	end		

	default: begin    // otherwise 
	RegWr = 1'b0; RegDs = 2'bxx; ALUsrc = 1'bx; Brnch = 1'bx;  Brnchne = 1'bx; MemWr = 1'b0; MemReg = 2'bxx; ALUop = 3'bxxx; jmp = 1'bx;	
	end
	
	endcase
end

endmodule
