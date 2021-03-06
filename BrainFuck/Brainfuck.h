//    void brace_close()

// Created by Nick Marhal on 12/4/17.
//

#ifndef BRAINFUCK_BRAINFUCK_H
#define BRAINFUCK_BRAINFUCK_H

#include <iostream>
/**
Brainfuck is an esoteric programming language created in 1993 by Urban Müller,
and notable for its extreme minimalism.

The language consists of only eight simple commands and an instruction pointer.
While it is fully Turing-complete, it is not intended for practical use,
but to challenge and amuse programmers.
Brainfuck simply requires one to break commands into microscopic steps.

The language's name is a reference to the slang term brainfuck,
which refers to things so complicated or unusual that they exceed the limits of one's understanding.

-from Wiki
 */

/**
 * Following code implements the BrainFuck interpreter
 */
void eval(const char code[]);

#endif //BRAINFUCK_BRAINFUCK_H
