#include "Polygon.hpp"

using namespace Geometry;

Polygon::Polygon(std::string lab, int a): Shape(lab){
  label = lab;
  vertexCount = a;
}

int Polygon::getVertexCount() const{
  return vertexCount;
}
