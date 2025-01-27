# CFLAGS=-Wall -g
CFLAGS=-Wall -Os -ffunction-sections -fdata-sections

# Detect the operating system
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
    LDFLAGS=-Wl,--gc-sections
endif
ifeq ($(UNAME_S),Darwin)
    LDFLAGS=-Wl,-dead_strip
endif

all: ex22

ex22: ex22.o ex22_main.o
	gcc $(CFLAGS) $(LDFLAGS) ex22_main.o ex22.o -o ex22_main

ex22_main.o: ex22_main.c ex22.h
	gcc $(CFLAGS) -c ex22_main.c -o ex22_main.o

ex22.o: ex22.c ex22.h
	gcc $(CFLAGS) -c ex22.c -o ex22.o

clean:
	rm -f ex22_main.o ex22.o ex22_main