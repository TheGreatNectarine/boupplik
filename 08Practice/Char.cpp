//
// Created by Nick Marhal on 11/8/17.
//

#include "Char.h"

size_t charlen(const char * ps)
{
    size_t len=0;
    while (ps[len++]);
    return len;
}
void assign(char** target, const char* source)
{
    if (*target==source)
        return;
    delete [] *target;
    *target = new char[charlen(source)+1];
    copyon(*target, source);
    return;
}

void copyon(char* const target, const char* const source)
{
    char * t = target;
    const char * s = source;
    while (*t++ = *s++);
    return;
    //for (size_t i=0; i<len; ++i)
    //	target[i]=source[i];
    //target[len]='\0';
}

void clear(char** ps)
{
    delete [] *ps;
    *ps=new char[1];
    *ps[0]='\0';
}
