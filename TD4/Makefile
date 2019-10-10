CXX = g++

testComplex.o: testComplex.cpp Complex.hpp
	$(CXX) -c testComplex.cpp

Complex.o: Complex.cpp Complex.hpp
	$(CXX) -c Complex.cpp

testComplex: testComplex.o Complex.o
	$(CXX) Complex.o testComplex.o -o testComplex

clean:
	rm -f testComplex
	rm -f *.o
