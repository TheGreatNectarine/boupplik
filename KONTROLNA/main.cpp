#include <iostream>

//#include <iostream>
//#include "functions.h"
//#include <cassert>
//
//using namespace std;
//
//int main()
//{
////    cout.precision(20);
////    size_t size = 3;
////    auto **m = new double *[size];
////    for (int i = 0; i < size; i++) {
////        m[i] = new double[size];
////    }
////    Matrix matrix = {size, m};
//    cout << task_3(4);
//
////    for (int j = 0; j < size; j++) {
////        m[j] = nullptr;
////        delete[] m[j];
////    }
////
////
////    m = nullptr;
////    delete[] m;
////    return 0;
//}
//
//const int recurrence(const int x, const unsigned n)
//{
//    int x_copy = x;
//    unsigned res = 0;
//    for (int i = 0; i < n; i++) {
//        res += x_copy;
//        x_copy *= x_copy;
//    }
//    return res;
//}
//
//const double fraction_rec(unsigned i, unsigned n)
//{
//    if (i == n) {
//        return n+1;
//    }
//    return i+1/fraction_rec(i+1, n);
//}
//
//const double fraction(unsigned n)
//{
//    double b = n+1;
//    for (int i = n; i > 0; i--) {
//        b = i+1/b;
//    }
//    return b;
//}
//
//const int task_4(int a1, int a2, int a3, unsigned n)
//{
//    if (n == 1) {
//        return a1;
//    }
//    if (n == 2) {
//        return a2;
//    }
//    if (n == 3) {
//        return a3;
//    }
//    int res = -2*a3+a2+2*a1;
//    for (int i = 3; i < n; i++) {
//        res = -2*a3+a2+2*a1;
//        a1 = a2;
//        a2 = a3;
//        a3 = res;
//    }
//    return res;
//}
//
//const int task_6(int a1, int a2, int a3, unsigned n)
//{
//    if (n == 1) return a1;
//    if (n == 2) return a2;
//    if (n == 3) return a3;
//    return task_6(a2, a3, -2*a3+a2+2*a1, n-1);
//
//}
//
//const int task_7(unsigned dword)
//{
//    return ((dword >> 24) & 0x000000FF | (dword >> 8) & 0x0000FF00 | (dword << 8) & 0x00FF0000 |
//            (dword << 24) & 0xFF000000);
//}
//
//
//
//const Polynomial &operator*(const Polynomial &polynomial, double num)
//{
//
//}
//
//const Polynomial &operator+(const Polynomial &p1, const Polynomial &p2)
//{
//
//}
double task_3(unsigned n)
{
    double res = 4*n+2;
    for (int i = n; i >= 0; i--) {
        res = 4*i+2+1./res;
    }
    return res;
}

double task_4(unsigned n) {
    double res = 4*n+2;

    return task_4(n-1) / res;
}

int main()
{
    std::cout << task_4(4);
    return 0;
}