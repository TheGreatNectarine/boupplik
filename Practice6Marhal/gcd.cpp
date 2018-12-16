//
// Created by Nick Marhal on 10/18/17.
//
#include "gcd.h"
#include <cassert>

unsigned int gcd(const unsigned int a, const unsigned int b)
{
    unsigned int new_a(a);
    unsigned int new_b(b);

    while (new_a != new_b) {
        if (new_a < new_b) {
            new_b -= new_a;
        } else {
            new_a -= new_b;
        }
    }
    assert(a % new_a == 0 && b % new_a == 0);
    return new_a;
}

