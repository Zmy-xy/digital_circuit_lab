module top(
  input  en,
  input  [7:0]x,
  output reg [3:0]y,
  output [7:0]seg0
);

integer i;
wire [7:0] segs [7:0];

assign segs[0] = 8'b01100000;
assign segs[1] = 8'b11011010;
assign segs[2] = 8'b11110010;
assign segs[3] = 8'b01100110;
assign segs[4] = 8'b10110110;
assign segs[5] = 8'b10111110;
assign segs[6] = 8'b11100000;
assign segs[7] = 8'b11111110;

always @(x or en) begin
  if(en) begin
    y = 0;
    casez(x)
        8'b1??????? : y = 4'b1111;
        8'b01?????? : y = 4'b1110; 
        8'b001????? : y = 4'b1101;
        8'b0001???? : y = 4'b1100;
        8'b00001??? : y = 4'b1011;
        8'b000001?? : y = 4'b1010;
        8'b0000001? : y = 4'b1001;
        8'b00000001 : y = 4'b1000;
        default : y = 4'b0000;
    endcase
  end
  else y = 4'b0000;
  assign seg0 = (y[3]) ? ~segs[y[2:0]] : 8'b00000011;
end
endmodule
