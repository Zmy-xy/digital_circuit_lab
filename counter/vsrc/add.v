module add(
  input   [7:0]in_x,in_y,
  input   Cin,
  output  [7:0]Result,
  output  carry,Overflow,zero
);  
  wire    [7:0]t_add_Cin;
  wire    [7:0]x;
  assign  x = (Cin)? 8'b00000001 : 8'b00000000;
  assign t_add_Cin =( {8{Cin}}^in_y ); 
  assign {carry, Result} = in_x + t_add_Cin + x;
  assign Overflow = (in_x[7] == t_add_Cin[7]) && (Result[7] != in_x[7]);
  assign zero = ~(| Result);
endmodule
