#include <stdio.h>
#include <iostream>

using namespace std;
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int factorialHead(int num, int acc)
{

    if (num == 1)
        return acc;
    acc *= num;
    return factorialHead(num - 1, acc);
}

int sumRec(int num[], int i, int size)
{
    if (i >= size)
    {
        return 0;
    }

    return num[i] + sumRec(num, i + 1, size);
}

int sum(int *array, int size)
{
    return sumRec(array, 0, size);
}

int pow(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    return base * pow(base, exp - 1);
}

int factorialIT(int n)
{
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= (n - i);
    }

    return sum;
}

int sumArrIter(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int expiter(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}

int main(void)
{

    int num = 5;
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        *(array + i) = i;
    }

    cout << factorial(num) << endl;
    cout << sum(array, 5) << endl;
    cout << pow(2, 2) << endl;

    delete[] array;
}