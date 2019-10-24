#pragma once
#include "Base.hpp"


class Derived : public Base {
public:
  double w;

  // Make sure you understand how this contructor works:
  Derived(int a, int b, double c, double d);
};
