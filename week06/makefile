CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = ltest
OBJS = ltest.o functions.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
ltest.o: ltest.cpp List.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

functions.o: functions.cpp List.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

