//
// Created by Nick Marhal on 11/8/17.
//

#include "complex_matrix.h"

Matrix matrixMult(Matrix matrix1, Matrix matrix2, unsigned int dim)
{
    auto              **res = new unsigned int *[dim];
    for (unsigned int k        = 0; k < dim; k++)
    {
        res[k] = new unsigned int[dim];
    }

    for (unsigned int i = 0; i < dim; i++)
    {
        for (unsigned int j = 0; j < dim; j++)
        {
            res[i][j] = 0;
            for (unsigned int k = 0; k < dim; k++)
            {
                res[i][j] += matrix1._m[i][k] * matrix2._m[k][j];
            }
        }
    }

    Matrix resMatrix{res};
    return resMatrix;
}

Matrix add(Matrix matrix1, Matrix matrix2, unsigned int dim)
{
    auto              **res = new unsigned int *[dim];
    for (unsigned int i        = 0; i < dim; i++)
    {
        res[i] = new unsigned int[dim];
    }

    for (unsigned int i = 0; i < dim; i++)
    {
        for (unsigned int j = 0; j < dim; j++)
        {
            res[i][j] = matrix1._m[i][j] + matrix2._m[i][j];
        }
    }

    Matrix res_matrix{res};
    return res_matrix;
}

Matrix sub(Matrix matrix1, Matrix matrix2, unsigned int dimension)
{
    unsigned int      **result = new unsigned int *[dimension];
    for (unsigned int i        = 0; i < dimension; i++)
    {
        result[i] = new unsigned int[dimension];
    }

    for (unsigned int i = 0; i < dimension; i++)
    {
        for (unsigned int j = 0; j < dimension; j++)
        {
            result[i][j] = matrix1._m[i][j] - matrix2._m[i][j];
        }
    }

    Matrix resMatrix;
    resMatrix._m = result;
    return resMatrix;
}


ComplexMatrix cmatrixMult(ComplexMatrix cmatrix1, ComplexMatrix cmatrix2, unsigned int dimension)
{
    ComplexMatrix result;
    result._x = sub(matrixMult(cmatrix1._x, cmatrix2._x, dimension),
                    matrixMult(cmatrix1._y, cmatrix2._y, dimension), dimension);
    result._y = add(matrixMult(cmatrix1._x, cmatrix2._y, dimension),
                    matrixMult(cmatrix1._y, cmatrix2._x, dimension), dimension);
    return result;
}

ComplexMatrix cmatrixMult2(ComplexMatrix cmatrix1, ComplexMatrix cmatrix2, unsigned int dimension)
{
    Matrix T;
    Matrix R;
    Matrix S;
    T = matrixMult(add(cmatrix1._x, cmatrix1._y, dimension), sub(cmatrix2._x, cmatrix2._y, dimension), dimension);
    R = matrixMult(cmatrix1._x, cmatrix2._y, dimension);
    S = matrixMult(cmatrix1._y, cmatrix2._x, dimension);

    ComplexMatrix result;
    result._x = sub(add(T, R, dimension), S, dimension);
    result._y = add(R, S, dimension);
    return result;
}