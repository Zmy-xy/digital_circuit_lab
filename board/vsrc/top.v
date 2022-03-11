module top (
    input clk,
    input rst,
    input button,
    input ps2_clk,
    input ps2_data,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);

reg [1:0] state;
reg [9:0] buffer;
reg flag;
reg [11:0]cnt;
reg [7:0]asc;
reg [7:0]dout;

ps2asc my_ps2asc(
    .ps2(buffer[8:1]),
    .asc(asc)
);

ram my_ram(
    .clk(clk),
    .state(state),
    .wr(flag),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .din(asc),
    .dout(dout) //ouput ascii
);

vmem my_vmem(
    .clk(clk),
    .state(state),
    .h_addr(h_addr),
    .v_addr(v_addr[8:0]),
    .flag(flag),
    .asc(dout),
    .vga_data(vga_data)
);

ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .buffer(buffer), //buffer2ASCII
    .flag(flag),
    .cnt(cnt),
    .state(state)
);

assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire vga_data;

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

endmodule
