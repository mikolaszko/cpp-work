#include "square.h"
#include "wave.h"
#include <iostream>

/* some notes here: this one took me a while to understand
because I couldn't understand why it would compiler - header files with header guards
will copy ALL content inside main() with the header guards from the file their included
so that's why there's no linking error, the #ifndef SQUARE_H is actually present twice in the
program
*/

int main()
{
    std::cout << getSquareSides();
    return 0;
}