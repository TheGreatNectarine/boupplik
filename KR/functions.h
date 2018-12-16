#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

using namespace std;

void first();

void second();

void third();

void fifths();

void fourth();

void sixth();

void seventh();

void eights();

void nineth();

void tenth();

double sum(double x, int n);

template<typename T>
int findIndex(const T *arr, const T &X, size_t len)
{
	for (int i = 0; i < len; i++) {
		if (arr[i] == X) {
			return i;
		}
	}
	return -1;
}

struct Matrix
{
	size_t _n;
	int *_M;
};

ostream &operator<<(ostream &ostr, const Matrix &m);

const bool operator==(const Matrix &m1, const Matrix &m2);

struct Matrix2
{
	size_t _n;
	size_t _m;
	int *_M;
};

struct Point
{
	double _x, _y;
};

struct Line
{
	Point _p1, _p2;
};

struct Calculator
{
	double (*trigonometric)(double);

	double register_x;
	double register_y;

	void calculate()
	{
		register_y = trigonometric(register_x);
	}
};

void calculate(Calculator &c);

int numberOfWords(int n);

ostream &operator<<(ostream &os, const Line &s);

const bool operator==(const Matrix2 &m1, const Matrix2 &m2);

const Matrix2 operator+(const Matrix2 &m1, const Matrix2 &m2);

ostream &operator<<(ostream &out, const Matrix2 &m);

void base10to16(unsigned long long int src);

#endif //FUNCTIONS