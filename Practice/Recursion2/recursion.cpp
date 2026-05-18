#include "recursion.h"

int recursion::power(int base, int n) {
  if (n <= 0) {
    return 1;
  }

  return base * power(base, n - 1);
}

int recursion::gcd(int a, int b) {
  if (b == 0) {
    return a;
  }

  int newa = b;
  int newb = a % b;

  return gcd(newa, newb);
}

int recursion::sumDigits(int n) {
  if (n == 0) {
    return 0;
  }

  int newnum = n / 10;
  int lastdigit = n % 10;

  return lastdigit + sumDigits(newnum);
}

std::string recursion::reverseString(std::string input) {
  int length = input.length();
  if (length == 0) {
    return "\0";
  }

  char newChar = input[length - 1];
  input.pop_back();
  return newChar + reverseString(input);
}

bool recursion::checkPalindrome(std::string input) {
  if (input == reverseString(input)) {
    return true;
  }
  return false;
}

int recursion::sumMult(int n) {
  if (n == 2) {
    return 2;
  }

  return n * (n - 1) + sumMult(n - 1);
}
