# makefile basico

main: main.o stack.o
	g++ -Wall main.o stack.o -o main.out

main.o: main.cpp stack.hpp
	g++ -Wall -c main.cpp

stack.o: stack.cpp stack.hpp
	g++ -Wall -c stack.cpp

clean:
	\rm -f *.out *.o
