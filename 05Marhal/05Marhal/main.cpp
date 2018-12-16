#include <iostream>
#include "polynomial.h"

using namespace std;

int main()
{
    cout << "Random polynomials test!" << endl;
    for (unsigned int power = 1; power <= 3; power++) {
        for (int x = -2; x <= 2; ++x) {
            cout << "x: " << x << " , power: " << power << ": " << polynomial(power, x) << endl;
        }
    }
    return 0;
}