#include <iostream>

using namespace std;

#include <cassert>
#include "functions.h"
#include <cmath>

bool ternary(double x, double y)
{
	return (x ? y = x : y = 0) == (y = x);
}

void first()
{
	cout << "first" << endl;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			assert(ternary(i, j));
			cout << "true for i=" << i << "; j=" << j << endl;
		}
	}
	cout << endl;
}

double sum(const double x, const int n)
{
	double sum = 1;
	double current = 1;
	for (int i = 1; i <= n; i++) {
		current = current*pow(x, 3*i*i-3*i+1);
		sum = sum+current;
	}
	return sum;
}

void second()
{
	cout << "second" << endl;
	cout << "x=0;n=3: " << sum(0, 3) << endl;
	cout << "x=1;n=4: " << sum(1, 4) << endl;
	cout << "x=8;n=0: " << sum(8, 0) << endl;
	cout << "x=2;n=2: " << sum(2, 2) << endl << endl;
}

void arrangePair(int &first, int &second)
{
	while (first > second) {
		int temp = first;
		first = second;
		second = temp;
	}
	assert(second >= first);
}

void third()
{
	cout << "third" << endl;
	int a = 5, b = 3;
	cout << "a= " << a << "b=" << b << endl;
	arrangePair(a, b);
	cout << "after arranging\na= " << a << "b=" << b << endl;
	a = -1, b = -10;
	cout << "a= " << a << "b=" << b << endl;
	arrangePair(a, b);
	cout << "after arranging\na= " << a << "b=" << b << endl;
	a = 1, b = 2;
	cout << "a= " << a << "b=" << b << endl;
	arrangePair(a, b);
	cout << "after arranging\na= " << a << "b=" << b << endl << endl;
}

void base10to16(unsigned long long int x)
{
	int arrLen = 1;
	if (x) {
		arrLen = static_cast<unsigned int> (log((double) x)/log(16.)+1);
	}
	char *res = new char[arrLen+1];
	res[arrLen] = '\0';
	int rem = 0;
	for (int i = arrLen-1; i >= 0; i--) {
		rem = x%16;
		// if rem is less then 10 put in str a digit, else - letter
		if (rem > 9) {
			res[i] = rem+55;
		} else {
			res[i] = rem+48;
		}
		x /= 16;
	}
	cout << res << endl;
	delete[] res;
}

void fourth()
{
	cout << "fourth" << endl;
	cout << "number = " << 0 << endl;
	base10to16(0);
	cout << "number = " << 16 << endl;
	base10to16(16);
	cout << "number = " << 255 << endl;
	base10to16(255);
	cout << "number = " << 10 << endl;
	base10to16(10);
	cout << "number = " << 15 << endl;
	base10to16(15);
}


int numberOfWords(int n)
{
	if (n > 2) {
		int a1 = 8, a2 = 22, temp = 0, power = 9;
		for (int i = 4; i <= n; i++) {
			temp = a2;
			a2 = 2*a2+2*a1;
			a1 = temp;
			power = power*3;
		}
		return power-a2;
	} else
		throw n;
}

void fifths()
{
	cout << "fifths" << endl;
	for (int n = 3; n < 20; n++) {
		cout << "word length = " << n << " number of words " << numberOfWords(n) << endl << endl;
	}
}

void sixth()
{
	cout << "sixth" << endl;
	int len = 10;
	int *arr = new int[len];
	for (int i = len-1; i > 0; i--) {
		arr[i] = i;
	}
	cout << "array: " << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	int find = 9;
	int index = findIndex(arr, find, len);
	cout << endl << "index of " << find << " is: " << index << endl;
	find = 3;
	index = findIndex(arr, find, len);
	cout << endl << "index of " << find << " is: " << index << endl;
	find = 10000;
	index = findIndex(arr, find, len);
	cout << endl << "index of " << find << " is: " << index << endl;
}

void resize(Line &s, double k)
{
	Point newEndPoint = {s._p2._x-s._p1._x, s._p2._y-s._p1._y};
	newEndPoint._x = newEndPoint._x*k+s._p1._x;
	newEndPoint._y = newEndPoint._y*k+s._p1._y;
	s._p2 = newEndPoint;
}

ostream &operator<<(ostream &os, const Line &s)
{
	os << "(" << s._p1._x << ", " << s._p1._y << ")-->(" << s._p2._x << ", " << s._p2._y << ")";
	return os;
}

void seventh()
{
	cout << "seventh" << endl;
	Point p1 = {1., 1.};
	Point p2 = {5., 3.5};
	Line s = {p1, p2};
	cout << "line: " << s << endl;
	resize(s, 2);
	cout << "after 2x resizing: " << s << endl;
	resize(s, 1/2);
	cout << "after 1/2x resizing (same as original): " << s << endl;
	resize(s, 2.45);
	cout << "after 2.45x resizing: " << s << endl << endl;

}

double mySin(double x)
{
	return sin(static_cast<float>(x));
}

void eights()
{
	cout << "eights" << endl;
	cout << "PI in register 'x', function: sin" << endl;
	Calculator calculator1 = {mySin, 3.14159};
	calculator1.calculate();
	cout << "sin(PI): " << calculator1.register_y << endl;
	cout << "0 in register x, function: sin " << endl;
	Calculator calculator2 = {mySin, 0};
	calculator1.calculate();
	cout << "sin(0): " << calculator2.register_y << endl << endl;
}


void exchange(int &a, int &b)
{
	int buf = a;
	a = b;
	b = buf;
}

void transpose(Matrix &m)
{
	for (int i = 0; i < m._n; i++) {
		for (int j = i+1; j < m._n; j++) {
			exchange(m._M[j+i*m._n], m._M[i+j*m._n]);
		}
	}
}

ostream &operator<<(ostream &ostr, const Matrix &m)
{
	int len = m._n;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			ostr << m._M[j+i*len] << " ";
		}
		ostr << endl;
	}
	return ostr;
}

const bool operator==(const Matrix &m1, const Matrix &m2)
{
	if (m1._n != m2._n)
		return false;
	int n = m1._n*m2._n;
	for (int i = 0; i < n; i++) {
		if (m1._M[i] != m2._M[i])
			return false;
	}
	return true;
}

void nineth()
{
	cout << "nineth" << endl;
	size_t size = 4;
	int *mat1 = new int[size*size];
	for (int i = 0; i < size*size; i++) {
		mat1[i] = i;
	}
	Matrix m = {size, mat1};
	cout << "matrix: \n" << m << endl;
	transpose(m);
	cout << "transposed: \n" << m << endl << endl;
}

const bool operator==(const Matrix2 &m1, const Matrix2 &m2)
{
	if (m1._n != m2._n || m1._m != m2._m)
		return false;
	int n = m1._n*m2._m;
	for (int i = 0; i < n; i++) {
		if (m1._M[i] != m2._M[i])
			return false;
	}
	return true;
}

const Matrix2 operator+(const Matrix2 &m1, const Matrix2 &m2)
{
	int n = m1._n*m1._m;
	int *matrix = new int[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = m1._M[i]+m2._M[i];
	}
	Matrix2 res = {m1._n, m1._m, matrix};
	return res;
}

ostream &operator<<(ostream &out, const Matrix2 &m)
{
	for (int i = 0; i < m._n; i++) {
		for (int j = 0; j < m._m; j++) {
			out << m._M[j+i*m._m] << " ";
		}
		out << endl;
	}
	return out;
}

void tenth()
{
	cout << "tenth" << endl;
	size_t width = 2, height = 3;
	int *mat1 = new int[width*height];
	for (int i = 0; i < width*height; i++) {
		mat1[i] = i;
	}
	Matrix2 a = {width, height, mat1};
	cout << "first matrix: \n" << a << endl;
	int *mat2 = new int[width*height];
	for (int i = 0; i < width*height; i++) {
		mat2[i] = i%3;
	}
	Matrix2 b = {width, height, mat2};
	cout << "second matrix: \n" << b << endl;
	cout << "first+second: \n" << a+b << endl;
	assert(a+b == b+a);
}
