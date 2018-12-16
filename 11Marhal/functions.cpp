//
// Created by Nick Marhal on 11/26/17.
//
#include <cmath>
#include "constants.h"
#include <cassert>
#include <iostream>

double simpson(const double lo, const double hi, double (*const func)(const double), const double eps)
{
    int n = 4;
    double h = (hi-lo)/2;
    double prev = 0;
    double sum1 = h*(func(lo)+func(hi));
    double sum2 = 0;
    double sum4 = 4*h*func(lo+h);
    double sum = sum1+sum2+sum4;
    do
    {
        prev = sum;
        h /= 2;
        sum1 /= 2;
        sum2 = sum2/2+sum4/4;
        sum4 = 0;
        for (unsigned i = 1; i <= n; i += 2)
        {
            sum4 += func(lo+i*h);
        }
        n *= 2;
        sum4 *= h*4;
        sum = sum1+sum2+sum4;
    } while (fabs(sum-prev) > eps);
    return sum/3;
}

double sgn(const double x)
{
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    else
        return -1;
}

double aryth_geom_mean(const double arg_a, const double arg_b)
{
    double copy_a = arg_a;
    double copy_b = arg_b;
    double a1 = sqrt(copy_a*copy_b);
    double b1 = (copy_a+copy_b)/2;
    while (b1 > a1)
    {
        a1 = copy_a;
        b1 = copy_b;
        copy_a = sqrt(a1*b1);
        copy_b = (a1+b1)/2;
    }

    return (copy_b+copy_a)/2;
}

double elliptical(const double x)
{
    return 1/sqrt(a*a*sin(x)*sin(x)+b*b*cos(x)*cos(x));
}

double elliptical_integral()
{
    auto res = 2 / PI * simpson(0, PI_2, elliptical, eps);
    assert(fabs(res-1/aryth_geom_mean(a, b)) <= eps);
    return res;
}

double dirichlet(const double x)
{
    return (sin(a*x))/x;
}

double dirichlet_integral()
{
    auto res = simpson(0.000001, inf, dirichlet, eps);
    assert(fabs(res - PI_2*sgn(a)) <= eps);
    return res;
}

double poisson(const double x)
{
    return exp(-x*x);
}

double poisson_integral()
{
    auto res = simpson(0, inf, poisson, eps);
    assert(fabs(res-sqrt(PI)/2) <= eps);
    return res;
}

double euler(const double x)
{
    return pow(x, a-1)/(1+x);
}

double euler_integral()
{
    double sum = 0;
    double part = eps+1;
    double step = 1e-8;
    for (int i = 0; fabs(part) > eps; i++)
    {
        part = simpson(step+i, step+i+1, euler, eps);
        sum += part;
    }
    std::cout << fabs(sum - PI/sin(PI*a))<< std::endl;
    assert(fabs(sum - PI/sin(PI*a)) <= eps);
    return sum;
}
