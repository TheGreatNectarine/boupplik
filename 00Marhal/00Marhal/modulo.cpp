//
// Created by Nick Marhal on 10/31/17.
//
#include <cassert>
#include <iostream>

int modulo(int a, int b)
{
    if (a < b) return a;
    int r(a);
    int n(0);
    while (r >= b)
    {
        r -= b;
        ++n;
    }
    assert(a == b * n + r);
    return n;
}

void check_modulo()
{
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            std::cout << "Mod(" << a << ", " << b << ") == " << modulo(a, b) << std::endl;

        }
    }
}