`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:56 04/10/2018 
// Design Name: 
// Module Name:    gcdmprog 
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
module microcontrol(
   input g0,gy,reset,clock,
   output reg [4:0] cw);
   //states
    parameter s0  = 2'b00,s1 = 2'b01,s2 = 2'b10,s3 = 2'b11 ;
    reg   [2:0]          state        ;// Seq part of the FSM
    wire  [2:0]          next_state   ;// combo part of FSM
    assign next_state = fsm_function(state, g0, gy);
   //always@(x or y) begin
    function [2:0] fsm_function;
       input  [2:0]  state ;        
       input    g0 ;
       input    gy ;
         case(state)
          {s0,s2} : if (g0 == 1'b0) begin
                       fsm_function = s3;
                    end else if (gy == 1'b0) begin
                       fsm_function= s1;
                    end else begin
                       fsm_function = s2;
                    end
          s1 : fsm_function = s2;
          s3 : fsm_function = s3;
          default : fsm_function = s0;
         endcase
    endfunction
         
    //sequential part
    always @ (posedge clock)
     begin : FSM_SEQ
     if (reset == 1'b1)
       state <=  #1  s0;
     else 
       state <=  #1  next_state;
     end
                
                
    //----------Output Logic-----------------------------
    always @ (posedge clock)
     begin : OUTPUT_LOGIC
      case(state)
       s0 : cw = #1 5'b00111;
       s1 : cw = #1 5'b01011;
       s2 : cw = #1 5'b10010;
       s3 : cw = #1 5'b00000;
       default : cw <= #1 5'b00000;
      endcase
     end // End Of Block OUTPUT_LOGIC
endmodule

module gcdmprog(
    input [7:0] x,
    input [7:0] y,
    input reset,
    output reg [7:0] f
    );
    //registers for internal variables
     reg [7:0] xr=0;
     reg [7:0] yr;
     reg [7:0] temp;
     reg [4:0] con;        //control word output
     reg clock;
	  genvar i;
	  
     microcontrol inst(xr<=0,xr<yr,1'b1,1'b1,con);      
     always@(x or y) begin
     //generate
     for (i=0;i<100;i=i+1) begin:LOOP
       
        case(con)
         5'b00111:begin //select,load
                   xr=x;
                   yr=y;
                  end
         5'b01011:begin //swap
                   temp=xr;
                   xr=yr;
                   yr=temp;
                  end
         5'b10010:xr=xr-yr; //subtract,load
         5'b00000:begin   //end,load
                   f=yr;
                   disable LOOP;
                  end
         default:begin
                   xr=xr;
                   yr=yr;
                 end
        endcase
       //end
       microcontrol inst2(xr<=0,xr<yr,reset,1'b1,con);
     end
     //endgenerate
	  end
endmodule