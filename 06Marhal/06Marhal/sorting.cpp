//
// Created by Nick Marhal on 10/29/17.
//

#include <iostream>
#include "sorting.h"

void run_tests()
{
    for (unsigned int len = 0; len < 20; ++len)
    {
        try
        {
            test(len);
        }
        catch (char const *c)
        {
            std::cout << c << std::endl;
        }
    }
}