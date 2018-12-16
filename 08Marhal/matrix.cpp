//
// Created by Nick Marhal on 11/13/17.
//

#include <iostream>
#include "structures.h"
#include <cmath>

using namespace std;

void print(Matrix M)
{
    cout << "[[" << M._a << "][" << M._b << "]"
            "\n[" << M._c << "][" << M._d << "]]" << endl;
}

void print(Vector V)
{
    cout << "[" << V._x << "]"
            "\n[" << V._y << "]" << endl;
}

Matrix _matrix_mult(Matrix M, Matrix N)
{
    int    new_a = M._a * N._a + M._b * N._c;
    int    new_b = M._a * N._b + M._b * N._d;
    int    new_c = M._c * N._a + M._d * N._c;
    int    new_d = M._c * N._b + M._d * N._d;
    Matrix new_M = {new_a, new_b,
                    new_c, new_d};
    return new_M;
}

//Function to make _power function a bit more explicit
Matrix _squared(Matrix M)
{
    return _matrix_mult(M, M);
}

Matrix _power(Matrix M, unsigned power)
{
    Matrix res = {1, 0, 0, 1};
    if (power == 0)
    {
        return res;
    }
    if (power % 2 == 0)
    {
        res = _power(M, power / 2);
        return _squared(res);
    } else
    {
        return _matrix_mult(M, _power(M, power - 1));
    }
}

Vector _product(Matrix M, Vector V)
{
    int    new_x = M._a * V._x + M._b * V._y;
    int    new_y = M._c * V._x + M._d * V._y;
    Vector new_V = {new_x,
                    new_y};
    return new_V;
}

Vector _fibonacci(unsigned n)
{
    Matrix M = {1, 1, 1, 0};
    Vector V = {1, 1};
    Vector res = _product(_power(M, n - 1), V);
    return res;
}

unsigned fibonacci(unsigned n)
{
    if (n < 2)
    {
        throw n;
    }
    return static_cast<unsigned> (_fibonacci(n)._x);

}
