#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include <math.h>

#include "sort.h"

using namespace std;

int myPow(int x, int y) {
  int result = static_cast<int>(pow(x, y));
  return result;
}

class countingSort : public sort {
 public:
  vector<int> Sort(vector<int> list) override {};

  vector<int> sortingCount(vector<int> list) {
    int max = list[0];

    for (size_t i = 0; i < list.size(); i++) {
      if (max < list[i]) {
        max = list[i];
      }
    }

    vector<int> count;
    count.resize(max + 1, 0);

    for (size_t i = 0; i < list.size(); i++) {
      count[list[i]]++;
    }

    int cumul = 0;
    for (size_t i = 0; i < (max + 1); i++) {
      cumul += count[i];
      count[i] = cumul;
    }

    vector<int> result;
    result.resize(list.size());
    for (int i = (list.size() - 1); i >= 0; i--) {
      result[count[list[i]] - 1] = list[i];
    }

    return result;
  }

  vector<int> Counting(vector<int> list, int digit) {
    vector<int> countArray;
    for (size_t i = 0; i < 10; i++) {
      int n = 0;
      for (size_t j = 0; j < list.size(); j++) {
        if (((list[j] / myPow(10, digit - 1)) % (10)) == static_cast<int>(i)) {
          n++;
        }
      }
      countArray.push_back(n);
    }

    int cumul = 0;
    for (int i = 0; i < 10; i++) {
      cumul += countArray[i];
      countArray[i] = cumul;
    }

    vector<int> resultArray;
    resultArray.resize(list.size());

    for (int i = (list.size() - 1); i >= 0; i--) {
      resultArray[countArray[(list[i] / myPow(10, digit - 1)) % (10)] - 1] =
          list[i];
      countArray[(list[i] / myPow(10, digit - 1)) % (10)]--;
    }

    return resultArray;
  }
};
#endif