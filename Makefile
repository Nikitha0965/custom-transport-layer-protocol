CC=gcc
CFLAGS=-Wall -pthread
AR=ar

SRC=src/ktp_socket.c src/sender.c src/receiver.c src/garbage_collector.c src/shared_memory.c src/semaphore.c
OBJ=$(SRC:.c=.o)

all: libktp.a

libktp.a: $(OBJ)
	mkdir -p lib
	$(AR) rcs lib/libktp.a $(OBJ)

clean:
	rm -f src/*.o lib/libktp.a