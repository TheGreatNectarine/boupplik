//
// Created by Nick Marhal on 12/3/17.
//
#include <iostream>
unsigned char invert(const unsigned char b)
{
    unsigned char res = 0;
    for (unsigned char i = 0; i < 8; i++) {
        res = ((b >> i) & 1) << (7-i) | res;
    }
    return res;
}

int main()
{
    if (std::cout << "Hello world" << std::endl) {
        invert(255);
    }
}

