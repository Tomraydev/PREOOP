all: main.o strop.o
	g++ -Wall -pedantic -g main.o strop.o -o test

main.o: main.cpp
	g++ -Wall -pedantic -g -c main.cpp

strop.o: strop.cpp strop.h
	g++ -Wall -pedantic -g -c strop.cpp

clean:
	rm *.o test

run:
	./test

.PHONY: all clean run
