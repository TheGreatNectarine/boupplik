//
// Created by Nick Marhal on 11/1/17.
//

double absolute(double x)
{
    return x > 0 ? x : -x;
}

double float_mod(double x0, double x1)
{
    while (x0 > x1)
    {
        x0 -= x1;
    }
    return x0;
}