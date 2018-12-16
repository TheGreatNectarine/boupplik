//
// Created by Nick Marhal on 12/5/17.
//
#include <cmath>
#include "structures.h"

Section task_7(const Section s, const double k)
{
	Point vec = {s._p2._x-s._p1._x, s._p2._y-s._p1._y};
	vec._x = vec._x*k+s._p1._x;
	vec._y = vec._y*k+s._p1._y;
	Section res = {s._p1, vec};
	return res;
}

std::ostream &operator<<(std::ostream &os, const Section &s)
{
	os << "(" << s._p1._x << ", " << s._p1._y << ")-"
	   << "(" << s._p2._x << ", " << s._p2._y << ") " << std::endl;
	return os;
}

const double _sin(const double x)
{
	return sin(x);
}

const double _cos(const double x)
{
	return cos(x);
}
