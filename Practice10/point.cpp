//
// Created by Nick Marhal on 11/22/17.
//

#include "points.h";

const Point &mass_center(const Point *points, const double *masses, size_t n)
{
    Point res = {coord_mass_center(points, masses, n, &Point::_x), coord_mass_center(points, masses, n, &Point::_y)};
    return res;
}

double coord_mass_center(const Point *points, const double *masses, size_t n, coord axis)
{
    double s      = 0;
    double mass_s = 0;

    for (unsigned int i(0); i < n; ++i)
    {
        s += (points[i].*axis) * masses[i];
        mass_s += masses[i];
    }
    return s / mass_s;
}

double get_coord(const Point &point, coord axis)
{
    return point.*axis;
}