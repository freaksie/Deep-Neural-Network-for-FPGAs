SIM ?= verilator
TOPLEVEL_LANG ?= verilog
PWD =$(shell pwd)
VERILOG_SOURCES = $(PWD)/layer2.v
TOPLEVEL = layer2
MODULE = test

include $(shell cocotb-config --makefiles)/Makefile.sim