//
// Created by Nick Marhal on 12/5/17.
//
#include <iostream>
#include <cassert>
#include <cmath>
#include <sstream>

//checking if simplified version of ternary operator is equal to operator's result
bool task_1(double x, double y)
{
	return (x ? y = x : y = 0) == (y = x);//y = x is a simplified version
}

//recurrent relation got by dividing current member by previous is x^(3n^2-3n+1)
double task_2(const double x, const double n)
{
	double res = 1;
	double curr = 1;
	for (int i = 1; i <= n; i++) {
		curr *= pow(x, 3*i*i-3*i+1);
		res += curr;
	}
	return res;
}

void exch(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void task_3(double &a, double &b)
{
	while (a > b) {
		exch(a, b);
	}
	assert(a < b);
}

char *task_4(long long unsigned int number)
{
	if (number != 0) {
		auto len = lround(log(number)/log(16.0)+.5);//a ceiling of log[16] to determine array size
		auto *hex = new char[len];
		auto quotient = number;
		unsigned long long int rem = 0;
		for (auto i = static_cast<int>(len-1); quotient != 0; i--) {
			rem = quotient%16;
			if (rem < 10) {
				hex[i] = static_cast<char>(rem+48);//so we get decimal digits here
			} else {
				hex[i] = static_cast<char>(rem+55);//and hexadecimal here
			}
			quotient /= 16;
		}
		std::istringstream rev_converter(hex);
		unsigned int dec(0);
		rev_converter >> std::hex >> dec;
		assert(dec == number);
		return hex;
	} else return const_cast<char *>("0");
}


//recurrent relation which shows the number of words which DON'T contain 'aa' sequence is:
//a[n] = 2*a[n-1] + 2*a[n-2] where n is the length of the word
//Supposing we have an alphabet {a,b,c}, the number of all possible words of length n is 3^n
//and the number of words containing 'aa' sequence is 3^n-a[n]
unsigned task_5(const unsigned n)
{
	unsigned a1 = 3;
	unsigned a2 = 8;
	unsigned res = 0;
	unsigned pow_3 = 3*3;
	for (int i = 3; i <= n; i++) {
		res = 2*a2+2*a1;
		a1 = a2;
		a2 = res;
		pow_3 *= 3;
	}
	return pow_3-res;
}