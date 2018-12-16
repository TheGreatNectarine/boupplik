//
// Created by Nick Marhal on 10/30/17.
//

#include "helpers.h"
#include <cmath>
#include <iostream>

double arctan(double x)
{
    double res(0);
    double prev(0);
    double pow(x);
    int    denominator(1);
    int    unity(1);
    do {
        prev = res;
        res += unity * (pow / denominator);
        pow *= x * x;
        denominator += 2;
        unity *= -1;
    } while (absolute(res - prev) != 0);
    return res;
}


//For x € (-1,1), precise at least for 10 decimal digits.
//Calculating function for other values is impossible as
//Taylor series for this function is valid only for x € (-1,1)
void test_atan()
{
    std::cout << "ATAN" << std::endl;
    for (double x = -0.999; x <= 1; x += 0.1) {
        std::cout << "x:" << x << " written atan: " << arctan(x) << "; built-in atan: " << atan(x) << std::endl
                  << std::endl;
    }
    std::cout << "END TEST" << std::endl;
}