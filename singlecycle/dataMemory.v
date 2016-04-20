`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Data Memory 
//
//	Memory module that stores 32-bit data values.
//	Currently, the memory is 32 by 32-bit
//
//	Asynchronous read, read first
// Writes to the memory if the write-enable bit (WE) is high
//
//////////////////////////////////////////////////////////////////////////////////

module dMem#(parameter dataWidth = 32) (input CLK , WE ,						// Clock signal and write-enable bit
													 input [dataWidth-1:0] adrs, WD, // 32-bit address from the ALU result
													 output [dataWidth-1:0] rData);  // 32-bit value pulled from the data memory
													 
reg [dataWidth-1:0] dMEM[0:48-1];

initial begin
//$readmemb("dMemm.txt",dMEM);				// initialize the data memory
$readmemb("dmat.txt",dMEM);	
end

always@(posedge CLK)begin
	if(WE)begin
		dMEM[adrs] <= WD;		// write to memory only if WE is high
	end
end

assign rData = dMEM[adrs];	// data pulled from memory

endmodule
