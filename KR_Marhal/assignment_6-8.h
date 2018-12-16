//
// Created by Nick Marhal on 12/5/17.
//

#ifndef KR_MARHAL_ASSIGNMENT_6_8_H
#define KR_MARHAL_ASSIGNMENT_6_8_H

#include <cstddef>
#include "structures.h"


template<class T>
int task_6(const T *arr, const size_t size, const T &destination)
{
	int lo = 0;
	auto hi = static_cast<int>(size-1);
	while (lo <= hi) {
		int mid = lo+(hi-lo)/2;
		if (arr[mid] < destination) {
			lo = mid+1;
		} else if (arr[mid] > destination) {
			hi = mid-1;
		} else {
			return mid;
		}
	}
	return -1;//element not found
}

Section task_7(Section s, double k);

const Point operator+(const Point &p1, const Point &p2);

std::ostream &operator<<(std::ostream &os, const Section &s);

const double _sin(double);

const double _cos(double);

#endif //KR_MARHAL_ASSIGNMENT_6_8_H
