#include <iostream>
#include "practice.h"

using namespace std;

unsigned init_array();

void in(int arr[], unsigned len);

void out(int arr[], unsigned len);

int sum(int arr, unsigned len);

double avg(int arr[], unsigned len);

double mean_positive(int *arr, unsigned len);

double mean_negative(int *arr, unsigned len);

int sign_changing_sum(int arr[], unsigned len, bool sign_change = false);

//int main()
//{
//    unsigned len = init_array();
//    int      arr[len];
//    in(arr, len);
//    out(arr, len);
//    cout << "sum: " << sign_changing_sum(arr, len);
//    return 0;
//}

unsigned init_array()
{
    unsigned len;
    cout << "enter length of an array: ";
    cin >> len;
    return len;
}

void in(int arr[], unsigned len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "enter value at index " << i << ": " << endl;
        cin >> arr[i];
    }
}

void out(int arr[], unsigned len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "value at index " << i << ": " << arr[i] << endl;
    }
}

int sum(int arr[], unsigned len)
{
    int      res = 0;
    for (int i   = 0; i < len; i++)
    {
        res += arr[i];
    }
    return res;
}

double mean(int arr[], unsigned len)
{
    double res = 0;
    return static_cast<double>(sum(arr, len)) / len;
}

double mean_positive(int arr[], unsigned len)
{
    double   res     = 0;
    unsigned counter = 0;
    for (int i       = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            res += arr[i];
            ++counter;
        }
    }
    return res / static_cast<double>(counter);
}

double mean_negative(int arr[], unsigned len)
{
    double   res     = 0;
    unsigned counter = 0;
    for (int i       = 0; i < len; i++)
    {
        if (arr[i] < 0)
        {
            res += arr[i];
            ++counter;
        }
    }
    return res / static_cast<double>(counter);
}

int sign_changing_sum(int arr[], unsigned len, bool sign_change)
{
    int      res   = 0;
    for (int i     = 0; i < len; i++)
    {
        res += (sign_change ? (i % 2 == 0 ? -arr[i] : arr[i]) : arr[i]);

    }
    return res;
}
