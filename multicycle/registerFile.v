`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Register File
//
// Memory module that contains registers and their values
// Asynchronous read-first memory.
//	Writes when write-enable (we) is high
// Currently set at 32 by 32-bit.
//
//////////////////////////////////////////////////////////////////////////////////

module rFile #(parameter addWidth = 5 , dataWidth = 32) (input  CLK , WE3 ,            // CLK signal and write-enable bit
																 input  [addWidth  -1:0] A1 , A2 , A3,	// 5-bit address A1 will be the rs register's address
																 input  [dataWidth -1:0] WD3 ,			// data to be written to address A3
																 output [dataWidth -1:0] RD1 , RD2);   // values contained in registers A1(rs) and A2(rt)
reg [dataWidth-1:0] rMEM[0:(2**addWidth)-1];	
		
initial begin
$readmemb("rFile.txt",rMEM); // load values into the memory/registers
end
		
always@(posedge CLK)begin
	if(WE3)begin
		rMEM[A3] <= WD3;		// write to address A3 when the write-enable bit is high
	end
end

assign RD1 = rMEM[A1];		// read 32-bit value from 5-bit address

assign RD2 = rMEM[A2];

endmodule
