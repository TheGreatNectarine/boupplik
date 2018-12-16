//
// Created by Nick Marhal on 10/30/17.
//

#ifndef PRACTICES_PRACTICE_H
#define PRACTICES_PRACTICE_H

unsigned int value(unsigned int word, unsigned int pos, bool bit);

unsigned int exch_bits(unsigned int word, unsigned int pos0, unsigned int pos1);

unsigned int exch_bytes(unsigned int word, unsigned int pos0, unsigned int pos1);

unsigned int set_bits(unsigned int in);

unsigned int zero_bits(unsigned int in);

float left2right(unsigned int length);

float right2left(unsigned int length);

bool gcd_test();
//============================//


template<typename T>
unsigned digits(T number, int base)
{
    unsigned counter(1);
    auto     integer = static_cast<unsigned>(number);
    double   decimal = number - integer;
    //integer
    while (integer >= base)
    {
        integer /= base;
        ++counter;
    }
    return counter;
}

#endif //PRACTICES_PRACTICE_H
