//
// Created by Nick Marhal on 11/8/17.
//

#ifndef PRACTICES_MOMPLEX_MATRIX_H
#define PRACTICES_MOMPLEX_MATRIX_H
struct Matrix
{
    unsigned int **_m;
};
struct ComplexMatrix
{
    Matrix _x;
    Matrix _y;
};

Matrix matrixMult(Matrix matrix1, Matrix matrix2, unsigned int dim);

ComplexMatrix cmatrixMult(ComplexMatrix cmatrix1, ComplexMatrix cmatrix2, unsigned int dimension);

ComplexMatrix cmatrixMult2(ComplexMatrix cmatrix1, ComplexMatrix cmatrix2, unsigned int dimension);

#endif //PRACTICES_MOMPLEX_MATRIX_H
