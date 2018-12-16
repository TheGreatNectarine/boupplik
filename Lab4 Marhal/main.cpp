#include <iostream>
#include "agm.h"
#include <cmath>
#include "practice.h"

using namespace std;

int main()
{
    for (unsigned int i = 1; i < 11; ++i) {
        for (unsigned int j = 1; j < 11; ++j) {
            cout << "a:" << i << " b:" << j << "\nResult: " << agm(i, j) << endl;
        }
    }

    cout << value(0b0000111100000000, 1, false) << endl;

    return EXIT_SUCCESS;
}

double agm(double a, double b)
{
    double a0 = a;
    double b0 = b;

    do {
        a0 = a;
        b0 = b;

        a = sqrt(a0 * b0);
        b = (a0 + b0) / 2;
    } while (a != a0);

    return a;

}
