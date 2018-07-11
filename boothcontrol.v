`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:47:11 04/10/2018 
// Design Name: 
// Module Name:    boothcontrol 
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
//control unit
module boothController(input a1, input a2,input clk, output reg sub,output reg add);
  always@(posedge clk)
  begin //Booth cases
    case ({a1,a2})
      2'b00: sub = 0; add = 0;
      2'b01: sub = 0; add = 1;
      2'b10: sub = 1; add = 0;
      2'b11: sub = 0; add = 0;
    endcase
  end
endmodule

module boothcontrol(input[7:0]x, input [7:0]y,output reg[15:0]product, input control, input clk);
  integer i=0;
  reg sub;
  reg add;
  reg [8:0]tempy;
  always@(posedge clk)
    begin
    product = 0;
    tempy = {y[7:0],0};
    for(i=8 ; i>1 ; i=i-1)
      begin
      boothController bC (tempy[i],tempy[i-1],clk,sub,add);
      // Shift and subtract else shift and add
      if (sub)
        begin
        product = product<<1;
        product = product - {x[7],x[7],x[7],x[7],x};//sign extension
        end
      else
        begin
        if (add)
          begin
          product = product<<1;
          product = product + x;
          end
        else
          product = product<<1;
        end
      end
    end
endmodule