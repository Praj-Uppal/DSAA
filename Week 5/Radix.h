#ifndef RADIX_H
#define RADIX_H

#include "countingSort.h"
#include "sort.h"

using namespace std;

class Radix : public sort {
 public:
  countingSort counter;
  vector<int> Sort(vector<int> list) override {};

  vector<int> radixSort(vector<int> list) {
    vector<int> result = list;
    int max = list[0];
    for (size_t i = 1; i < list.size(); i++) {
      if (max < list[i]) {
        max = list[i];
      }
    }

    int digits = 0;
    while (max > 0) {
      max = max / 10;
      digits++;
    }

    for (int i = 1; i <= digits; i++) {
      result = counter.Counting(result, i);
    }

    return result;
  }
};

#endif