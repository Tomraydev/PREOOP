CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = ltest.o List.o Node.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
ltest.o: ltest.cpp List.h Node.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

List.o: List.cpp List.h Node.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Node.o: Node.cpp Node.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

