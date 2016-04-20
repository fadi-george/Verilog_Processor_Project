`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Register File
//
// Memory module that contains registers and their values
// Asynchronous read-first memory.
//	Writes when write-enable (we) is high
// Currently set at 32 bits wide and 32 words long
//
//////////////////////////////////////////////////////////////////////////////////

module rFile #(parameter addWidth = 5 , dataWidth = 32) (input  CLK , WE3 ,            // CLK signal and write-enable bit
																 input  [addWidth  -1:0] A1 , A2 , A3,	// 5-bit address A1 will be the rs register's address
																 input  [dataWidth -1:0] WD3 ,			// data to be written to address A3
																 output reg [dataWidth -1:0] RD1 , RD2);   // values contained in registers A1(rs) and A2(rt)
reg [dataWidth-1:0] rMEM[0:(2**addWidth)-1];	
		
initial begin
	$readmemh("regMem.dat",rMEM); 	// load values into the memory/registers
end
		
always@(posedge CLK)begin
	if(WE3)begin
			rMEM[A3] <= WD3;				// write to address A3 when the write-enable bit is high
	end
end

always @* begin            			// read 32-bit value from 5-bit address
	if((A1 == A3) && WE3) begin    
		RD1 = WD3;							// pass out writedata if reading and writing to same register
	end
	else begin
		RD1 = ((A1 == 0) ? 0 : (rMEM[A1]));					// otherwise read from memory
	end

	if((A2 == A3) && WE3) begin
		RD2 = WD3;
	end
	else begin
		RD2 = ((A2 == 0) ? 0 : (rMEM[A2]));		
	end
end

endmodule
