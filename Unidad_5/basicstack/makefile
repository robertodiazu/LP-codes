# makefile basico

main: main.o stack.o
	g++ -Wall -g main.o stack.o -o main.out

main.o: main.cpp stack.hpp
	g++ -Wall -c -g main.cpp

stack.o: stack.cpp stack.hpp
	g++ -Wall -c -g stack.cpp

clean:
	\rm -f *.out *.o
