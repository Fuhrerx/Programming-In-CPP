#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number : " << std::endl;
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "The number " << num << " is Even " << std::endl;
    }
    else
    {
        std::cout << "The number " << num << " is Odd" << std::endl;
    }

    return 0;
}