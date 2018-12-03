CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = tt
OBJS = tt.o FlexiTab.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
tt.o: tt.cpp FlexiTab.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

FlexiTab.o: FlexiTab.cpp FlexiTab.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

