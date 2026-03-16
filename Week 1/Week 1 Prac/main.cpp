
// COMP 2017 - Practical 1
//
// I declare this submission is my own work and has not been copied from any other
//source.
// Name: Prajwal Uppal
// a#: A1925661
//






#include <cstdlib>

#include <iostream>

#include <chrono>
#include <vector>

int main(void) {
  std::srand(10);
  int n;
  std::cin >> n;
  int* v = new int[n];
  for (int i = 0; i < n; i++)
    v[i] = i;

  int sum = 0;
  std::chrono::time_point<std::chrono::high_resolution_clock> t1 =
      std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 1000; i++) {
    sum += v[rand() % n];
  }
  std::chrono::time_point<std::chrono::high_resolution_clock> t2 =
      std::chrono::high_resolution_clock::now();
  std::chrono::nanoseconds duration =
      std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1);
  long double timeAverage =
      ((static_cast<long double>(duration.count()))) / 1000000.0;

  std::cout << timeAverage;
  delete[] v;
}
