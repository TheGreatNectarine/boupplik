#include "Parameters.h"
#include <iostream>
using namespace std;

int main()
{
	int x =1;
//1
	cout<<"by value\t"<<&x<<':'<<x<<endl;
	cout<<byvalue(x)<<':';
	cout<<x<<endl;
//2
	cout<<"by const value\t"<<&x<<':'<<x<<endl;
	cout<<byconstvalue(x)<<':';
	cout<<x<<endl;
//3
	cout<<"by reference\t"<<&x<<':'<<x<<endl;
	cout<<byreference(x)<<':';
	cout<<x<<endl;
//	Compare
	x=1;
	cout<<byreference(x)<<':'<<x<<endl;
//4
	cout<<"by const ref\t"<<&x<<':'<<x<<endl;
	x=1;
	cout<<byconstreference(x)<<':';
	cout<<x<<endl;
//5
	int * px = new int[2];
	px[0]=1;
	px[1]=100;
	cout<<"by pointer\t"<<px<<':'<<*px<<endl;
	cout<<byptr(px)<<':';
	cout<<px<<':'<<*px<<endl;
//6
	int *const pc= new int (1);
	*pc = 2;
	*pc=1;
	cout<<"by const ptr\t"<<pc<<':'<<*pc<<endl;
	cout<<byconstptr(pc)<<':';
	cout<<pc<<':'<<*pc<<endl;
//7
	px[0]=1;
	px[1]=100;
	cout<<"by handler\t"<<&px<<':'<<px<<':'<<*px<<endl;
	cout<<byhandler(&px)<<':'<<endl;
	cout<<"\t\t"<<&px<<'*'<<px<<':'<<*px<<endl;

	Point u ={1,2};

	cout<<f(u)<<endl;
	g(u)=100;
	cout<<u._x<<endl;
	cout<<h(u)._y<<endl;
	return 0;
}