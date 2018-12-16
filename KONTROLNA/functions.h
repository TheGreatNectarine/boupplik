////
//// Created by Nick Marhal on 11/29/17.
////
//
//#ifndef KONTROLNA_FUNCTIONS_H
//#define KONTROLNA_FUNCTIONS_H
//
//
//#include <cstddef>
//#include <utility>
//#include <iostream>
//
//template<class T>
//T power(const T &base, const unsigned exp, T &y = 1)
//{
//    if (exp == 0) return y;
//    if (exp%2 == 0) {
//        return power(base*base, exp/2, y);
//    }
//    return power(base, exp-1, y);
//}
//
//template<typename T>
//struct Vector
//{
//    T *_elements;
//    size_t length;
//};
//
//void sort(Vector &v)
//{
//    for (int i = 0; i < v.length; i++) {
//        for (int j = i; j > 0; j--) {
//            if (v._elements[j] < v._elements[j-1]) {
//                exch(v._elements[j], v._elements[j-1]);
//            }
//        }
//    }
//}
//
//template<typename T>
//void exch(T &t1, T &t2)
//{
//    T temp = t1;
//    t1 = t2;
//    t2 = temp;
//}
//
//struct Matrix
//{
//    size_t _size;
//    double **_matrix;
////
////    const Matrix &operator=(Matrix &m1, Matrix &m2)
////    {
////        m1._size = m2._size;
////        size_t size = m1._size;
////        for (int i = 0; i < size; i++) {
////            for (int j = 0; j < size; j++) {
////                m1._matrix[i][j] = m2._matrix[i][j];
////            }
////        }
////        return m1;
////    }
//
//};
//
//
//const Matrix operator*(const Matrix &m1, const Matrix &m2)
//{
//    Matrix res = m1;
//    for (int i = 0; i < m1._size; i++) {
//        for (int j = 0; j < m1._size; j++) {
//            for (int k = 0; k < m1._size; k++) {
//                res._matrix[i][j] = m1._matrix[i][k]*m2._matrix[k][j];
//            }
//        }
//    }
//    return res;
//}
//
//const Matrix operator+(const Matrix &m1, const Matrix &m2)
//{
//    Matrix res = m1;
//    size_t size = res._size;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            res._matrix[i][j] = m1._matrix[i][j]+m2._matrix[i][j];
//        }
//    }
//    return res;
//}
//
//const Matrix operator^(Matrix &matrix, unsigned power)
//{
//    Matrix res = matrix;
//    if (power == 0)
//        return res;
//    while (power > 0) {
//        if (power & 1) {
//            res = res*matrix;
//        }
//        matrix = matrix*matrix;
//        power >>= 1;
//    }
//    return res;
//}
//
//
//std::ostream &operator<<(std::ostream &os, const Matrix &m)
//{
//    for (int i = 0; i < m._size; i++) {
//        for (int j = 0; j < m._size; j++) {
//            os << m._matrix[i][j] << ' ';
//        }
//        os << '\n';
//    }
//    return os;
//}
//
//struct Polynomial
//{
//    std::pair<double, double> *_poly;
//    size_t len;
////    double coefs[];
////    double x;
//};
//
//const int recurrence(int x, unsigned n);
//
//const double fraction_rec(unsigned i, unsigned n);
//
//const double fraction(unsigned n);
//
//const int task_4(int a1, int a2, int a3, unsigned n);
//
//const int task_6(int a1, int a2, int a3, unsigned n);
//
//const int task_7(unsigned dword);
//
//const Polynomial &operator+(const Polynomial &p1, const Polynomial &p2);
//
//#endif //KONTROLNA_FUNCTIONS_H
