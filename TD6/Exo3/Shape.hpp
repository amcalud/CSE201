#pragma once

#include <string>

namespace Geometry {

  class Shape {
  public:
    Shape(std::string lab);
    void setLabel(std::string lab);
    std::string getLabel() const;

  protected:
    std::string label;
  };

}
