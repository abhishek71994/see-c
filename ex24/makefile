CFLAGS=-Wall -g

all: ex24

ex24: ex24.o
	gcc $(CFLAGS) -DNDEBUG ex24.o -o ex24

ex24.0: ex24.c ex24.h
	gcc $(CFLAGS) -c ex24.c -o ex24.o

clean:
	rm -f ex24 ex24.o
