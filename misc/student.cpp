#include <iostream>

class Student
{
public:
    void name(std::string name)
    {
        std::cout << "Enter the name of the student : " << std::endl;
        std::cin >> name;
    }

    void age(int16_t age)
    {
        std::cout << "Enter the age of the student : " << std::endl;
        std::cin >> age;
    }

    void id(int32_t id)
    {
        std::cout << "Enter the ID of the student : " << std::endl;
        std::cin >> id;
    }

    void disp();
};

Student S[5];

void Student::disp()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Name : " << std::endl;
        std::cout << "Age : " << std::endl;
        std::cout << "ID : " << std::endl;
    }
}

int main(int agrc, char *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        S[i].name("Akshay");
        S[i].age(19);
        S[i].id(2006);
    }
    for (int i = 0; i < 5; i++)
    {
        S[i].disp();
    }
    return 0;
}
