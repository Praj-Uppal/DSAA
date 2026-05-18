#ifndef RECURSION_H
#define RECURSION_H

#include <stdio.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class recursion {
 public:
  int power(int base, int n);

  int gcd(int a, int b);

  int sumDigits(int num);

  std::string reverseString(std::string input);

  bool checkPalindrome(std::string input);

  int sumMult(int n);

  vector<int> maxSubSeq(vector<int> input);
};

#endif