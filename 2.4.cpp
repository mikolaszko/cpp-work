#include <iostream>

void doSomething(int /*count*/)
{
}

void doFirstly(std::string)
{
}

int main()
{
    /*this lesson was mostly about some basic stuff like
    add(1, add(1,9)), return values as arguments etc.
    but the doSomething function is interesting
    because it has google's convention of writing unused params
    and doFirstly is what standard allows
    */
    std::cout << "Parameters and arguments";
    return 0;
}

int doubleNumber(int x)
{
    return x * 2;
}

/*question 5 was already done by me in the 2.2*/