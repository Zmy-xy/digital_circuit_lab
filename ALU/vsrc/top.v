module top(
  input   signed[7:0]in_x, in_y,
  input   [2:0]op,
  output  reg[7:0]out_s,
  output  out_c,Overflow,zero
);  
  reg [7:0]out_s_1,out_s_2;
  reg Overflow_2;
  add add1(
  in_x,in_y,0,out_s_1,out_c,Overflow,zero);
  add divi(
  in_x,in_y,1,out_s_2,out_c,Overflow_2,zero);

  always @(op) begin
    case (op)
      3'b000 : out_s = out_s_1;
      3'b001 : out_s = out_s_2;
      3'b010 : out_s = ~in_x;
      3'b011 : out_s = in_x & in_y;
      3'b100 : out_s = in_x | in_y;
      3'b101 : out_s = in_x ^ in_y;
      3'b110 : out_s = (out_s_2[7]^Overflow_2) ? 1 : 0;
      3'b111 : out_s = (in_x == in_y) ? 1 : 0;
      default: out_s = in_x + in_y; 
    endcase
  end
endmodule
