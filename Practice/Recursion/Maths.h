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

    int SumDigits(int number);
    int reverseNumber(int number);

    bool checkPalindrome(int number);
    int multiply(int num1, int num2);

    int fib(int n);
    int climbStairs(int n);
    void generateBinary(int n);
    int makeBinary(int n);
    int convertDecToBinary(int number, int accumulator);
};

#endif