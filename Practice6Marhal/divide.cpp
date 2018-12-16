//
// Created by Nick Marhal on 10/18/17.
//
#include <cassert>
#define NDEBUG

unsigned int mod(const unsigned int m, const unsigned int n)
{
    if (n == 0) {
       throw n;
    }
    unsigned int q = 0;
    unsigned int r = m;
    while (r > n) {
        r -= n;
        q++;
    }
    assert(m == n * q + r && 0 < r);
    return r;
}

