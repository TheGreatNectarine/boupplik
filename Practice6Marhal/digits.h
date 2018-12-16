//
// Created by Nick Marhal on 10/18/17.
//

#ifndef LAB6MARHAL_DIGITS_H
#define LAB6MARHAL_DIGITS_H

struct BadBase {
    char *message;
    unsigned int base;
};

template<class float_t>
unsigned digits(const unsigned base = 10)
{
    if (base < 2) {
        BadBase badBase = {
                const_cast<char *>("base can't be less than 2, you gave: "), base
        };
    }
}

unsigned int mod(const unsigned int m, const unsigned int n);
#endif //LAB6MARHAL_DIGITS_H
