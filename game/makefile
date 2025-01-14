CFLAGS=-Wall -g

all: ex19

ex19: ex19.o object.o
	gcc $(CFLAGS) ex19.o object.o -o ex19

ex19.o: ex19.c object.h
	gcc $(CFLAGS) -c ex19.c -o ex19.o

object.o: object.c object.h
	gcc $(CFLAGS) -c object.c -o object.o

clean:
	rm -f ex19 ex19.o object.o
