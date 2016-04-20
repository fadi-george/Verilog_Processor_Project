`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//	HAZARD UNIT - To deal with any potential hazard in a pipeline processor design
//
//////////////////////////////////////////////////////////////////////////////////
module HazardUnit( input BranchD, 
                   input [4:0] RsD,				// Source Register in The Decode Stage
						 input [4:0] RtD,				// A possible destination Register in the decode stage
						 input [4:0] RsE,				// Source Register in The Execute Stage
						 input [4:0] RtE,				// A possible destination Register in the execute stage
						 input [4:0] WriteRegE,		
						 input [1:0] MemtoRegE,
						 input RegWriteE,
						 input [1:0] MemtoRegM,
						 input [4:0] WriteRegM,
						 input RegWriteM,
						 input [4:0] WriteRegW,
						 input RegWriteW,
						 output reg StallF,
						 output reg StallD,
						 output reg ForwardAD,
						 output reg ForwardBD,
						 output reg FlushE,
						 output reg [1:0] ForwardAE,
						 output reg [1:0] ForwardBE);

reg lwstall , branchstall;

always @* begin

	if((RsE != 0) && (RsE == WriteRegM) && RegWriteM)begin
		ForwardAE <= 2'b10;														// Forward ALUoutM
	end
	else if((RsE != 0) && (RsE == WriteRegW) && RegWriteW)begin
		ForwardAE <= 2'b01;														// Forward ResultW
	end
	else begin
		ForwardAE <= 2'b00;														// Dont Forward
	end

	if((RtE != 0) && (RtE == WriteRegM) && RegWriteM)begin
		ForwardBE <= 2'b10;
	end
	else if((RtE != 0) && (RtE == WriteRegW) && RegWriteW)begin
		ForwardBE <= 2'b01;
	end
	else begin
		ForwardBE <= 2'b00;
	end
	
	ForwardAD <= ((RsD != 0) && (RsD == WriteRegM) && RegWriteM ) ? 1 : 0;					// Forward ALUoutM
	ForwardBD <= ((RtD != 0) && (RtD == WriteRegM) && RegWriteM ) ? 1 : 0;						
	
	lwstall <= (((RsD == RtE) || (RtD == RtE)) && MemtoRegE) ? 1 : 0;	
	branchstall <= (BranchD && RegWriteE && ((WriteRegE == RsD) || (WriteRegE == RtD))) || (BranchD && MemtoRegM && ((WriteRegM == RsD) || (WriteRegM == RtD))) ? 1 : 0;

	StallF <= (lwstall || branchstall);
	StallD <= (lwstall || branchstall);
	FlushE <= (lwstall || branchstall);
end

endmodule
