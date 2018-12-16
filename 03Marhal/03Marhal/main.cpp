#include <iostream>
#include "functions.h"
#include <cmath>

using namespace std;

int main() {

    for (double i = -10; i <= 1000; i++)
    {
        cout << "Gaussian (" << i << "): " << gaussian(i) << endl;
        cout << "e^" << i << " : " << exp_taylor(i) << endl;
        cout << "e^" << i << " (int. and frac.)== " << exponent(i) << endl;
        cout << "e^" << i << " (built-in)      == " << exp(i) << endl << endl;
    }
    return 0;
}

