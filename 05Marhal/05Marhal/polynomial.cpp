//
// Created by Nick Marhal on 10/12/17.
//
#include <random>
#include <ctime>
#include <cassert>

void init_rand()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    rand();
}

double random_coef()
{
    return static_cast<double>(rand()) / RAND_MAX;
}

double coef_sum(double *coef, unsigned int len, int x)
{
    double test_res = 0;

    for (unsigned int i = 0; i < len; ++i) {
        test_res += coef[i] * (x > 0 ? 1 : (i % 2 == 0 ? 1 : -1));
    }
    return test_res;
}

double polynomial(unsigned int power, int x)
{
    init_rand();
    double       res   = 0;
    double       x_pow = 1;
    unsigned int len   = power + 1;
    auto         *coef = new double[len];

    for (unsigned int i = 0; i < len; ++i) {
        coef[i] = random_coef();
    }

    for (unsigned int j = 0; j < len; ++j) {
        res += coef[j] * x_pow;
        x_pow *= x;
    }
    if (x == -1 || x == 1) {
        assert(coef_sum(coef, len, x) == res);
    }
    delete[] coef;
    *coef = 0;
    return res;

}
