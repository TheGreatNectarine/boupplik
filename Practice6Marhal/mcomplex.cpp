//
// Created by Nick Marhal on 10/18/17.
//
#include "mcomplex.h"

double complex_multiplication(std::complex c) {
    const std::complex<double> *complex = new std::complex(0.6,0.8);
    for (int i = 0; i < 500; ++i) {
        c *= complex;
    }
    return std::abs(c);
}
