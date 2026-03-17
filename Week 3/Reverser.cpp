#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class Reverser
{

public:
    string reverseString(string str)
    {

        if (str.length() < 1)
        {
            return "\0";
        }

        string newStr = str;
        newStr.pop_back();
        return (str[str.length() - 1] + reverseString(newStr));
    }

    int reverseDigit(int value)
    {
        return reverseNumber(value, 0);
    }

    int reverseNumber(int value, int accumulator)
    {
        if (value == 0)
        {
            return accumulator;
        }
        int newDigit = value % 10;
        int newAccumulator = accumulator * 10 + newDigit;
        int newValue = value / 10;

        return reverseNumber(newValue, newAccumulator);
    }
};
