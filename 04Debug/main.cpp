#include <iostream>
#include "agm.h"

int main()
{
	for (double i = 0; i <= 1; i += 0.001) {
		for (double j = i; j <= 1; j += 0.00000000001) {
			std::cout <<"a: " << i << "b: " << j << " " << agm(i, j) << std::endl;
		}
	}
	std::cout << "no loop" << std::endl;
	return 1;
}