#pragma once
#include "Animal.hpp"

class Pig : public Animal {
  private:
    std::string name;
  public:
    Pig(std::string dog_name);
    virtual void sound();
};
