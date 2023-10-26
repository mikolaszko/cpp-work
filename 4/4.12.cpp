#include <iostream>

int main()
{
    std::cout << "Enter a single character ";
    char c{};
    std::cin >> c;
    /*
        this is an implicit type conversion which is NOT recommened but can occur,
        the same would happen if we passed c to function: int convertCharToInt(char c)
        because return type is int OR int convertCharToIntImmediately(int c) because of the parameter type
    */
    int ascii{c};

    std::cout << "You have entered '" << c << "' which is " << ascii << " in ascii but can also be converted statically like this " << static_cast<int>(c) << "\n";

    return 0;
}