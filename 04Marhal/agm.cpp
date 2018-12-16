//
// Created by Nick Marhal on 10/30/17.
//
#include <cmath>

double absolute(double x)
{
    return x > 0 ? x : -x;
}

void check_input(double a, double b)
{
    if (a > b)
    {
        throw "a > b";
    } else if (a <= 0)
    {
        if (b <= 0)
        {
            throw "a and b are less than 0";
        }
        throw "a is less than 0";
    } 
}

double agm(double a, double b)
{
    check_input(a, b);
    double a0(a);
    double b0(b);
    do
    {
        a0 = a;
        b0 = b;

        a = sqrt(a0 * b0);
        b = (a0 + b0) / 2;
    } while (a - a0 != 0);
    return a;
}