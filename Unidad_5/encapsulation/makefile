CC = gcc
DEBUG = -g
CFLAGS = -Wall $(DEBUG)
LDFLAGS = -Wall $(DEBUG)
EXEC = main.out
OBJS = main.o file1.o file2.o

all: $(EXEC)
	main

main: $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(EXEC)

main.o: main.c file1.c file2.c
	$(CC) $(CFLAGS) -c main.c

file1.o: file1.c
	$(CC) $(CFLAGS) -c file1.c

file2.o: file2.c
	$(CC) $(CFLAGS) -c file2.c

clean:
	del $(OBJS) $(EXEC)