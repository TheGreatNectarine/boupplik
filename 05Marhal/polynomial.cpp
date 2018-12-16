//
// Created by Nick Marhal on 10/12/17.
//
#include <random>
#include <ctime>
#include <cassert>
#include <iostream>

using namespace std;

double random_coef(double origin, double bound)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distribution(origin, bound);
    return distribution(gen);
}

void random_coefs(double coef[], unsigned int len)
{
    for (int i = 0; i < len; i++)
    {
        coef[i] = random_coef(-10,10);
    }
}

double coef_sum(double coef[], unsigned int len, int x)
{
    double test_res = 0;

    for (unsigned int i = 0; i < len; ++i)
    {
        test_res += coef[i] * (x > 0 ? 1 : (i % 2 == 0 ? 1 : -1));
    }
    return test_res;
}

double polynomial(double coef[], unsigned int len, int x)
{
    double res   = 0;
    double x_pow = 1;

    for (unsigned int j = 0; j < len; j++)
    {
        res += coef[j] * x_pow;
        x_pow *= x;
    }
    assert(((x == 1) || (x == -1)) ? (res == coef_sum(coef, len, x)) : true);
    return res;

}

void print_polynomial(double coef[], unsigned int len, int x)
{
    cout << "for x==";
    for (int i = 0; i < len; i++)
    {
        cout  << x << ": " << coef[i] << ((len - i - 1) > 0 ? "x^" : "")
             << (i < len - 1 ? " + " : "");
    }
    cout << " == ";

}

