SIM ?= verilator
TOPLEVEL_LANG ?= verilog
PWD =$(shell pwd)
VERILOG_SOURCES = $(PWD)/normalize.v
TOPLEVEL = normalize
MODULE = normalize

include $(shell cocotb-config --makefiles)/Makefile.sim