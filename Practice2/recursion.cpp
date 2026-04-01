#include "recursion.h"

using namespace std;

int recursion::ways(int n)
{

    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 2;
    }

    return ways(n - 1) + ways(n - 2);
}

void truePrintBinary(string n, int len)
{

    if (n.length() == len)
    {
        cout << n << endl;
        return;
    }

    truePrintBinary(n + "1", len);
    truePrintBinary(n + "0", len);
}

void recursion::printBinary(int n)
{

    if (n == 0)
    {
        return;
    }

    truePrintBinary("", n);
}

void printSubsets(string original, string input)
{

    if (input.length() == (original.length() - 1))
    {
        cout << input << endl;
        return;
    }

    for (size_t i = 0; i < original.size(); i++)
    {
        cout << input + original[i] << endl;
    }

    for (size_t i = 0; i < original.size(); i++)
    {
        printSubsets(original, input + original[i]);
    }

    cout << original << endl;
}