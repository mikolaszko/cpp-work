#include <iostream>

namespace iohelpers
{
    void doubleInt(int x)
    {
        std::cout << x * 2 << "\n";
    }
}

int main()
{
    iohelpers::doubleInt(3);
}