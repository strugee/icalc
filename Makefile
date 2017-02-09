CC=gcc

bin/main: bin main.c
	$(CC) $(CCFLAGS) -Wall -g -o bin/main main.c

bin/:
	mkdir -p bin

clean:
	rm -r bin

all: bin/main
