//
// Created by Nick Marhal on 11/26/17.
//

#ifndef INC_11MARHAL_SIMPSON_H
#define INC_11MARHAL_SIMPSON_H

double simpson(double lo, double hi, double (*func)(double), double eps);

double elliptical(double x);

double elliptical_integral();

double dirichlet(double x);

double dirichlet_integral();

double poisson(double x);

double poisson_integral();

double euler(double x);

double euler_integral();

double sgn(double);

double aryth_geom_mean(double, double);

double euler_integral(double);

#endif //INC_11MARHAL_SIMPSON_H
