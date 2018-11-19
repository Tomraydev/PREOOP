all: btest.o lbit.o
	g++ btest.o lbit.o -o btest
	
btest.o: btest.cpp
	g++ -Wall -g btest.cpp -c

lbit.o: lbit.cpp lbit.h
	g++ -Wall -g lbit.cpp -c

clean:
	rm -rf *.o btest

run:
	./btest

.PHONY: clean all run
