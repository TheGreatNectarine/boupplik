//
// Created by Nick Marhal on 10/31/17.
//
#include <iostream>
#include <cmath>
#include "helpers.h"

double sine(double x, double eps)
{
    if (x < 0)
    {
        return -sine(-x, eps);
    }
    x = float_mod(x, 2 * M_PI);
    double            res(x), next(x);
    for (unsigned int i(1); absolute(next) > eps; i++)
    {
        next *= -1 * x * x / ((2 * i + 1) * (2 * i));
        res += next;
    }
    return res;
}

void check_sine()
{
    for (int x = -10; x < 10; x++)
    {
        std::cout << "sin(" << x << ")          == " << sine(x, 0.0000000001) << std::endl;
        std::cout << "built-in sin(" << x << ") == " << sin(x) << std::endl << std::endl;
    }
}