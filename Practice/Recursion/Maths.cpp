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

int Maths::SumDigits(int number)
{
    if (number == 0)
    {
        return 0;
    }

    return number % 10 + SumDigits(number / 10);
}

int trueReverseNumber(int number, int accumulator)
{
    if (number == 0)
    {
        return accumulator;
    }

    int lastDigit = number % 10;
    int newAccumulator = accumulator * 10 + lastDigit;
    int newValue = number / 10;
    return trueReverseNumber(newValue, newAccumulator);
}

int Maths::reverseNumber(int number)
{
    return trueReverseNumber(number, 0);
}

bool Maths::checkPalindrome(int number)
{
    int reversed = reverseNumber(number);
    if (reversed == number)
        return true;
    return false;
}

int Maths::multiply(int num1, int num2)
{
    if (num2 == 0)
    {
        return 0;
    }

    return num1 + multiply(num1, num2 - 1);
}

int Maths::fib(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
};

int Maths::climbStairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n <= 0)
    {
        return 0;
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int Maths::makeBinary(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return 10 * makeBinary(n - 1) + 1;
}

void printBinary(int number)
{
    if (number < 0)
        return;
    printf("%u \n", number);
    return printBinary(number - 1);
}

int Maths::convertDecToBinary(int number, int accumulator)
{
    if (number == 0)
    {
        return accumulator;
    }

    int newAccumulator = accumulator * 10 + number % 2;
    int newValue = number / 2;
    return convertDecToBinary(newValue, newAccumulator);
}

void Maths::generateBinary(int n)
{
    int number = power(2, n) - 1;

    printBinary(number);
}
