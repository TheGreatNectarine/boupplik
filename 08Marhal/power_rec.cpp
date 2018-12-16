//
// Created by Nick Marhal on 11/8/17.
//
#include <iostream>

using namespace std;

void zet(double &y, double &x, unsigned int &k, unsigned &calls)
{
    if (k > 0)
    {
        if (k % 2 == 1)
        {
            y *= x;
            k--;
        } else
        {
            x *= x;
            k /= 2;
        };
        ++calls;
        zet(y, x, k, calls);
    }
}

double power(double x, unsigned int n, unsigned &calls)
{
    double   y       = 1;
    zet(y, x, n, calls);
    return y;
}