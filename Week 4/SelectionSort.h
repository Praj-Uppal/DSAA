#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "sort.h"

using namespace std;

class selectionSort : public Sort {
 public:
  vector<int> sort(vector<int> list) override {
    vector<int> result = list;
    selectionsort(result);
    return result;
  }

  void selectionsort(vector<int>& list) {
    for (int i = 0; i < (list.size() - 1); i++) {
      int minInd = i;
      int min = list[minInd];
      for (int j = i + 1; j < list.size(); j++) {
        if (list[j] < min) {
          minInd = j;
        }
      }
      if (min != i) {
        int temp = list[i];
        list[i] = list[minInd];
        list[minInd] = temp;
      }
    }
    return;
  }
};

#endif