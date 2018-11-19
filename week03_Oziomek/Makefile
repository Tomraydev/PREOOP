CXX = g++
CXXFLAGS = -Wall -g -pedantic

NAME = btest

all: $(NAME)

$(NAME): btest.o lbit.o
	$(CXX) $^ -o $@

lbit.o: lbit.cpp lbit.h

.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)