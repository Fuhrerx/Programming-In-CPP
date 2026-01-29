#include <iostream>

int main()
{
    int number;
    int sum = 0;

    std::cout << "Enter a number : " << std::endl;
    std::cin >> number;

    while (number <= 0)
    {
        sum += number;
        std::cout << "Enter a number : " << std::endl;
        std::cin >> number;
    }
    sum += number;
    std::cout << "The sum is : " << sum << std::endl;

    return 0;
}