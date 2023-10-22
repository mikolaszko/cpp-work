#include <iostream>
#include <iomanip>

float fValue;
double dValue;
long double ldValue;

int main()
{
    std::cout << 5.0 << '\n';
    std::cout << 6.7 << '\n';
    std::cout << 9876543.21 << '\n';

    std::cout << 0.0000987654321f << "\n";
    // we manipulate the default precision of a float with:
    std::cout << std::setprecision(17);
    std::cout << 3.333333333333333333333333333333333333f << '\n';
    std::cout << 3.333333333333333333333333333333333333 << '\n'; // no f prefix so its a double

    return 0;
}