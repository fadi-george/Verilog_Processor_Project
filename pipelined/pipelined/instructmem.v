`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Instruction Memory 
//
//	Memory module that stores 32-bit instructions.
//	Currently, the memory is 32 bits wide and 64 words long
//
//	Asynchronous read memory 
//
//////////////////////////////////////////////////////////////////////////////////

module iMem #(parameter addWidth = 5 , dataWidth = 32) (input [dataWidth-1:0] addr,    		// address passed in by PC
																		  output [dataWidth-1:0] out );  		// value to pass out
							
reg [dataWidth-1:0] MEM[0:2*(2**addWidth)-1];

initial begin
//$readmemb("test.txt", MEM);
$readmemh("instMem.dat", MEM);		               	// load instructions onto the memory
end
	
assign out = MEM[addr];
 
endmodule
