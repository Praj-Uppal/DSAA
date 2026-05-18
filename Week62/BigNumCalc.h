#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <list>
#include <string>

using namespace std;
class BigNumCalc {
 private:
 public:
  std::list<int> buildBigNum(std::string numString);
  list<int> add(list<int> num1, list<int> num2);
  list<int> sub(list<int> num1, list<int> num2);
  list<int> mul(list<int> num1, list<int> num2);
};

#endif