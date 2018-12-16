//
// Created by Nick Marhal on 11/22/17.
//

#ifndef PRACTICE10_POINTS_H
#define PRACTICE10_POINTS_H

#include <cstddef>

struct Point
{
    double _x;
    double _y;
};

typedef const double Point::* const coord;

const Point &mass_center(const Point *points, const double *masses, size_t n);

double coord_mass_center(const Point *, const double *, size_t, coord);

double get_coord(const Point &, coord);

#endif //PRACTICE10_POINTS_H
