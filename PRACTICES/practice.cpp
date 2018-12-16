#include "practice.h"

unsigned int value(unsigned int word, unsigned int pos, bool bit = false)
{
    if (bit) {
        return (word & (1 << pos)) >> pos;
    } else {
        return (word & (0xFF << pos * 8)) >> pos * 8;
    }
}


unsigned int exch_bits(unsigned int word, unsigned int pos0, unsigned int pos1)
{
    if (((word & (1 << pos0)) >> pos0) ^ ((word & (1 << pos1)) >> pos1)) {
        word ^= (1 << pos0);
        word ^= (1 << pos1);
    }
    return word;
}

unsigned int set_bits(unsigned int in)
{
    unsigned int res = 0;
    while (in) {
        res += in & 1;
        in >>= 1;
    }
    return res;
}

unsigned int zero_bits(unsigned int in)
{
    in = ~in;
    return set_bits(in);
}

float left2right(unsigned int length)
{
    float res = 0;
    float cur = 1;

    for (unsigned int i = 1; i < length; ++i) {
        res += cur / static_cast<float> (i);
        cur = -cur;
    }
    return res;
}

float right2left(unsigned int length)
{
    float res = 0;
    float cur = 1;

    for (int i = length; i > 0; --i) {
        res = cur / static_cast<float> (i);
        cur = -cur;
    }
    return res;
}
