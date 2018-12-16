//
// Created by Nick Marhal on 10/30/17.
//
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <iostream>
#include <cmath>
#include "helpers.h"


double cosine(double x)
{
    x = float_mod(absolute(x), 2 * M_PI);
    double            res(1), next(1);
    for (unsigned int i(0); absolute(next) != 0; i++)
    {
        next *= -1 * x * x / ((2 * i + 1) * (2 * i + 2));
        res += next;
    }
    return res;
}


//For x € [~ -400000,~400000] precise up to 7 decimal digits.
// Supposingly infinitely precise, precision limited only by machine's architecture
void test_cos()
{
    std::cout << "COSINE" << std::endl;
    for (double x = -500000; x <= 500000; x += 10000)
    {
        std::cout << "x:" << x << " written cos: " << cosine(x) << "; built-in cos: " << cos(x) << std::endl
                  << std::endl;
    }
    std::cout << "END TEST" << std::endl;
}
