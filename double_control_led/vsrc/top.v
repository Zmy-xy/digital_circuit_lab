module top(
  input a,
  input b,
  input clk,
  input rst,
  output led
);

  assign led = a ^ b;
endmodule
