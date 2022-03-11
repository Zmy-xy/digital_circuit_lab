module ps2asc (
    input reg [7:0] ps2,
    output reg [7:0]asc
);
    reg [7:0] mem[255:0];

    initial begin
    $readmemh("resource/mem.txt", mem);
    end

    assign asc = mem[ps2];
endmodule