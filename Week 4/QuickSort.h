#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "sort.h"

using namespace std;

class QuickSort : public Sort {
 public:
  int partition(vector<int>& list, int start, int end) {
    int pivotIndex = start;
    int pivot = list[end];
    for (int i = start; i < end; i++) {
      if (list[i] <= pivot) {
        if (pivotIndex < i) {
          int temp = list[pivotIndex];
          list[pivotIndex] = list[i];
          list[i] = temp;
        }
        pivotIndex++;
      }
    }
    int temp = list[pivotIndex];
    list[pivotIndex] = list[end];
    list[end] = temp;
    return pivotIndex;
  }

  void Quicksort(vector<int>& list, int start, int end) {
    if ((end - start) < 0) {
      return;
    }

    int pivotIndex = partition(list, start, end);
    Quicksort(list, start, pivotIndex - 1);
    Quicksort(list, pivotIndex + 1, end);

    return;
  }

  vector<int> sort(vector<int> list) override {
    vector<int> result = list;
    Quicksort(result, 0, (result.size()) - 1);
    return result;
  }
};

#endif