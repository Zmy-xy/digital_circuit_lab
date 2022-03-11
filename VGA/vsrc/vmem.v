module vmem (
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [23:0] vga_data,
    output reg [9:0]i
);

reg [23:0] vga_mem [16383:0];

initial begin
    $readmemh("resource/image1.mif", vga_mem);
end

//assign vga_data = ((h_addr<10'd128) & (v_addr<9'd128))? vga_mem[{h_addr[6:0],v_addr[6:0]}] : 24'h0;
assign vga_data = ((h_addr<10'd128+i) & (h_addr>i) & (v_addr<9'd128+i[8:0]) & (v_addr>i[8:0])) ? vga_mem[{h_addr[6:0]-i[6:0],v_addr[6:0]-i[6:0]}] : 24'h0;

endmodule