//
// Created by Nick Marhal on 12/5/17.
//

#ifndef KR_MARHAL_ASSIGNMENT_H
#define KR_MARHAL_ASSIGNMENT_H

#include <cstddef>
#include "structures.h"

const Matrix1DA task_9(const Matrix1DA &m);

double add(double i, double j);

double multiply(double i, double j);

void
fill_arr(double **arr, size_t width, size_t height, double (*pattern)(double, double) = add);

Matrix operator+(const Matrix &m1, const Matrix &m2);//task_10

Matrix operator-(const Matrix &m1, const Matrix &m2);

bool operator==(const Matrix &m1, const Matrix &m2);

std::ostream &operator<<(std::ostream &os, const Matrix1DA &m);

std::ostream &operator<<(std::ostream &ostr, const Matrix &m);

bool operator==(const Matrix1DA &m1, const Matrix1DA &m2);

#endif //KR_MARHAL_ASSIGNMENT_H
