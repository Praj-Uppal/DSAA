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

        string valueString = to_string(value);

        string reversed = reverseString(valueString);

        return stoi(reversed);
    }
};
