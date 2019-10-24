#include "Pig.hpp"

Pig::Pig(std::string dog_name){ name = dog_name; }
void Pig::sound() { std::cout << this->name << " says groin! groin!" << std::endl; }
