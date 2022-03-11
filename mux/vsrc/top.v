module top(x,s,y);
  input   [7:0]x;
  input   [1:0]s;
  output  [1:0]y;
  MuxKeyWithDefault #(4, 2, 2) i0 (y, s, 2'b00, {
    2'b00, x[7:6],
    2'b01, x[5:4],
    2'b10, x[3:2],
    2'b11, x[1:0]
  });
endmodule
