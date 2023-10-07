CC ?= gcc
CFLAGS = -Ofast -pipe -march=native -Wall -Wextra
TARGET = djb2

all: djb2

djb2: djb2.c
	$(CC) $(CFLAGS) -o djb2 djb2.c

clean:
	rm -f djb2
