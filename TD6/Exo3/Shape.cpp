#include "Shape.hpp"
#include <string>

using namespace Geometry;

Shape::Shape(std::string lab){
  label = lab;
}

void Shape::setLabel(std::string lab){
  label = lab;
}

std::string Shape::getLabel() const{
  return label;
}
