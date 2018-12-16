//
// Created by Nick Marhal on 10/30/17.
//
#include "helpers.h"
#include <iostream>
#include <cmath>

double exponent(double x)
{
    if (x < 0) {
        return 1 / exponent(-x);
    }
    double            res(1), next(1);
    for (unsigned int i(1); absolute(next) != 0; i++) {
        next *= x / i;
        res += next;
    }
    return res;
}

//After testing it was determined that a function is valid for x € [-707, 707]
//For x >= |±708| function loops infinitely
void test_exp()
{
    std::cout << "EXPONENT" << std::endl;
    for (double x = -710; x <= 710; x+=10) {
        std::cout << "x:" << x << " written exp: " << exponent(x) << "; built-in exp: " << exp(x) << std::endl
                  << std::endl;
    }
    std::cout << "END TEST" << std::endl;
}

