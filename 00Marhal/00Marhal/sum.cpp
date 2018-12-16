//
// Created by Nick Marhal on 10/31/17.
//
#include <iostream>

double sum(double x, int n)
{
    double   res(1);
    double   next(1);
    for (int i(1); i <= n; i++)
    {
        next *= -x / i;
        res += next;
    }
    return res;
}

void check_sum()
{
    for (int n = 1; n < 10; n++)
    {
        for (int x = 1; x < 10; x++)
        {
            std::cout << "sum(n -> " << n << ", x=" << x << ") == " << sum(x, n) << std::endl;

        }
    }
}