//
// Created by Nick Marhal on 11/7/17.
//
#include <iostream>
#include <vector>
#include <random>

#define type int

using namespace std;


type random_coef(type origin, type bound)
{
    std::random_device                   rd;
    std::mt19937                         gen(rd());
    std::uniform_real_distribution<type> distribution(origin, bound);
    return distribution(gen);
}

void random_coefs(type coef[], unsigned int len)
{
    for (int i = 0; i < len; i++)
    {
        coef[i] = random_coef(-10, 10);
    }
}

type max(type arr[], unsigned len)
{
    type     max = arr[0];
    for (int i   = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

type min(type arr[], unsigned len)
{
    type     min = arr[0];
    for (int i   = 1; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

void in(type *arr, unsigned len, type origin, type bound)
{
    if (origin > bound)
    {
        throw "origin > bound";
    }
    unsigned new_len = 0;
    for (int i       = 0; i < len; i++)
    {
        if (arr[i] >= origin and arr[i] <= bound)
        {
            cout << arr[0] << ' ';
            return;
        }
    }
}

void interval(type *arr, unsigned len, type origin, type bound)
{
    if (origin > bound)
    {
        throw "origin > bound";
    }
    unsigned new_len = 0;
    for (int i       = 0; i < len; i++)
    {
        if (arr[i] >= origin and arr[i] <= bound)
        {
            cout << arr[i] << ' ';
        }
    }
}

double avg(type *arr, unsigned len)
{
    double   avg = 0;
    for (int i   = 0; i < len; i++)
    {
        avg += arr[i];
    }
    return avg / len;
}


int main()
{
//    unsigned int len = 0;
//    cout << "enter array size: " << endl;
//    cin >> len;
//    auto *arr = new int[len];
//    random_coefs(arr, len);
//    ///
    unsigned cols = 10, rows = 10;
    auto     **a  = new type *[rows];

    for (int k = 0; k < rows; k++)
    {
        *(a + k) = new type[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
//            cin >> a[i][j];
            a[i][j] = i * j;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j];
            long spaces = 5 - to_string(a[i][j]).size();
            while (spaces--)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }

    vector<double> vec = new vector;
    for (int       l   = 0; l < rows; l++)
    {
        vec.push_back(avg(*(a + l), cols));
    }
    return 0;
}

