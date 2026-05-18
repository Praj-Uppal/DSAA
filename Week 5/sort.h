#ifndef SORT_H
#define SORT_H

#include <stdio.h>

#include <iostream>
#include <vector>

using namespace std;

class sort {
 public:
  virtual vector<int> Sort(vector<int> list) = 0;
};

#endif