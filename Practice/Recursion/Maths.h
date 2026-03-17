#ifndef MATHS_H
#define MATHS_H

#include <stdio.h>
#include <iostream>

class Maths
{
public:
    int Factorial(int input);
    int SumN(int N);

    void printForwards(int n);
    void printBackwards(int n);

    int power(int base, int exp);

    int countDigits(int value);
};

#endif