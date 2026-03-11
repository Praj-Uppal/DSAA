#include "Reverser.cpp"

using namespace std;

int main(void)
{

    string myString = "Hello!";

    Reverser r;

    string reversedString = r.reverseString(myString);

    cout << reversedString << "\n";
}