#include <iostream>
#include "functions.h"
#include <cmath>



using namespace std;

int main()
{
    std::cout.precision(10);
    std::cout << "==============TESTING EXPONENT==============" << std::endl << std::endl << std::endl;
    test_exp();
    std::cout << "==============TESTING COSINE==============" << std::endl << std::endl << std::endl;
    test_cos();
    std::cout << "==============TESTING ATAN==============" << std::endl << std::endl << std::endl;
    test_atan();
    return 0;
}

