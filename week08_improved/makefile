CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = atest
OBJS = atest.o Angle.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
atest.o: atest.cpp Angle.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Angle.o: Angle.cpp Angle.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

