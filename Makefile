SIM ?= verilator
TOPLEVEL_LANG ?= verilog
PWD =$(shell pwd)
VERILOG_SOURCES = $(PWD)/test.v
TOPLEVEL = test
MODULE = test

include $(shell cocotb-config --makefiles)/Makefile.sim