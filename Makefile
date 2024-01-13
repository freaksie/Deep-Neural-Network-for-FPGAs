SIM ?= verilator
TOPLEVEL_LANG ?= verilog
PWD =$(shell pwd)
VERILOG_SOURCES = $(PWD)/myproject.v
TOPLEVEL = myproject
MODULE = testbench

include $(shell cocotb-config --makefiles)/Makefile.sim