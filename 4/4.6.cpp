#include <cstdint> //fix width integers but also fast and least types
#include <iostream>
#include <cstddef> // for the size_t

int main()
{
    // without this the ints have minimum of 2 bytes but its dependant on the architecture
    std::int16_t i{5};
    std::cout << i << "\n";

    // there are also fast and least types
    std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    return 0;
}