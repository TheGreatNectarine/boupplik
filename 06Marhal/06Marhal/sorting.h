//
// Created by Nick Marhal on 10/28/17.
//

#ifndef MARHALLAB6_SORTING_H
#define MARHALLAB6_SORTING_H

#include <iostream>
#include <cassert>
#include <algorithm>
#include <functional>
#include <random>

template<typename T>
void insertion_sort(T *arr, unsigned int len)
{
    for (int i = 1; i < len; ++i)
    {
        for (int j = i; j > 0; --j)
        {
            if (arr[j] < arr[j - 1])
            {
                T temp = arr[j];
                arr[j]     = arr[j - 1];
                arr[j - 1] = temp;
            } else break;
        }
    }
}

template<typename T>
bool sorted(T *arr, unsigned int len)
{
    for (unsigned int i = 1; i < len; ++i)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

template<typename T>
bool equal(T *src, unsigned int src_len, T *dst, unsigned int dst_len)
{
    assert(src_len == dst_len);
    std::sort(src, src + src_len);
    std::sort(dst, dst + dst_len);
    for (unsigned int i = 0; i < src_len; ++i)
    {
        if (src[i] != dst[i])
            return false;
    }
    return true;
}

template<typename T>
void fill_array(T *arr, unsigned int len)
{
    std::default_random_engine       generator;
    std::uniform_int_distribution<T> distribution(-static_cast<T>(len), len);
    for (unsigned int                i = 0; i < len; ++i)
    {
        arr[i] = distribution(generator);
    }
}

template<typename T>
void copy_array(T *src, unsigned int src_len, T *dst, unsigned int dst_len)
{
    if (src_len != dst_len)
    {
        throw "arrays' lengths are not equal";
    }
    for (unsigned int i = 0; i < src_len; ++i)
    {
        dst[i] = src[i];
    }
}

template<typename T>
void print_array(T *arr, unsigned int len)
{
    std::cout << "printing random array of length " << len << ':' << std::endl;
    for (unsigned int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}

template<typename T>
void test(unsigned int len)
{
    if (len == 0)
        throw "length == 0; what is the purpose?";
    auto *arr     = new T[len];
    auto *arr_new = new T[len];

    fill_array(arr, len);
    copy_array(arr, len, arr_new, len);
    print_array(arr_new, len);

    std::cout << std::endl << "same array but sorted:" << std::endl;

    insertion_sort<T>(arr, len);
    print_array(arr, len);

    assert(sorted(arr, len));
    std::cout << std::endl << "assertion complete: sorted" << std::endl;
    assert(equal(arr, len, arr_new, len));// As long as insertion sort uses only swaps and comparisons, can be skipped
    std::cout << "assertion complete: equal" << std::endl << std::endl;
    std::cout << "TEST FINISHED" << std::endl << std::endl;
}


void run_tests();

#endif //MARHALLAB6_SORTING_H
