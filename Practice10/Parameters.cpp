//
// Created by Nick Marhal on 11/22/17.
//

#include "Parameters.h"
#include <iostream>

using namespace std;

int byvalue(int a)
{
    a++;
    cout << "\t\t" << &a << ':' << a << '/';
    return a;
}

int byconstvalue(const int a)
{
    cout << "\t\t" << &a << ':' << a << '/';
//	a++;
    return a;
}

int byreference(int &a)
{
    a++;
    cout << "\t\t" << &a << ':' << a << '/';
    return a;
}

int byconstreference(const int &a)
{
    cout << "\t\t" << &a << ':' << a << '/';
//	a++;
    return a;
}

int byptr(int *a)
{
    (*a)++;
    cout << "\t\t" << a << ':' << *a << '/';
    return *a;
}

int byconstptr(int *const a)
{
    cout << "\t\t" << &a << ':' << a << ':' << *a << '/';
//	*a++;
//	a++;
    return *a;
}

int *byhandler(int **a)
{
    cout << "\t\t" << &a << ':' << a << ':' << *a << '>' << endl;
//	(*a)++;
    a++;
    cout << "\t\t" << &a << ':' << a << ':' << *a << '>';
    return *a;
}

double f(Point &v)
{
    return v._x;
}

double &g(Point &v)
{
    return v._x;
}

const Point &h(const Point &v)
{
    return v;
}

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    return;
}

void pswap(int *x, int *y)
{
    int z = *x;
    *x    = *y;
    *y    = z;
    return;
}
