#include "Maths.h"

int Maths::Factorial(int input)
{
    if (input == 1)
    {
        return 1;
    }

    return input * Factorial(input - 1);
}

int Maths::SumN(int N)
{

    if (N == 0)
    {
        return 0;
    }

    return N + SumN(N - 1);
}

void truePrintForwards(int n, int accumulator)
{
    if (accumulator == n)
    {
        return;
    }

    accumulator += 1;

    printf("%d ", accumulator);
    return truePrintForwards(n, accumulator);
}

void Maths::printForwards(int n)
{
    truePrintForwards(n, 0);
}

void Maths::printBackwards(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);

    return printBackwards(n - 1);
}

int Maths::power(int base, int exp)
{

    if (exp == 0)
    {
        return 1;
    }

    return base * power(base, exp - 1);
}

int Maths::countDigits(int value)
{
    if (value == 0)
    {
        return 0;
    }

    return 1 + countDigits(value / 10);
}