#include <stdio.h>

#include <iostream>

#include "recursion.h"

using namespace std;

int main(void) {
  recursion myrecursion;

  cout << myrecursion.gcd(20, 12) << endl;

  cout << myrecursion.reverseString("Hello!") << endl;
  cout << myrecursion.checkPalindrome("HIHI") << endl;
  cout << myrecursion.sumMult(4) << endl;
}
