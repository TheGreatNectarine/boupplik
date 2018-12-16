//
// Created by Nick Marhal on 10/31/17.
//

#include "functions.h"

double power(double base, int power) {
    double res = 1;
    if (power == 0)
        return res;
    while (power > 0) {
        if (power & 1) {
            res *= base;
        }
        base *= base;
        power >>= 1;
    }
    return res;
}

double exp_taylor(double x)
{
    double res(1), cur(1);
    for (unsigned int i = 1; absolute(cur) != 0; ++i)
    {
        cur = cur * x / i;
        res += cur;
    }
    return res;
 }

double exponent(double x)
{
    if (x < 0) return 1 / exponent(-x);
    auto x_int = static_cast<int>(x);
    double x_frac = x - x_int;
    return power(exp_taylor(1), x_int) * exp_taylor(x_frac);
}
