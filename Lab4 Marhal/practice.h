//
// Created by Nick Marhal on 10/11/17.
//
//TODO:
//exch, looped shift to the left, count set_bits in a unsigned int
#ifndef LAB4_PRACTICE_H
#define LAB4_PRACTICE_H

unsigned int value(unsigned int word, unsigned int pos, bool bit);
unsigned int exch_bits(unsigned int word, unsigned int pos0, unsigned int pos1);
unsigned int exch_bytes(unsigned int word, unsigned int pos0, unsigned int pos1);
unsigned int set_bits(unsigned int in);
unsigned int zero_bits(unsigned int in);
float left2right(unsigned int length);
float right2left(unsigned int length);

#endif //LAB4_PRACTICE_H
