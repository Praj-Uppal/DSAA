#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

using namespace std;

class merge : public Sort {
 public:
  vector<int> sort(vector<int> list) override {
    return mergeSort(list, 0, list.size() - 1);
  }

  vector<int> mergeSort(vector<int> list, int start, int end) {
    if (start >= end) {
      return {list[start]};
    }

    int mid = start + (end - start) / 2;

    vector<int> part1 = mergeSort(list, start, mid);
    vector<int> part2 = mergeSort(list, mid + 1, end);

    vector<int> merged;
    int p1Tracker = 0, p2Tracker = 0;
    while (p1Tracker < part1.size() && p2Tracker < part2.size()) {
      if (part1[p1Tracker] <= part2[p2Tracker]) {
        merged.push_back(part1[p1Tracker]);
        p1Tracker++;
      } else {
        merged.push_back(part2[p2Tracker]);
        p2Tracker++;
      }
    }

    while (p1Tracker < part1.size()) merged.push_back(part1[p1Tracker++]);
    while (p2Tracker < part2.size()) merged.push_back(part2[p2Tracker++]);

    return merged;
  }

  void mergesortInplace(vector<int>& list, int start, int end) {
    if (start >= end) {
      return;
    }

    int mid = start + (end - start) / 2;
    mergesortInplace(list, start, mid);
    mergesortInplace(list, mid + 1, end);

    int p1Tracker, p2Tracker, p1End, p2End;
    p1Tracker = start;
    p1End = mid;
    p2Tracker = mid + 1;
    p2End = end;

    while (p1Tracker <= p1End && p2Tracker <= p2End) {
      if (list[p1Tracker] <= list[p2Tracker]) {
        p1Tracker++;
      } else {
        list.insert(list.begin() + p1Tracker, list[p2Tracker]);
        p1Tracker++;
        p1End++;
        p2Tracker++;
        list.erase(list.begin() + p2Tracker);
      }
    }

    return;
  }
};

#endif