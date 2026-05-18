#include "Finder.h"

int main(void) {
  Finder f1;
  std::chrono::time_point<std::chrono::high_resolution_clock> t1 =
      std::chrono::high_resolution_clock::now();
  std::vector<int> results = f1.findSubstrings("4634554567", "45689");
  std::chrono::time_point<std::chrono::high_resolution_clock> t2 =
      std::chrono::high_resolution_clock::now();
  std::chrono::duration<long long, std::nano> duration =
      static_cast<std::chrono::duration<long long, std::nano>>(t2 - t1);
  for (size_t i = 1; i <= results.size(); i++) {
    std::cout << results[i - 1] << "\n";
  }
  std::cout << "Duration = " << (static_cast<long long>(duration.count()))
            << "ms";
}
