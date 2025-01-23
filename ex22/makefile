CFLAGS=-Wall -g

all: ex22

ex22: ex22.o ex22_main.o
	gcc $(CFLAGS) -DNDEBUG ex22_main.o ex22.o -o ex22_main

ex22_main.o: ex22_main.c ex22.h
	gcc $(CFLAGS) -c ex22_main.c -o ex22_main.o

ex22.o: ex22.c ex22.h
	gcc $(CFLAGS) -c ex22.c -o ex22.o

clean:
	rm -f ex22_main.o ex22.o ex22_main
