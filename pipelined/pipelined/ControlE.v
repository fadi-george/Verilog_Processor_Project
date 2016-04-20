`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	Control Signal Register with Synchronous Clear
//
//////////////////////////////////////////////////////////////////////////////////
module ControlE #(parameter N = 3)     (input CLK , CLR ,						// Clock signal

																input regwrD ,             // control signals
																input [1:0] memregD , 		// regwrites , memregs , memwrites
																input memwrD ,					// ALU control , register redistination
																input [4:0] ALUconD ,
																input alusrcD , 
																input [1:0] regdstD ,
																
																output reg regwrE , 
																output reg [1:0] memregE , 
																output reg memwrE ,
																output reg [4:0] ALUconE ,
																output reg alusrcE , 
																output reg [1:0] regdstE );
																
always @(posedge CLK) begin

	if(!CLR) begin					// pass values out 
		
		regwrE  <= regwrD;
		memregE <= memregD;
		memwrE  <= memwrD;	
		ALUconE <= ALUconD;
		alusrcE <= alusrcD;
		regdstE <= regdstD;		

	end
	else begin						// otherwise clear values

		regwrE  <= 0;
		memregE <= 0;
		memwrE  <= 0;	
		ALUconE <= 0;
		alusrcE <= 0;
		regdstE <= 0;
	
	end 
end

endmodule
