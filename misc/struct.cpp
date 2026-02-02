#include <iostream>

int main(int argc, char *argv[])
{
    struct det
    {
        int age;
        int id;
        char name[25];
    };

    struct det first;

    first.id = 1;
    first.age = 25;

    std::cout << "Enter the name : " << std::endl;
    std::cin >> first.name;

    std::cout << "Name : " << first.name << std::endl;
    std::cout << "id : " << first.id << std::endl;
    std::cout << "age : " << first.age << std::endl;
}