# makefile basico
CC=g++
CFLAGS=-Wall -g

main: main.o stack.o
	$(CC) $(CFLAGS) main.o stack.o -o main.out

main.o: main.cpp stack.hpp
	$(CC) $(CFLAGS) -c main.cpp

stack.o: stack.cpp stack.hpp
	$(CC) $(CFLAGS) -c stack.cpp

.PHONY: clean
clean:
	rm -f *.out *.o
