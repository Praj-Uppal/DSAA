
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kth_largest(vector<int> values, int k) {
  priority_queue<int> pq;

  for (size_t i = 0; i < values.size(); i++) {
    pq.push(values[i]);
  }

  for (int i = 0; i < k - 1; i++) {
    pq.pop();
  }

  return pq.top();
}

int main(void) {
  vector<int> values = {1, 2, 3, 4, 5};

  cout << kth_largest(values, 1) << endl;
}