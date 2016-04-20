`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Instruction/Data Memory 
//
//	Memory module that stores 32-bit instructions and also writes data into memory.
//	Currently, the memory is 32 by 32-bit
//
//	Synchronous / Read First
//
//////////////////////////////////////////////////////////////////////////////////

module IDMem #(parameter addWidth = 5 , dataWidth = 32) 
						  (input CLK , We ,					// CLK signal and write enable
						   input [dataWidth-1:0] addr ,  // address passed in by PC
							input [dataWidth-1:0] Wd ,   	// data to put in memory 
							output [dataWidth-1:0] out);  // value to pass out
							
reg [dataWidth-1:0] idMEM[0:2*(2**addWidth)-1];    // data and instruction memory combined 

reg [5:0]  i; 
reg [31:0] j;

initial begin
i = 0;
j = i;
for(i = 0; i < 15; i=i+1)begin
	idMEM[i] = j;						// Load Memory Locations 0 - 14 
	j = j + 1;					
end
end

initial begin
$readmemh("prog.dat", idMEM);		// Load instructions onto the memory from memory locations 15 - 32
end

always@(posedge CLK)begin
	if(We)begin
		idMEM[addr] <= Wd;		   // Write data in to memory 
	end	
end

assign out = idMEM[addr];        // Output Intrusction or Data

endmodule