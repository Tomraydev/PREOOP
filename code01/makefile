all: main.o printer.o
	g++ -Wall -pedantic main.o printer.o -o program

main.o: main.cpp
	g++ -Wall -pedantic -c main.cpp

printer.o: printer.cpp printer.hpp
	g++ -Wall -pedantic -c printer.cpp
clean:

	rm *.o program
run:
	./program

.PHONY: all clean run
