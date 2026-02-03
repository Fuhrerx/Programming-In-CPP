#include <iostream>

class Matrix
{
public:
    int a[2][2];
    int b[2][2];
    int i, j;

    void read_a();
    void read_b();

    void matAdd();
    void matSub();
    void matTrans();
};

Matrix M;

void Matrix::read_a()
{
    std::cout << "Enter a 2x2 matrix : " << std::endl;

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            std::cin >> a[i][j];
        }
    }
}

void Matrix::read_b()
{
    std::cout << "Enter a 2x2 matrix : " << std::endl;

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            std::cin >> b[i][j];
        }
    }
}

void Matrix::matAdd()
{
    int ans[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 2; i++)
        {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }
}