#include "Finder.h"

int main(void) {
  Finder f1;
  std::vector<int> results = f1.findSubstrings("4634554567", "45689");
  for (size_t i = 1; i <= results.size(); i++) {
    std::cout << results[i - 1] << "\n";
  }
}
