#include <iostream>

int getNumberFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    int value { getNumberFromUser() };

    std::cout << value << " doubled is: " << value * 2 << '\n';

    return 0;
}
