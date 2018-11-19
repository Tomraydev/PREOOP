CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = pesel_test
OBJS = ptest.o check_pesel.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
ptest.o: ptest.cpp check_pesel.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

check_pesel.o: check_pesel.cpp check_pesel.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands, not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

