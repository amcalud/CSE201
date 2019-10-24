#include "Dog.hpp"

Dog::Dog(std::string dog_name){ name = dog_name; }
void Dog::sound() { std::cout << this->name << " says ouaf! ouaf!" << std::endl; }
