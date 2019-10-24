CXX = g++

Animal.o: Animal.cpp Animal.hpp
	$(CXX) -c Animal.cpp
	
Pig.o: Pig.cpp Pig.hpp Animal.hpp
	$(CXX) -c Pig.cpp

Dog.o: Dog.cpp Dog.hpp Animal.hpp
	$(CXX) -c Dog.cpp

main.o: main.cpp Dog.hpp Pig.hpp
	$(CXX) -c main.cpp

main: main.o Dog.o Pig.o Animal.o
	$(CXX) main.o Dog.o Pig.o Animal.o -o main

clean:
	rm -f main
	rm -f *.o
