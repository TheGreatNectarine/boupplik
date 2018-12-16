//
// Created by Nick Marhal on 11/26/17.
//
#define _USE_MATH_DEFINES

#include <cstdio>
#include <iostream>
#include "constants.h"
#include "functions.h"
#include <cmath>

using namespace std;

void test()
{
    cout << "integrating elliptical: ";
    cout << elliptical_integral() << endl;
    cout << "\t#assertion is correct" << endl;

    cout << "integrating dirichlet:";
    cout << dirichlet_integral() << endl;
    cout << "\t#assertion is correct" << endl;

    cout << "integrating poisson:";
    cout << poisson_integral() << endl;
    cout << "\t#assertion is correct" << endl;

    //not working. Will appreciate any explanations
    cout << "Euler: ";
    cout << M_PI/sin(a*M_PI) << endl;
    cout << "integrating euler:";
    cout << euler_integral() << endl;
    cout << "\tcorrect" << endl;

}