.PHONY: all clean tests
.SILENT:

all: tests
	$(MAKE) -C tests
