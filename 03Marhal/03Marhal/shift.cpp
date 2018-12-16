//
// Created by Nick Marhal on 10/4/17.
//

unsigned int shift(unsigned int what, unsigned int amount)
{
    return (what << (sizeof(what) * 8) - amount) | what >> amount;
}