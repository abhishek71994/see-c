CFLAGS=-Wall -g
TARGET=ex1
CC=gcc

all: $(TARGET)

clean:
	-rm -f $(TARGET)

$(TARGET):$(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

checkLeak:
	leaks -atExit -- ./ex1