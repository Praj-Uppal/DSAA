#include "Reverser.cpp"

using namespace std;

int main(void)
{

    string myString = "Hello!";
    int value = 1234567;

    Reverser r;

    string reversedString = r.reverseString(myString);
    int reversedValue = r.reverseDigit(value);

    cout << reversedString << "\n";
    cout << reversedValue << "\n";
}