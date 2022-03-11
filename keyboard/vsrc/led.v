module led(
  input clk,
  output [7:0]hex[15:0]
);  
                
    assign hex[0] = 8'b11111100;
    assign hex[1] = 8'b01100000;
    assign hex[2] = 8'b11011010;
    assign hex[3] = 8'b11110010;
    assign hex[4] = 8'b01100110;
    assign hex[5] = 8'b10110110;
    assign hex[6] = 8'b10111110;
    assign hex[7] = 8'b11100000;
    assign hex[8] = 8'b11111110;
    assign hex[9] = 8'b11110110;
    assign hex[10] = 8'b11101110;
    assign hex[11] = 8'b00111110;
    assign hex[12] = 8'b10011100;
    assign hex[13] = 8'b01111010;
    assign hex[14] = 8'b10011110;
    assign hex[15] = 8'b10001110;

endmodule
