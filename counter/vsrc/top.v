module top(
  input clk,
  // output  reg [5:0] clk_1s,
  output  reg [5:0] clk_1s,
  output [7:0]seg0,seg1
);  
  reg [25:0] count_clk;

  always @(posedge clk)
  if(count_clk==8000000)
  begin
    count_clk <=0;
    clk_1s <= clk_1s + 1;
  end
  else
    count_clk <= count_clk+1;

  // always @(clk_1s)
  // if(clk_1s==60)
  // begin
  //   clk_1s <=0;
  //   clk_1m <= clk_1m + 1;
  // end
  // else
  //   clk_1s <= clk_1s;

  wire [7:0] segs [9:0];
  assign segs[0] = 8'b11111100;
  assign segs[1] = 8'b01100000;
  assign segs[2] = 8'b11011010;
  assign segs[3] = 8'b11110010;
  assign segs[4] = 8'b01100110;
  assign segs[5] = 8'b10110110;
  assign segs[6] = 8'b10111110;
  assign segs[7] = 8'b11100000;
  assign segs[8] = 8'b11111110;
  assign segs[9] = 8'b11110110;

  always @(clk_1s) begin
    assign seg1 = ~segs[clk_1s/10];
    assign seg0 = ~segs[clk_1s%10];
  end

endmodule
