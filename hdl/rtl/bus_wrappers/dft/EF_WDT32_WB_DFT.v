/*
	Copyright 2025 Efabless Corp.

	Author: Efabless Corp. (ip_admin@efabless.com)

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	    http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

*/

/* THIS FILE IS GENERATED, DO NOT EDIT */

`timescale 1ns / 1ps
`default_nettype none

module EF_WDT32_WB (

    input  wire        clk_i,
    input  wire        rst_i,
    input  wire [31:0] adr_i,
    input  wire [31:0] dat_i,
    output wire [31:0] dat_o,
    input  wire [ 3:0] sel_i,
    input  wire        cyc_i,
    input  wire        stb_i,
    output reg         ack_o,
    input  wire        we_i,
    output wire        IRQ
);

  localparam timer_REG_OFFSET = 16'h0000;
  localparam load_REG_OFFSET = 16'h0004;
  localparam control_REG_OFFSET = 16'h0008;
  localparam IM_REG_OFFSET = 16'hFF00;
  localparam MIS_REG_OFFSET = 16'hFF04;
  localparam RIS_REG_OFFSET = 16'hFF08;
  localparam IC_REG_OFFSET = 16'hFF0C;

  reg [0:0] GCLK_REG;
  wire clk_g;

  wire clk_gated_en = sc_testmode ? 1'b1 : GCLK_REG[0];
  ef_util_gating_cell clk_gate_cell (

      // USE_POWER_PINS
      .clk(clk_i),
      .clk_en(clk_gated_en),
      .clk_o(clk_g)
  );

  wire          clk = clk_g;
  wire          rst_n = (~rst_i);

  wire          wb_valid = cyc_i & stb_i;
  wire          wb_we = we_i & wb_valid;
  wire          wb_re = ~we_i & wb_valid;
  wire [   3:0] wb_byte_sel = sel_i & {4{wb_we}};

  wire [32-1:0] WDTMR;
  wire [32-1:0] WDTLOAD;
  wire [ 1-1:0] WDTTO;
  wire [ 1-1:0] WDTEN;

  // Register Definitions
  wire [32-1:0] timer_WIRE;
  assign timer_WIRE = WDTMR;

  reg [31:0] load_REG;
  assign WDTLOAD = load_REG;
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) load_REG <= 0;
    else if (wb_we & (adr_i[16-1:0] == load_REG_OFFSET)) load_REG <= dat_i[32-1:0];

  reg [0:0] control_REG;
  assign WDTEN = control_REG;
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) control_REG <= 0;
    else if (wb_we & (adr_i[16-1:0] == control_REG_OFFSET)) control_REG <= dat_i[1-1:0];

  localparam GCLK_REG_OFFSET = 16'hFF10;
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) GCLK_REG <= 0;
    else if (wb_we & (adr_i[16-1:0] == GCLK_REG_OFFSET)) GCLK_REG <= dat_i[1-1:0];

  reg  [  0:0] IM_REG;
  reg  [  0:0] IC_REG;
  reg  [  0:0] RIS_REG;

  wire [1-1:0] MIS_REG = RIS_REG & IM_REG;
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) IM_REG <= 0;
    else if (wb_we & (adr_i[16-1:0] == IM_REG_OFFSET)) IM_REG <= dat_i[1-1:0];
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) IC_REG <= 1'b0;
    else if (wb_we & (adr_i[16-1:0] == IC_REG_OFFSET)) IC_REG <= dat_i[1-1:0];
    else IC_REG <= 1'd0;

  wire [0:0] wdtto = WDTTO;

  integer _i_;
  always @(posedge clk_i or posedge rst_i)
    if (rst_i) RIS_REG <= 0;
    else begin
      for (_i_ = 0; _i_ < 1; _i_ = _i_ + 1) begin
        if (IC_REG[_i_]) RIS_REG[_i_] <= 1'b0;
        else if (wdtto[_i_-0] == 1'b1) RIS_REG[_i_] <= 1'b1;
      end
    end

  assign IRQ = |MIS_REG;

  EF_WDT32 instance_to_wrap (
      .clk(clk),
      .rst_n(rst_n),
      .WDTMR(WDTMR),
      .WDTLOAD(WDTLOAD),
      .WDTTO(WDTTO),
      .WDTEN(WDTEN)
  );

  assign	dat_o = 
			(adr_i[16-1:0] == timer_REG_OFFSET)	? timer_WIRE :
			(adr_i[16-1:0] == load_REG_OFFSET)	? load_REG :
			(adr_i[16-1:0] == control_REG_OFFSET)	? control_REG :
			(adr_i[16-1:0] == IM_REG_OFFSET)	? IM_REG :
			(adr_i[16-1:0] == MIS_REG_OFFSET)	? MIS_REG :
			(adr_i[16-1:0] == RIS_REG_OFFSET)	? RIS_REG :
			(adr_i[16-1:0] == IC_REG_OFFSET)	? IC_REG :
			32'hDEADBEEF;

  always @(posedge clk_i or posedge rst_i)
    if (rst_i) ack_o <= 1'b0;
    else if (wb_valid & ~ack_o) ack_o <= 1'b1;
    else ack_o <= 1'b0;
endmodule
