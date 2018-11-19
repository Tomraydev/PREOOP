CXX = g++
CXXFLAGS = -g -pedantic -Wall

PlikWykonywalny = ltest
MAIN = ltest
Lib01 = List
Lib02 = Node
#linkowanie ktore wykonuje sie na koncu
$(PlikWykonywalny): $(MAIN).o $(Lib01).o $(Lib02).o
	$(CXX) $(CXXFLAGS) $^ -o $@
#wszystko na prawo, wszystko na lewo

$(MAIN).o: $(MAIN).cpp $(Lib01).h $(Lib02).h
#samo sie uzupelnia

$(Lib01).o: $(Lib01).cpp $(Lib01).h

$(Lib02).o: $(Lib02).cpp $(Lib02).h

.PHONY: clean run

clean:
	rm -rf *.o $(PlikWykonywalny)

run:
	./$(PlikWykonywalny)




	
