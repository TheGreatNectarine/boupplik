//
// Created by Nick Marhal on 10/31/17.
//
#include "functions.h"

//For x <= 6 pretty accurate
//For x >= 7 wrong results
double gaussian(double x)
{
    double res(x);
    double next(x);
    int i(1);

    while (absolute(next) != 0)
    {
        next *= -x * x / i;
        res += next / (i * 2 + 1);
        i++;
    }
    return res;
}

double absolute(double x)
{
    return x > 0 ? x : -x;
}
