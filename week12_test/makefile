CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = btest.o BitArray.o

all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
btest.o: btest.cpp BitArray.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

BitArray.o: BitArray.cpp BitArray.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

