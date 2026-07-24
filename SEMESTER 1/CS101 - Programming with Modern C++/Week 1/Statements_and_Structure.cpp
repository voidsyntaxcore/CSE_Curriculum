#include <iostream>

void welcome()
{
    std::cout << "Welcome to Week 1\n";
}

void printText()
{
    std::cout << "C++ statements execute sequentially.\n";
    std::cout << "Functions organize statements.\n";
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    welcome();

    printText();

    int x{10};
    int y{20};

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "x + y = " << add(x, y);

    return 0;
}