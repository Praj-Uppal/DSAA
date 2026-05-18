#ifndef MERGESORT_H
#define MERGESORT_H

#include "sort.h"

using namespace std;

class MergeSort : public Sort {
 public:
  vector<int> sort(vector<int> list) {
    vector<int> result = list;
    mergeSort(result, 0, (list.size() - 1));
    return result;
  }

  void mergeSort(vector<int>& list, int start, int end) {
    if (start >= end) {
      return;
    }

    mergeSort(list, start, start + (end - start) / 2);
    mergeSort(list, start + 1 + (end - start) / 2, end);
    size_t p1Tracker = start;
    size_t p1End = start + (end - start) / 2;
    size_t p2Tracker = start + 1 + (end - start) / 2;
    size_t p2End = end;
    size_t currentInd = start;

    while (p1Tracker <= p1End && p2Tracker <= p2End) {
      if (list[p1Tracker] > list[p2Tracker]) {
        list.insert(list.begin() + p1Tracker, list[p2Tracker]);
        p2Tracker++;
        list.erase((list.begin() + p2Tracker));
        currentInd++;
        p1Tracker++;
        p1End++;
      } else {
        currentInd++;
        p1Tracker++;
      }
    }

    return;
  }
};

#endif