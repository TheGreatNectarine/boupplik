#include <iostream>
using namespace std;
#include "Char.h"

int main()
{
    char * text = "qwerty";
    cout<<text<<endl;
    char * a = new char[charlen(text)+1];
    copyon(a,text);
    cout<<a<<endl;
    char * test = "asdfghjkl";
    assign(&a, test);
    cout<<a<<endl;
    clear(&a);
    cout<<a<<endl;

    cout<<"that is all"<<endl;
    delete [] a;
    cout<<"deleted"<<endl;
    return 0;
}
