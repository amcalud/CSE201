#include <iostream>
#include "Polygon.hpp"

using namespace std;
using namespace Geometry;

int main(){

  Polygon p("Hexagon",6);

  cout << "An " << p.getLabel() << " has "
       << p.getVertexCount() << " vertices." << std::endl;
}
