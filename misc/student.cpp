#include <iostream>
#include <string>

class Student
{
public:
    void setName(std::string n)
    {
        studentName = n;
    }

    void setAge(int16_t a)
    {
        studentAge = a;
    }

    void setId(int32_t i)
    {
        studentId = i;
    }

    void disp();

private:
    std::string studentName;
    int16_t studentAge;
    int32_t studentId;
};

Student S[5];

void Student::disp()
{
    std::cout << "Name: " << studentName << std::endl;
    std::cout << "Age: " << studentAge << std::endl;
    std::cout << "ID: " << studentId << std::endl;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        S[i].setName("Enter Name");
        S[i].setAge(19);
        S[i].setId(2006);
    }
    for (int i = 0; i < 5; i++)
    {
        S[i].disp();
    }
    return 0;
}
