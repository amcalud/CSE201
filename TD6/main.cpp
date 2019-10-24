#include "Derived.hpp"
#include <iostream>


int main()
{
  Derived d(1, 2, 3.01, 4.02);
  std::cout << d.x << std::endl;
  std::cout << d.y << std::endl;
  std::cout << d.z << std::endl;
  std::cout << d.w << std::endl;
}
