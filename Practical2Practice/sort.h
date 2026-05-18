#ifndef SORT_H
#define SORT_H

#include <stdio.h>

#include <iostream>
#include <vector>

using namespace std;

class Sort {
 public:
  virtual vector<int> sort(vector<int> list);
};

#endif