//
// Created by Nick Marhal on 10/31/17.
//
#include <iostream>

int gcd(int a, int b)
{
    int temp;
    while (b > 0)
    {
        temp = b;
        b    = a % b;
        a    = temp;
    }
    return a;
}

int gcd_rec(int a, int b)
{
    return (a == 0) ? b : gcd(a % b, b);
}

void check_gcd()
{
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            std::cout << "GCD(" << a << ", " << b << ")            == " << gcd(a, b) << std::endl;
            std::cout << "GCD[recursive](" << a << ", " << b << ") == " << gcd_rec(a, b) << std::endl << std::endl;
        }
    }
}