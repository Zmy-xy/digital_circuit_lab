module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,buffer,flag,cnt,state);
    input clk,resetn,ps2_clk,ps2_data;

    output reg [9:0] buffer;        // ps2_data bits
    output reg flag;
    output reg [11:0]cnt;
    output reg [1:0] state;
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];
    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
            cnt <= 0;
        end
        else begin
            flag = 1'b0;
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    $display("recieve %x", buffer[8:1]);
                    flag = 1'b1;
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end

    always @(posedge clk) begin
      if(flag) begin
        if (buffer[8:1] == 8'hf0) begin
            assign state = 2'b10;
        end 
        else if(buffer[8:1] != 8'h00 && state == 2'b00) begin
            assign state = 2'b01;
        end
        else if(buffer[8:1] != 8'h00 && state == 2'b01) begin
            assign state = 2'b10;
        end
        else if(buffer[8:1] != 8'h00 && state == 2'b10) begin
            assign state = 2'b00;
            cnt <= cnt + 1;
        end
      end
    end

endmodule