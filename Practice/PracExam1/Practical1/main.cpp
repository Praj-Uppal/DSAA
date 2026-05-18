#include <stdio.h>

#include <chrono>
#include <iostream>
#include <string>
#include <vector>

int main(void) {
  srand(time(NULL));
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  std::cout << "\n";

  // std::vector<int> v(n);
  int* v = new int[n];

  for (int i = 0; i < n; i++) {
    v[i] = i;
  }

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

  std::cout << "Time Taken: " << ((duration.count()) / 1000.0) / 1000.0
            << " us\n";
}