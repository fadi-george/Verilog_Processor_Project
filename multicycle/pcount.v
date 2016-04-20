`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////
module pcount #(parameter N = 5)(input CLK, RST,
											output [N-1:0] newp);
reg [N-1:0] tmp;
always @(posedge CLK or negedge RST)begin
	
	if(~RST) 		tmp <= 0;
	
	else 		tmp <= tmp + 1;

end

assign newp = tmp;

endmodule
