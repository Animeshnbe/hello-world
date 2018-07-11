`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:33 04/10/2018 
// Design Name: 
// Module Name:    booth 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module booth(
    input [7:0] m,
    input [7:0] q,
    input clk,
    output reg [15:0] a
    );
	 integer count=8;
	 reg [8:0] q1;
	 reg [7:0] a1=8'b0;
	 q1={q,0};
	 always@(posedge clk) begin
	 while (count>0) begin
		if (q1[1:0]== 2'b10)
			a1=a1-m;
		else if(q1[1:0]== 2'b01)
			a1=a1+m;
		
		q1={a1[0],q[8:1]};
		a1={a1[7],a1[7:1]};
		count=count-1;
	 end
	 a={a1,q[8:1]};
	 end
	 
endmodule
