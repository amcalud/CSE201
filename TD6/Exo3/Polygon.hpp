#pragma once

#include <string>

#include "Shape.hpp"

namespace Geometry {

  class Polygon : public Shape {
  public:
    Polygon(std::string lab, int a);
    int getVertexCount() const;

  protected:
    int vertexCount;
  };

}
