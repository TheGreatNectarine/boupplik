#pragma once

int byvalue(int a);
int byconstvalue(const int a);
int byreference(int & a);
int byconstreference(const int & a);
int byptr(int * a);
int byconstptr(int * const a);
int* byhandler(int ** a);

struct Point
{
	double _x, _y;
};

double f(Point&);
double& g(Point &);
const Point& h(const Point&);

void swap(int& x, int& y);
void pswap(int* x, int* y);