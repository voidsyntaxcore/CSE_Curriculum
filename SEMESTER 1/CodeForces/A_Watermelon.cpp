# include <iostream>

int main()
{
    int watermelons;
    std::cin >> watermelons;
    if (!(watermelons % 2) and (watermelons != 2))
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}