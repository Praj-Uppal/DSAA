#include <chrono>
#include <sstream>

#include "Radix.h"
#include "countingSort.h"
#include "sort.h"

using namespace std;

int main(void) {
  string line;
  vector<int> myVector;
  if (!getline(cin, line)) {
    return 0;
  }

  stringstream ss(line);
  string token;

  while (std::getline(ss, token, ',')) {
    int val = std::stoi(token);
    if (val < 0) {
      return 0;
    }
    myVector.push_back(val);
  }

  Radix myradix;

  chrono::high_resolution_clock::time_point t1 =
      chrono::high_resolution_clock::now();
  vector<int> sorted = myradix.radixSort(myVector);

  chrono::high_resolution_clock::time_point t2 =
      chrono::high_resolution_clock::now();

  chrono::nanoseconds duration =
      chrono::duration_cast<chrono::nanoseconds>(t2 - t1);

  for (int i = 0; i < sorted.size(); i++) {
  }

  bool first = true;

  cout << "Time Taken To Sort: " << (duration.count() / 1000.0) << " ms\n";
}