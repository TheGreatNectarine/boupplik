#include <iostream>
#include "agm.h"
#include <limits>

int main()
{
    std::cout.precision(std::numeric_limits<double>::digits10);
    for (double a = -3; a < 20; a += 1.01)
    {
        for (double b = -3; b < 20; b += 1.05)
        {
            try
            {
                std::cout << "a: " << a << " b:" << b << " agm == " << agm(a, b) << std::endl << std::endl;
            } catch (char const *c)
            {
                std::cout << "!! error !! caught: " << c << std::endl << std::endl;
                continue;
            }
        }
    }
    return 0;
}