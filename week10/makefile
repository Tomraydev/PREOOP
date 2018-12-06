CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = ftest.o Frac.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
ftest.o: ftest.cpp Frac.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Frac.o: Frac.cpp Frac.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

