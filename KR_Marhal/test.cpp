//
// Created by Nick Marhal on 12/6/17.
//
#include <iostream>
#include <cassert>
#include <cmath>
#include "test.h"
#include "assignment_1-5.h"
#include "assignment_6-8.h"
#include "assignment_9-10.h"

using namespace std;

void test_1()
{
	cout << "TESTING TASK 1" << endl;
	assert(task_1(0, 0)); //these tests are enough to check the correctness of the operator's simplification
	assert(task_1(0, 1));
	assert(task_1(1, 0));
	assert(task_1(1, 1));
	cout << "Assertions hasn't failed\nFINISHED" << endl << endl;
}

void test_2()
{
	cout << "TESTING TASK 2" << endl;
	cout << "x=0;n=10: " << task_2(0, 10) << endl;
	cout << "x=1;n=10: " << task_2(1, 10) << endl;
	cout << "x=10;n=0: " << task_2(10, 0) << endl;
	cout << "x=2;n=2: " << task_2(2, 2) << endl;
	cout << "FINISHED" << endl << endl;
}

void test_3()
{
	cout << "TESTING TASK 3" << endl;
	double a = 10;
	double b = 3;
	cout << "a: " << a << " b: " << b << endl;
	task_3(a, b);
	cout << "After arranging:\na: " << a << " b: " << b << endl;
	a = 1;
	b = 2;
	cout << "a: " << a << " b: " << b << endl;
	task_3(a, b);
	cout << "After arranging:\na: " << a << " b: " << b << endl;
	a = -10;
	b = -11;
	cout << "a: " << a << " b: " << b << endl;
	task_3(a, b);
	cout << "After arranging:\na: " << a << " b: " << b << endl;
	cout << "FINISHED" << endl << endl;
}

void test_4()
{
	cout << "TESTING TASK 4" << endl;
	cout << "0 in hexadecimal is: " << task_4(0) << endl;
	cout << "9 in hexadecimal is: " << task_4(9) << endl;
	cout << "10 in hexadecimal is: " << task_4(10) << endl;
	cout << "15 in hexadecimal is: " << task_4(15) << endl;
	cout << "16 in hexadecimal is: " << task_4(16) << endl;
	cout << "255 in hexadecimal is: " << task_4(255) << endl;
	cout << "256 in hexadecimal is: " << task_4(256) << endl;
	cout << "1000000000 in hexadecimal is: " << task_4(1000000000) << endl;
	cout << "FINISHED" << endl << endl;
}

void test_5()
{
	cout << "TESTING TASK 5" << endl;
	for (unsigned i = 3; i < 21; i++) {
		cout << "number of words is: " << task_5(i) << endl;
	}
	cout << "FINISHED" << endl << endl;
}

void test_6()
{
	cout << "TESTING TASK 6" << endl;
	size_t len = 15;
	auto *list = new int[len];
	for (int i = 0; i < len; i++) {
		list[i] = i;
	}
	cout << "index of 0 is: " << task_6(list, len, 0) << endl;
	cout << "index of 10 is: " << task_6(list, len, 10) << endl;
	cout << "index of -10 is: " << task_6(list, len, -1) << endl;
	cout << "index of 100 is: " << task_6(list, len, 100) << endl;

	delete[] list;
	list = nullptr;
	cout << "FINISHED" << endl << endl;
}

void test_7()
{
	cout << "TESTING TASK 7" << endl;
	Point p1 = {1, .3};
	Point p2 = {2, 2};
	double k = 2.5;
	Section section = {p1, p2};
	cout << "before multiplying by " << k << section << endl;
	auto resized = task_7(section, k);
	cout << "after multiplying by " << k << resized << endl;
	k = 3.5;
	resized = task_7(resized, k);
	cout << "after multiplying previous by " << k << resized << endl;
	k = 1/3.5;
	resized = task_7(resized, k);
	cout << "after dividing previous by " << 1/k << resized << endl;
	cout << "FINISHED" << endl << endl;
}

void test_8()
{
	cout << "TESTING TASK 8" << endl;
	auto *calculator = new Calculator(_sin, 0);
	calculator->calculate();
	cout << "sin(0) result: " << calculator->result() << endl;
	calculator->set_function(_cos);
	calculator->calculate();
	cout << "cos(0) result: " << calculator->result() << endl;
	calculator->set_arg(3.14159265);
	calculator->calculate();
	cout << "cos(PI) result: " << calculator->result() << endl;
	delete calculator;
	calculator = nullptr;
	cout << "FINISHED" << endl << endl;
}

void test_9()
{
	cout << "TESTING TASK 9" << endl;
	size_t size = 5;
	auto *arr = new double[size*size];
	for (int i = 0; i < size*size; i++) {
		arr[i] = i%9;
	}
	Matrix1DA m = Matrix1DA{arr, size};
	cout << "Matrix:\n" << m << endl;
	Matrix1DA m_transposed = task_9(m);
	cout << "Transposed:\n" << m_transposed << endl;
	Matrix1DA m_twice_transposed = task_9(m_transposed);
	cout << "Twice transposed:\n" << m_twice_transposed << endl;
	assert(!(m == m_transposed) && m == m_twice_transposed);
	delete[] arr;
	arr = nullptr;
	cout << "FINISHED" << endl << endl;
}

void test_10()
{
	cout << "TESTING TASK 10" << endl;
	size_t width = 5;
	size_t height = 4;
	auto **arr_m1 = new double *[height];
	for (int i = 0; i < height; i++) {
		arr_m1[i] = new double[width];
	}
	fill_arr(arr_m1, width, height, add);
	Matrix m1 = {arr_m1, width, height};
	auto **arr_m2 = new double *[height];
	for (int i = 0; i < height; i++) {
		arr_m2[i] = new double[width];
	}
	fill_arr(arr_m2, width, height, multiply);
	Matrix m2 = {arr_m2, width, height};
	cout << "Matrix 1: " << endl << m1 << endl << "Matrix 2:" << endl << m2 << endl;
	Matrix m3 = m1+m2;
	assert(m3-m1 == m2 && m3-m2 == m1 && m1+m2 == m2+m1);
	cout << "Sum: " << endl << m1+m2 << endl;
	for (int j = 0; j < height; j++) {
		delete[] arr_m1[j];
		delete[] arr_m2[j];
	}
	delete[] arr_m1;
	delete[] arr_m2;
	arr_m1 = nullptr;
	arr_m2 = nullptr;
	cout << "FINISHED" << endl << endl;
}
