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
					input [2:0] aluop,			// takes in the operation to peform from the ALU main decoder
					output reg[4:0] alucn,
					output reg jr);	         // sends control signal to ALU
					
always@*begin
	
	case(aluop)									// Based on the ALU operation, determine the control signal to send out	
		
		3'b000: alucn = 5'b00010;				// add
		3'b001: alucn = 5'b00110;				// subtract
		3'b010: alucn = 5'b01010;				// shift
		3'b011: alucn = 5'b00111;				// slt
		3'b100: alucn = 5'b00000;				// and (&)		
		3'b101: alucn = 5'b00001;				// and (|)
		3'b110: alucn = 5'b01011;				// xor (^)
		
		default: 								// check function
			case(func)
								
				6'b000000: alucn = 5'b00011;	// shift left (logical)
				6'b000010: alucn = 5'b01100;	// shift right (logical)
				6'b000011: alucn = 5'b01101;	// shift right (arithmetic)
				6'b000100: alucn = 5'b01110;	// shift left logical (variable)
				6'b000110: alucn = 5'b01111;	// shift right logical (variable)
				6'b000111: alucn = 5'b10000;	// shift right arithmetic (variable)
				

				6'b001000: begin
					jr = 1;							// jr
					alucn = 5'b01000;
				end
				
				6'b010010: alucn = 5'b10010;	// mflo
				6'b011000: alucn = 5'b01001;	// multiply
				6'b011100: alucn = 5'b10001;	// mul (pseudo)
				6'b100000: alucn = 5'b00010;  // add
				
				6'b100010: alucn = 5'b00110;  // subtract
				6'b100100: alucn = 5'b00000;  // and operation
				6'b100101: alucn = 5'b00001;  // or operation
				6'b100110: alucn = 5'b01011;  // xor operation
				
				6'b101010: alucn = 5'b00111;  // slt

				default:   begin
					alucn = 5'bxxxxx;	
					jr = 0;
				end
			endcase
	endcase
	
end

endmodule
