CC=gcc
CFLAGS=-fno-stack-protector -Wall

all: vulnerable exploit injector

vulnerable: src/vulnerable.c
	$(CC) $(CFLAGS) -o build/vulnerable src/vulnerable.c

exploit: src/exploit.c
	$(CC) $(CFLAGS) -o build/exploit src/exploit.c

injector: src/injector.c
	$(CC) $(CFLAGS) -o build/injector src/injector.c

clean:
	rm -f build/vulnerable build/exploit build/injector
