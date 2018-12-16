//
// Created by Nick Marhal on 11/3/17.
//

#ifndef MARHAL07_STRUCTURES_H
#define MARHAL07_STRUCTURES_H

struct Matrix
{
    int _a, _b;
    int _c, _d;
};

struct Vector
{
    int _x;
    int _y;
};

/**
 *
 * @param M: matrix to be printed
 */
void print(Matrix M);

/**
 *
 * @param V: vector to be printed
 */
void print(Vector V);

/**
 * A function which multiplies two matrices
 * @param M: first matrix
 * @param N: second matrix
 * @return product of two matrices
 */
Matrix _matrix_mult(Matrix M, Matrix N);

/**
 * A function which raises the Matrix to the n-th power
 * @param M: a matrix to operate on
 * @param n: power to exponentiate matrix
 * @return M to the power of n
 */
Matrix _power(Matrix M, unsigned n);

/**
 * A function which calculates a product of the Matrix and the Vector
 * @param M: a matrix to multiply
 * @param V: a vector to multiply
 * @return a product of matrix and vector multiplication
 */
Vector _product(Matrix M, Vector V);

/**
 * A function to calculate a Vector containing n-th and (n-1)-th members of a series
 * @param n: length of a series
 * @return a Vector containing n-th and (n-1)-th elements of a series
 */
Vector _fibonacci(unsigned n);

/**
 * A function to calculate n-th member of Fibonacci series (n >= 2)
 * @param n: length of a series
 * @return the n-th element of a sequence
 */
unsigned fibonacci(unsigned n);

#endif //MARHAL07_STRUCTURES_H
