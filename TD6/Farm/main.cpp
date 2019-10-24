#include "Dog.hpp"
#include "Pig.hpp"
#include <iostream>

int main()
{
  Animal **farm = new Animal*[3];
  farm[0] = new Dog("Milou");
  farm[1] = new Dog("Pluto");
  farm[2] = new Pig("Pua");

  for (int i = 0; i < 3; i ++)
    farm[i]->sound();

  for (int i = 0; i < 3; i++)
    delete farm[i];
  delete[] farm;
}
