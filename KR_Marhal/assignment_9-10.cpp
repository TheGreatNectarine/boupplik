//
// Created by Nick Marhal on 12/5/17.
//
#include <iostream>
#include "structures.h"

double add(double i, double j)         // these functions are used
{                                      // as patterns to fill an
	return i+j;                        // array in different ways
}                                      //
                                       //
double multiply(double i, double j)    //
{                                      //
	return (i*j);                      //
}                                      //

void fill_arr( double **arr, size_t width, size_t height, double (*pattern)(double, double) = add)
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			arr[i][j] = pattern(i, j);
		}
	}
}

const Matrix1DA task_9(const Matrix1DA &m)
{
	size_t dim = m._dim;
	auto *arr = new double[dim*dim];
	for (int i = 0; i < dim*dim; i++) {
		arr[i] = m._matrix[i];
	}
	Matrix1DA copy = {arr, dim};
	for (int i = 0; i < dim; i++) {
		for (int j = i+1; j < dim; j++) {
			std::swap(copy._matrix[j+i*m._dim], copy._matrix[i+j*m._dim]);
		}
	}
	return copy;
}

//task 10
Matrix operator+(const Matrix &m1, const Matrix &m2)
{
	if (m1._width == m2._width && m1._height == m2._height) {
		size_t width = m1._width;
		size_t height = m1._height;
		auto **matrix = new double *[height];
		for (int k = 0; k < height; k++) {
			matrix[k] = new double[width];
		}
		fill_arr(matrix, width, height);
		Matrix new_m = {matrix, width, height};
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				new_m._matrix[i][j] = m1._matrix[i][j]+m2._matrix[i][j];
			}
		}
		return new_m;
	} else throw "dimensions are inappropriate for addition";
}

Matrix operator-(const Matrix &m1, const Matrix &m2)
{
	if (m1._width == m2._width && m1._height == m2._height) {
		size_t width = m1._width;
		size_t height = m1._height;
		auto **matrix = new double *[height];
		for (int k = 0; k < height; k++) {
			matrix[k] = new double[width];
		}
		fill_arr(matrix, width, height);
		Matrix new_m = {matrix, width, height};
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				new_m._matrix[i][j] = m1._matrix[i][j]-m2._matrix[i][j];
			}
		}
		return new_m;
	} else throw "dimensions are inappropriate for addition";
}

bool operator==(const Matrix &m1, const Matrix &m2)
{
	if (m1._width == m2._width && m1._height == m2._height) {
		for (int i = 0; i < m1._height; i++) {
			for (int j = 0; j < m1._width; j++) {
				if (m1._matrix[i][j] != m2._matrix[i][j]) {
					return false;
				}
			}
		}
		return true;
	} else {
		return false;
	}
}

std::ostream &operator<<(std::ostream &os, const Matrix1DA &m)
{
	for (int i = 0; i < m._dim; i++) {
		for (int j = 0; j < m._dim; j++) {
			os << m._matrix[j+i*m._dim] << " ";
		}
		os << std::endl;
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const Matrix &m)
{
	for (int i = 0; i < m._height; i++) {
		for (int j = 0; j < m._width; j++) {
			os << m._matrix[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}

bool operator==(const Matrix1DA &m1, const Matrix1DA &m2)
{
	if (m1._dim == m2._dim) {
		for (int i = 0; i < m1._dim; i++) {
			for (int j = 0; j < m1._dim; j++) {
				if (m1._matrix[j+i*m1._dim] != m2._matrix[j+i*m2._dim]) {
					return false;
				}
			}
		}
		return true;
	}
	return false;
}