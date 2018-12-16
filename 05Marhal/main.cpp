#include <iostream>
#include "polynomial.h"

using namespace std;

int main()
{
    for (unsigned int len = 1; len < 4; len++)
    {
        auto *arr = new double[len];
        for (int x = 0; x < 10; x++)
        {
            random_coefs(arr, len);
            print_polynomial(arr, len, x);
            cout << polynomial(arr, len, x) << endl;
        }
        delete[] arr;
    }
    return 0;
}