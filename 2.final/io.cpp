#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number ";
    int input{};
    std::cin >> input;
    return input;
}

void writeNumber(int x)
{
    std::cout << x << "\n";
}