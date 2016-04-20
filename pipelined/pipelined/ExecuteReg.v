`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////
module ExecuteReg #(parameter M = 32 , N = 5)  (input CLK , CLR ,						// Clock signal

																input [M-1:0] rd1 , 
																input [M-1:0] rd2 ,
																input [M-1:0] SimmD,
																
																input [N-1:0] rsd ,
																input [N-1:0] rtd ,
																input [N-1:0] rdd ,
																
																input [N-1:0] shd ,
																input [M-1:0] pcd ,
																
																output reg [M-1:0] re1 , 
																output reg [M-1:0] re2 ,
																output reg [M-1:0] SimmE ,
																
																
																output reg [N-1:0] rse ,
																output reg [N-1:0] rte ,
																output reg [N-1:0] rde ,
																
																output reg [N-1:0] she ,
																output reg [M-1:0] pce);	
																
always @(posedge CLK) begin

	if(!CLR) begin
	
		re1 	<= rd1;
		re2 	<= rd2;
		SimmE <= SimmD;	

		rse   <= rsd;
		rte   <= rtd;
		rde   <= rdd;
		
		she   <= shd;
		pce   <= pcd;
	end
	else begin
		re1   <= 0;
		re2   <= 0;
		SimmE <= 0;		

		rse   <= 0;
		rte   <= 0;
		rde   <= 0;		
		
		she   <= 0;
		pce   <= 0;
	end 
end

endmodule
