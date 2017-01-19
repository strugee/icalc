bin/main: bin main.c
	gcc $(CCFLAGS) -o bin/main main.c

bin/:
	mkdir -p bin

clean:
	rm -r bin

all: bin/main
