CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = ftest
OBJS = ftest.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
ftest.o : ftest.cpp Fun.h FElementarne.h Trygonometryczne.h FZlozona.h Rozniczka.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

