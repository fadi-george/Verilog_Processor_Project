`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	ALU Decoder
//	
//	Determines control signal for ALU based on op signal from ALU main decoder
//	and function bits from the instruction.
//	
//////////////////////////////////////////////////////////////////////////////////

module ALUDec( input [5:0] func,				// takes in function bits
					input [1:0] aluop,			// takes in the operation to peform from the ALU main decoder
					output reg[ 2:0] alucn);	// sends control signal to ALU
					
always@*begin
	
	case(aluop)									// Based on the ALU operation, determine the control signal to send out	
		2'b00: alucn = 3'b010;				// add
		2'b01: alucn = 3'b110;				// subtract
		default: 								// check function
			case(func)
				6'b100000: alucn = 3'b010; // add
				6'b100010: alucn = 3'b110; // subtract
				6'b100100: alucn = 3'b000;	// and operation
				6'b100101: alucn = 3'b001; // or operation
				6'b101010: alucn = 3'b111; // slt
				default: alucn = 3'bxxx;	
			endcase
	endcase
	
end

endmodule
