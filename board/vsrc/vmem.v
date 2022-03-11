module vmem (
    input clk,
    input reg [1:0] state,
    input [9:0] h_addr,
    input [8:0] v_addr,
    input reg flag,
    input reg [7:0]asc,
    output vga_data
);
reg [11:0] vga_mem [4095:0];
reg [9:0] h_left;
reg [8:0] v_top;
reg [11:0] read_rom;
reg [11:0] font_data;

initial begin
    $readmemh("resource/vga_font.txt", vga_mem);
end

//assign vga_data = ((h_addr<10'd128) & (v_addr<9'd128))? vga_mem[{h_addr[6:0],v_addr[6:0]}] : 24'h0;
// assign vga_data = ((h_addr<10'd9+x) & (h_addr>x) & (v_addr<9'd16+y) & (v_addr>y)) ? vga_mem[(h_addr[6:0]-x[6:0])*16+v_addr[6:0]-y[6:0]] : 24'h0;

// reg [9:0]x = 10'd0;
// reg [8:0]y = 9'd0;
// always @(posedge clk) begin
//     if (flag == 1) begin
//        if (state == 2'b00) begin
//         x = x + 10'd9;
//         if (x > 631) begin
//             x = 0;
//             y = y + 9'd16;
//             if (y > 464) begin
//                 y = 0;
//             end
//             end
//         end  
//     end
// end
  
assign h_left=((h_addr/9)<<3)+(h_addr/9);
//assign h_right=10'd9+h_left;
assign v_top=(v_addr>>4)<<4;
//assign v_bottom=10'd16+v_top;
//assign read_rom = (asc!=8'h00) ? {7'b0,{h_addr-h_left}[3:0],{v_addr-v_top}[3:0]} + (({7'b0,asc}-15'h61)<<7) + (({7'b0,asc}-15'h61)<<4) : 15'h0;
assign read_rom = (asc!=8'h00) ? ({3'b0,{v_addr - v_top}} + ({4'b0,asc}<<4)): 12'h0;
assign font_data = vga_mem[read_rom];
assign vga_data = font_data[{h_addr-h_left}[3:0]];

endmodule