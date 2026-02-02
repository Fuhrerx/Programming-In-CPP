#include <iostream>

class New
{
public:
    void printValue(int value)
    {
        std::cout << "Value : " << value << std::endl;
    }
};

New val[5];

int main(int argc, char *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        val[i].printValue(2 * i);
    }
    std::cout << std::endl;

    return 0;
}