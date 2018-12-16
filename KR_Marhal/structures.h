//
// Created by Nick Marhal on 12/5/17.
//

#ifndef KR_MARHAL_STRUCTURES_H
#define KR_MARHAL_STRUCTURES_H

#include <cstddef>
#include <iostream>

struct Point
{
	double _x, _y;
};

struct Section
{
	Point _p1, _p2;
};

struct Matrix1DA
{
	double *_matrix;
	size_t _dim;
};

struct Matrix
{
	double **_matrix;
	size_t _width;
	size_t _height;
};

struct Calculator
{
	public:

		Calculator(const double (*function)(double), double arg) : trig_func(function), rx(arg), ry(0)
		{

		};

		~Calculator()
		{};

		void set_function(const double (*f)(double))
		{
			trig_func = f;
		}

		void set_arg(const double arg)
		{
			rx = arg;
		}

		void calculate()
		{
			ry = trig_func(rx);
		};

		double result()
		{
			return ry;
		}

	private:
		const double (*trig_func)(double param);

		double rx;

		double ry;
};

#endif //KR_MARHAL_STRUCTURES_H
