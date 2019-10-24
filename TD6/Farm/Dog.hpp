#pragma once
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
  private:
    std::string name;
  public:
    Dog(std::string dog_name);
    virtual void sound();
};
