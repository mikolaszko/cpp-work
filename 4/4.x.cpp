#include <iostream>

void computeResult(char op, double x, double y)
{
    double result{};
    if (op == '/')
    {
        result = x / y;
    }
    if (op == '*')
    {
        result = x * y;
    }
    if (op == '+')
    {
        result = x + y;
    }
    if (op == '-')
    {
        result = x - y;
    }
    std::cout << x << " " << op << " " << y << " is " << result << "\n";
}

int main()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    std::cout << "Enter a double value: ";
    double y{};
    std::cin >> y;
    std::cout << "Enter one of the following operators: +, -, *, or /:";
    char op{};
    std::cin >> op;

    computeResult(op, x, y);

    return 0;
}