#include <iostream>
#include "Brainfuck.h"
#include "programs_bf.h"

using namespace std;

int main()
{
	eval(vv);
    cout << "classic BF program '99 bottles of beer'\nCode:\n" << bottles_of_beer << endl << "evaluation:" << endl;
    eval(bottles_of_beer);

    cout << "less classical in BF but the most popular program in other languages\nCode:\n" << hello_world << endl
         << "evaluation:" << endl;
    eval(hello_world);

    cout << "a little hint\nCode:\n" << hint << endl << "evaluation:" << endl;
    eval(hint);

//    generate very long sequences. don't stop
//    eval(powers);
//    eval(fib);

    cout << endl << "sierpinski carpet\nCode:\n" << sierpinski << endl
         << "evaluation:" << endl;
    eval(sierpinski);

    cout << endl << "xmass tree of height you choose\nCode:\n" << xmass << endl
                 << "evaluation:\n(enter a character)" << endl;
    eval(xmass);
    return 0;
}