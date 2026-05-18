#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"

using namespace std;

class InsertionSort : public Sort {
 public:
  vector<int> sort(vector<int> list) override {
    vector<int> result = list;
    insertionSort(result);
    return result;
  };

  void insertionSort(vector<int>& list) {
    for (int i = 1; i < list.size(); i++) {
      int sortInd = i;
      for (int j = i - 1; j >= 0; j--) {
        if (list[sortInd] < list[j]) {
          int temp = list[j];
          list[j] = list[sortInd];
          list[sortInd] = temp;
          sortInd--;
        } else {
          break;
        }
      }
    }
    return;
  }
};

#endif