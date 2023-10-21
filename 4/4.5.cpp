#include <iostream>

unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;

int the_same_but_negative();

int main()
{
  unsigned short x{65535};
  std::cout << "x was: " << x << "\n";

  x++; //65536 is out of range so we get modulo wrap-around
  std::cout << "x was: " << x << "\n";

  x++; //65537 is out of range so we get modulo wrap-around
  std::cout << "x was: " << x << "\n";

  the_same_but_negative();

  return 0;
}

int the_same_but_negative()
{
  unsigned short x{0};
  std::cout << "x was: " << x << "\n";

  x--; //-1 is out of range so we get modulo wrap-around
  std::cout << "x was: " << x << "\n";

  x--; //-2 is out of range so we get modulo wrap-around
  std::cout << "x was: " << x << "\n";

  return 0;

}
