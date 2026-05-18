#ifndef RECURSIVE_BINARY
#define RECURSIVE_BINARY

#include "merge.h"

using namespace std;

class recurisveBinary {
 private:
  merge sorter;

 public:
  bool search(vector<int> list, int target) {
    sorter.mergesortInplace(list, 0, list.size() - 1);
    return recursiveSearch(list, target, 0, list.size() - 1);
  }

  bool recursiveSearch(vector<int>& list, int target, int start, int end) {
    if (start >= end) {
      if (list[start] == target) {
        return true;
      }
      return false;
    }

    int mid = start + (end - start) / 2;
    if (target <= list[mid]) {
      return recursiveSearch(list, target, start, mid);
    } else {
      return recursiveSearch(list, target, mid + 1, end);
    }
  }
};

#endif