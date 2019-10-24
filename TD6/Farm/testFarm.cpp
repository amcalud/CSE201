#include <iostream>

#include <string>


class Animal {
  public:
  virtual void sound() {};
};

class Dog : public Animal {
  private:
    std::string name;
  public:
    Dog(std::string dog_name){ name = dog_name; }
    virtual void sound() { std::cout << this->name << " says ouaf! ouaf!" << std::endl; }
};

class Pig: public Animal {
  private:
    std::string name;
  public:
    Pig(std::string dog_name){ name = dog_name; }
    virtual void sound() { std::cout << this->name << " says groin! groin!" << std::endl; }
};


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
