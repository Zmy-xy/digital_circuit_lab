module top (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg[7:0]seg0,
    output reg[7:0]seg1,
    output reg[7:0]seg2
);

reg [9:0] buffer;
reg [7:0]hex[15:0];
reg flag;

ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .buffer(buffer),
    .flag(flag)
);

led my_led(
    .clk(clk),
    .hex(hex)
);

reg [1:0] state;
initial begin
    assign state = 2'b00;
    assign seg2 = 8'b11111111;
    assign seg1 = 8'b11111111;
    assign seg0 = 8'b11111111; 
end

always @(posedge clk) begin
    if(flag) begin
        if (buffer[8:1] == 8'hf0) begin
            assign state = 2'b01;
            assign seg1 = 8'b11111111;
            assign seg0 = 8'b11111111;
            $display("state %x", state);
        end 
        else if(buffer[8:1] != 8'hf0 && state == 2'b00) begin
            assign state = 2'b00;
            assign seg1 = ~hex[buffer[8:5]];
            assign seg0 = ~hex[buffer[4:1]];
            $display("state %x", state);
        end
        else if(buffer[8:1] != 8'hf0 && state == 2'b01) begin
            assign state = 2'b10;
            assign seg1 = 8'b11111111;
            assign seg0 = 8'b11111111;
            $display("state %x", state);
        end
        else if(buffer[8:1] != 8'h00 && state == 2'b10) begin
            assign state = 2'b00;
            assign seg1 = ~hex[buffer[8:5]];
            assign seg0 = ~hex[buffer[4:1]];
            $display("state %x", state);
        end
    end
end

endmodule
