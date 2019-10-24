CXX = g++

Base.o: Base.cpp Base.hpp
	$(CXX) -c Base.cpp

Derived.o: Derived.cpp Derived.hpp Base.hpp
	$(CXX) -c Derived.cpp

main.o: main.cpp Derived.hpp
	$(CXX) -c main.cpp

main: main.o Base.o Derived.o
	$(CXX) main.o Base.o Derived.o -o main

clean:
	rm -f main
	rm -f *.o
