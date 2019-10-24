CXX = g++

Polygon.o: Polygon.cpp Polygon.hpp Shape.hpp
	$(CXX) -c Polygon.cpp

Shape.o: Shape.cpp Shape.hpp
	$(CXX) -c Shape.cpp

testGeometry.o: testGeometry.cpp Polygon.hpp
	$(CXX) -c testGeometry.cpp

testGeometry: testGeometry.o Shape.o Polygon.o
	$(CXX) testGeometry.o Shape.o Polygon.o -o testGeometry

clean:
	rm -f testGeometry
	rm -f *.o
