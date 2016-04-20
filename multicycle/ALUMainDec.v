//////////////////////////////////////////////////////////////////////////////////
//
//	ALU Main Decoder - Finite State Machine
// 
// Relies on the CLK, current state, and the opcode to determine the control
//	signals to pass out.
//
//////////////////////////////////////////////////////////////////////////////////
module ALUMainDec(input CLK , rst ,
						input [5:0] Op,
						output reg MemtoReg, RegDst, IorD,
						output reg [1:0] PCSrc,						
						output reg ALUSrcA,
						output reg [1:0] ALUSrcB,
						output reg IRWrite, MemWrite,PCWrite, Branch, RegWrite,  	//enable signals
						output reg [1:0] ALUOp); 
					
localparam s0 = 4'b0000, s1 = 4'b0001, s2 = 4'b0010, s3 = 4'b0011,	//s0: fetch, s1: decode, s2: memadr, s3: memread
			  s4 = 4'b0100, s5 = 4'b0101, s6 = 4'b0110, s7 = 4'b0111,	//s4: mem writeback, s5: memwrite, s6: execute, s7: alu writeback
			  s8 = 4'b1000, s9 = 4'b1001, s10 = 4'b1010, s11 = 4'b1011;	//s8: branch, s9: addi execute, s10: addi writeback, s11: jump
					
reg [3:0] state;								 
	
always @(posedge CLK) begin	

if (rst)	begin 
state <= s0;
end

else begin
	case (state)
	
	s0: state <= s1; // Go to Decode State 
	
	s1: begin 		 
		case (Op)
			6'b100011:  state <= s2;	// Go to MemAdr State
			6'b101011:  state <= s2;	// Go to MemAdr State
			6'b000000: 	state <= s6;	// Go Execure State
			6'b000100: 	state <= s8;	// Go to Branch State
			6'b001000:  state <= s9;	// Go to AddI Execute State
			6'b000010:  state <= s11;	// Go to Jump State
		endcase
	end
	
	s2: begin 								// Go to MemRead or MemWrite states
		case (Op)
			6'b100011: state <= s3;
			6'b101011: state <= s5;
		endcase
	end
	
	s3: state <= s4;						// Go to Memory Write Back
	
	s4: state <= s0;						// Go to Fetch State
	
	s5: state <= s0;						// Go to Fetch State
	
	s6: state <= s7;						// Go to ALUWrite Back
	
	s7: state <= s0;						// Go to Fetch State
	
	s8: state <= s0;						// Go Fetch State
	
	s9: state <= s10;						// Go to ADDI Writeback
	
	s10: state <= s0;						// Go to Fetch State
	
	s11: state <= s0;						// Go to Fetch State
	
	endcase
end
end
	
always@(state) begin	//Outputs
	case (state)
	s0: begin		   //Fetch
	
		IorD = 0; 
		ALUSrcA = 0;	
		ALUSrcB = 2'b01;	
		ALUOp = 2'b00;  
		PCSrc = 2'b00; 
		IRWrite = 1;
		PCWrite = 1;
		
		RegDst = 1'bx;		MemtoReg = 1'bx;		RegWrite = 0;		MemWrite = 0;	Branch = 0;
	end
	
	s1: begin			//Decode
	
		ALUSrcA = 0;
		ALUSrcB = 2'b11;		
		ALUOp = 2'b00;	
		
		IorD = 1'bx;    PCSrc = 2'bxx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    PCWrite = 0;    RegWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s2: begin			//MemAdr
		
		ALUSrcA = 1;
		ALUSrcB = 2'b10;
		ALUOp = 2'b00;
		
		IorD = 1'bx;    PCSrc = 2'bxx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    PCWrite = 0;    RegWrite = 0;    MemWrite = 0; 	Branch = 0;
	end
	
	s3: begin		   //MemRead
	
		IorD = 1;
					
		ALUSrcA = 1'bx;  ALUSrcB = 2'bxx;  ALUOp = 2'bxx;  PCSrc = 2'bxx;  RegDst = 1'bx;  MemtoReg = 1'bx;  IRWrite = 0;  PCWrite = 0;  RegWrite = 0;  MemWrite = 0;  Branch = 0;
	end
	
	s4: begin			//Mem Writeback
	
		RegDst = 0;
		MemtoReg = 1;		
		RegWrite = 1;			
		
		IorD = 1'bx;    ALUSrcA = 1'bx;    ALUSrcB = 2'bxx;    ALUOp = 2'bxx;    PCSrc = 2'bxx;    IRWrite = 0;    PCWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s5: begin			//MemWrite
	
		IorD = 1;
		MemWrite = 1;	
		
		ALUSrcA = 1'bx;   ALUSrcB = 2'bxx;   ALUOp = 2'bxx;   PCSrc = 2'bxx;   RegDst = 1'bx;   MemtoReg = 1'bx;   IRWrite = 0;   PCWrite = 0;   RegWrite = 0;   Branch = 0;
	end
	
	s6: begin			//Execute
					
		ALUSrcA = 1;
		ALUSrcB = 2'b00;
		ALUOp = 2'b10;
		
		IorD = 1'bx;    PCSrc = 2'bxx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    PCWrite = 0;    RegWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s7: begin			//ALU Writeback
	
		RegDst = 1;
		MemtoReg = 0;
		RegWrite = 1;

		IorD = 1'bx;    ALUSrcA = 1'bx;    ALUSrcB = 2'bxx;    ALUOp = 2'bxx;    PCSrc = 2'bxx;    IRWrite = 0;    PCWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s8: begin			//Branch
		
		ALUSrcA = 1;
		ALUSrcB = 2'b00;
		ALUOp = 2'b01;
		PCSrc = 2'b01;  
		Branch = 1;
		
		IorD = 1'bx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    PCWrite = 0;    RegWrite = 0;    MemWrite = 0;    
	end
	
	s9: begin			//ADDI Execute
	
		ALUSrcA = 1;
		ALUSrcB = 2'b10;
		ALUOp = 2'b00;
		
		IorD = 1'bx;    PCSrc = 2'bxx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    PCWrite = 0;    RegWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s10: begin			//ADDI Writeback
	
		RegDst = 0;
		MemtoReg = 0;
		RegWrite = 1;
		
		IorD = 1'bx;    ALUSrcA = 1'bx;    ALUSrcB = 2'bxx;    ALUOp = 2'bxx;    PCSrc = 2'bxx;    IRWrite = 0;    PCWrite = 0;    MemWrite = 0;    Branch = 0;
	end
	
	s11: begin			//Jmp
		
		PCSrc = 2'b10;
		PCWrite = 1;
		
		IorD = 1'bx;   ALUSrcA = 1'bx;   ALUSrcB = 2'bxx;    ALUOp = 2'bxx;    RegDst = 1'bx;    MemtoReg = 1'bx;    IRWrite = 0;    RegWrite = 0;    MemWrite = 0;   Branch = 0;
	end
	
	default: begin
		IorD = 1'bx;      ALUSrcA = 1'bx;    ALUSrcB = 2'bxx;
		ALUOp = 2'bxx;    PCSrc = 2'bxx;     RegDst = 1'bx;
		MemtoReg = 1'bx;	IRWrite = 1'bx;	 PCWrite = 1'bx;
		RegWrite = 1'bx;	MemWrite = 1'bx; 	 Branch = 1'bx;
	end
endcase	
end

endmodule
