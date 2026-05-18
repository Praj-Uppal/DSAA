#include "BigNumCalc.h"

using namespace std;

list<int> BigNumCalc::buildBigNum(string numString) {
  list<int> result;
  for (char c : numString) {
    if (isdigit(c)) {
      result.push_back(c - '0');
    }
  }

  while (result.front() == 0 && !result.empty()) {
    result.pop_front();
  }

  if (result.empty()) {
    result.push_back(0);
  }

  return result;
}

list<int> BigNumCalc::add(list<int> num1, list<int> num2) {
  list<int> result;
  int carry = 0;
  int digitSum = 0;
  int digit = 0;
  while (!num1.empty() && !num2.empty()) {
    digitSum = num1.back() + num2.back() + carry;
    digit = digitSum % 10;
    carry = digitSum / 10;
    result.push_front(digit);
    num1.pop_back();
    num2.pop_back();
  }

  while (!num1.empty()) {
    digitSum = num1.back() + carry;
    digit = digitSum % 10;
    carry = digitSum / 10;
    result.push_front(digit);
    num1.pop_back();
  }
  while (!num2.empty()) {
    digitSum = num2.back() + carry;
    digit = digitSum % 10;
    carry = digitSum / 10;
    result.push_front(digit);
    num2.pop_back();
  }

  if (carry != 0) {
    result.push_front(carry);
  }

  while (result.front() == 0 && !result.empty()) {
    result.pop_front();
  }

  return result;
}

list<int> BigNumCalc::sub(list<int> num1, list<int> num2) {
  list<int> result;
  int borrow = 0;

  while (!num1.empty() || !num2.empty()) {
    int d1 = 0;
    int d2 = 0;

    if (!num1.empty()) {
      d1 = num1.back();
      num1.pop_back();
    }

    if (!num2.empty()) {
      d2 = num2.back();
      num2.pop_back();
    }

    int diff = d1 - (d2 + borrow);

    if (diff < 0) {
      diff = diff % 10;
      borrow = 1;
    } else {
      borrow = 0;
    }

    result.push_front(diff);
  }

  if (borrow)

    while (!result.empty() && result.front() == 0) {
      result.pop_front();
    }

  if (result.empty()) {
    result.push_back(0);
  }

  return result;
}

list<int> BigNumCalc::mul(list<int> num1, list<int> num2) {
  // Num 2 only 1 digit long.
  list<int> result;

  // Remove leading zeroes from  num1;
  while (!num1.empty() && num1.front() == 0) {
    num1.pop_front();
  }

  if (num1.empty() || num2.empty() || num2.front() == 0) {
    result.push_back(0);
    return;
  }

  int carry = 0;
  int mult = num2.front();

  while (!num1.empty()) {
    int d1 = num1.back();
    num1.pop_back();
    int prod = d1 * mult + carry;
    carry = prod / 10;
    result.push_front(prod % 10);
  }

  if (carry != 0) {
    result.push_front(carry);
  }

  return result;
}