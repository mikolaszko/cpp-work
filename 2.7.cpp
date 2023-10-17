#include <iostream>

// forward function declaration since the compiler on line 8 wouldn't know about the add function
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

    return 0;
}

int add(int x, int y)
{
    return x + y;
}