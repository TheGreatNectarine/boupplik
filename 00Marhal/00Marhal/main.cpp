#include <iostream>
#include <cmath>
#include "functions.h"

void wait();

int main()
{
    std::cout << "=================SUM=================" << std::endl;
    check_sum();
    std::cout << "=================SIN=================" << std::endl;
    check_sine();
    std::cout << "=================MOD=================" << std::endl;
    check_modulo();
    std::cout << "=================GCD=================" << std::endl;
    check_gcd();
    std::cout << "=================CHEBYSHEV=================" << std::endl;
    check_Chebyshev();
    wait();
    return 0;
}

void wait()
{
    int i = 0;
    std::cin >> i;
}