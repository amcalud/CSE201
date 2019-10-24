class Base {
public:
  int x;
  int y;
  double z;

  Base(int a, int b, double c ) {
    this->x = a;
    this->y = b;
    this->z = c;
  }
};

class Derived : public Base {
public:
  double w;

  // Make sure you understand how this contructor works:
  Derived(int a, int b, double c, double d)
    : Base(a, b, c)
  {
    this->w = d;
  }
};

int main()
{
  Derived d(1, 2, 3.01, 4.02);
  std::cout << d.x << std::endl;
  std::cout << d.y << std::endl;
  std::cout << d.z << std::endl;
  std::cout << d.w << std::endl;
}
