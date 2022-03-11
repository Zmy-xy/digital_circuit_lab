module top (
    input clk,
    input rst,
    input button,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);

assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] vga_data;

vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);
reg [9:0]i = 10'd0;

vmem my_vmem(
    .h_addr(h_addr),
    .v_addr(v_addr[8:0]),
    .vga_data(vga_data),
    .i(i)
);

always @(posedge button) begin
    i = i + 10'd10; 
end

endmodule
