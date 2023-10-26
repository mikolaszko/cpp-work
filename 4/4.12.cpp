#include <iostream>

int main()
{
    std::cout << "Enter a single character ";
    char c{};
    std::cin >> c;
    int ascii{c};

    std::cout << "You have entered '" << c << "' which is " << ascii << " in ascii but can also be converted statically like this " << static_cast<int>(c) << "\n";

    return 0;
}