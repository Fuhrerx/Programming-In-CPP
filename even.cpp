#include <iostream>

int main()
{
    int n;

    std::cout << "Enter an integer : " << std::endl;
    std::cin >> n;

    (n % 2 == 0) ? std::cout << n << " is even " : std::cout << " is odd " << std::endl;

    return 0;
}