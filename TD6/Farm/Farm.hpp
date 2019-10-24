#include <string>


class Animal {
  public:
  virtual void sound() {};
};

class Dog : public Animal {
  private:
    std::string name;
  public:
    Dog(std::string dog_name){ name = dog_name }
    virtual void sound() { std::cout << this->name << " says ouaf! ouaf!" << std::endl }
};

class Pig: public Animal {
  private:
    std::string name;
  public:
    Pig(std::string dog_name){ name = dog_name }
    virtual void sound() { std::cout << this->name << " says groin! groin!" << std::endl }
}
