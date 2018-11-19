CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = main.o tab.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
main.o: main.cpp tab.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

tab.o: tab.cpp tab.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

