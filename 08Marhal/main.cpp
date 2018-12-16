#include <iostream>
#include "power_rec.h"
#include "ficonacci_rec.h"
#include "structures.h"
#include "test.h"
#include <cassert>

using namespace std;

int main()
{
    cout << "=======================TESTING POWER=======================" << endl;
    test_power();
    cout << "=======================TESTING FIBONACCI=======================" << endl;
    test_fibonacci();
    cout << "=======================TESTING MATRIX FIBONACCI=======================" << endl;
    test_matrix_fib_rec();
    return 0;
}

void test_power()
{
    unsigned calls = 0;
    for (int i     = -10; i < 10; i++)
    {
        for (unsigned int j = 0; j < 20; j++)
        {
            cout << i << " to the power " << j << ": " << power(i, j, calls) << endl;
            cout << "calls:" << calls << endl;
            calls = 0;
        }
    }
}

void test_fibonacci()
{
    unsigned          calls = 0;
    for (unsigned int i     = 2; i < 20; i++)
    {
        cout << "Fibonacci[" << i << "]: " << Fibonaci(i, calls) << endl;
        cout << "calls:" << calls << endl;
        calls = 0;
    }
}

void test_matrix_fib_rec()
{
    cout << "BEGIN TEST FIBONACCI SERIES" << endl;
    unsigned long prev = 1;//0-th member
    unsigned long curr = 1;//1-st member
    unsigned long next = fibonacci(2);//2-nd member

    for (int i = 3; i < 100; i++)
    {
        if (prev + curr > UINT_MAX || prev + curr < curr)
        {
            cout << "previous result reached limit of u_int\nEND TEST\nall assertions passed" << endl;
            return;
        }
        assert(prev + curr == next);
        prev = curr;
        curr = next;
        next = fibonacci(i);
        cout << "fibonacci[" << i << "] == " << next << endl;
    }
    cout << "END TEST\nall assertions passed" << endl;
}