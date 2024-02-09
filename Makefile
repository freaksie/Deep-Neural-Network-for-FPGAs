SIM ?= verilator
TOPLEVEL_LANG ?= verilog
PWD =$(shell pwd)
VERILOG_SOURCES = $(PWD)/state_disc.v

EXTRA_ARGS += --trace --trace-structs --trace-fst
COMPILE_ARGS += -Wno-fatal

TOPLEVEL = state_disc
MODULE = interface_test

all: fst
fst: sim
	mv dump.fst $(TOPLEVEL).fst
include $(shell cocotb-config --makefiles)/Makefile.sim