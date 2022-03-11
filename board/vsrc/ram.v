module ram (
    input clk,
    input reg [1:0] state,
    input wr,
    input [9:0]h_addr,
    input [9:0]v_addr,
    input reg [7:0]din,
    output reg [7:0]dout
);
    reg [7:0]ram[4095:0];
    wire [11:0] outaddr;
    reg [9:0] h_mem;
    reg [9:0] v_mem;
    reg [11:0] addr;

    always @(negedge clk) begin
        if (wr && state[1]) begin
           ram[addr] = din;
           $display("asc %x", din); 
           if(din == 8'h0D)
                addr = (addr/12'd71)*12'd71+12'd71;
            else
                addr = addr + 12'b1;
        end
    end
    always @(posedge clk) begin
        dout <=ram[outaddr];
    end
    assign h_mem = h_addr/9;
    assign v_mem = v_addr>>4;
    assign outaddr = {2'b00,h_mem} + v_mem[4:0]*7'd71;

endmodule