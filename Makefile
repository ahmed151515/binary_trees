CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

all: run
	@./run
run: *.c
	@$(CC) $(CFLAGS) *.c -o run

clean:
	rm -f run

