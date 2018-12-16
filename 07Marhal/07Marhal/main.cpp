#include <iostream>
#include "structures.h"
#include "test.h"
#include <cassert>
#include <climits>

using namespace std;


int main()
{
    test_fib();
    return 0;
}

void test_fib()
{
    cout << "BEGIN TEST FIBONACCI SERIES" << endl;
    unsigned long prev = 1;//0-th member
    unsigned long curr = 1;//1-st member
    unsigned long next = fibonacci(2);//2-nd member

    for (int i = 3; i < 100; i++)
    {
        if (prev + curr > UINT_MAX)
        {
            cout << "reached limit of u_int\nEND TEST\nall assertions passed" << endl;
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