//
// Created by Nick Marhal on 10/31/17.
//
#include <iostream>

double Chebyshev(double x, int n)
{
    double prev(1);
    double next(x);
    double res(n == 0 ? 1 : x);

    for (unsigned i(1); i < n; i++)
    {
        res  = 2 * x * next - prev;
        prev = next;
        next = res;
    }
    return res;
}

void check_Chebyshev()
{
    for (int n = 1; n < 10; ++n)
    {
        for (int x = -10; x < 10; ++x)
        {
            std::cout << "chebyshev(n=" << n << ", x=" << x << ") == " << Chebyshev(x, n) << std::endl;

        }
    }
}