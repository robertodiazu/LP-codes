
main.out: main.o stack.o
	g++ main.o stack.o -o main.out

main.o: main.cpp
	g++ -c main.cpp -o main.o

stack.o: stack.cpp stack.hpp
	g++ -c stack.cpp -o stack.o

clean:
	rm -f *.out *.o