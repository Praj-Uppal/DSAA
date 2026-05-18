

#include <stdio.h>

#include <iostream>
#include <sstream>
#include <vector>

#include "merge.h"
#include "recursiveBinary.h"

using namespace std;

int main(void) {
  string line;
  std::getline(cin, line);

  vector<int> numbers;
  int num;

  istringstream iss(line);

  while (iss >> num) {
    numbers.push_back(num);
  }

  recurisveBinary searcher;
  merge sorter;
  bool result = searcher.search(numbers, 10);
  vector<int> sorted = sorter.sort(numbers);
  if (result) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  for (size_t i = 0; i < sorted.size(); i++) {
    cout << sorted[i] << " ";
  }
}
