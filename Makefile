bin/main: main.c
	gcc $(CCFLAGS) -o bin/main main.c

all: bin/main
