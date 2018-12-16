//
// Created by Nick Marhal on 11/8/17.
//

void fib(double &f1, double &f2, unsigned int n, unsigned int &calls)
{
    if (n >= 2)
    {
        ++calls;
        double f = f2;
        f2 += f1;
        f1       = f;
        fib(f1, f2, n - 1, calls);
    }
};

double Fibonaci(unsigned int n, unsigned int &calls)
{
    double f0 = 0, f1 = 1;
    switch (n)
    {
        case 0:
            return f0;
            break;
        case 1:
            return f1;
            break;
        default:
            fib(f0, f1, n, calls);
            return f1;
    }
};