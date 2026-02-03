#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number : " << std::endl;
    std::cin >> num;

    if (num == 0)
    {
        std::cout << "Zero is neither positive or negative!" << std::endl;
    }
    else if (num > 0)
    {
        std::cout << "The number " << num << " is postive" << std::endl;
    }
    else
    {
        std::cout << "The number " << num << " is negative" << std::endl;
    }

    return 0;
}