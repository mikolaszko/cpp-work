#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  std::cout << "Enter another integer: ";
  int y{};
  std::cin >> y;

  // this works in the std c++20 or above
  /* std::format("{} - {} is {}", x, y, x-y)
  std::format("{} + {} is {}", x, y, x+y)
  */
}

