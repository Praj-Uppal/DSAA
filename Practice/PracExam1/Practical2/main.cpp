#include <chrono>

#include "Finder.cpp"

using namespace std;

int main(void) {
  string s1 = "12231234";
  string s2 = "1234";
  Finder myFinder;
  chrono::time_point<std::chrono::high_resolution_clock> t1 =
      std::chrono::high_resolution_clock::now();
  vector<int> results = myFinder.findSubStrings("4634554567", "45689");
  chrono::time_point<std::chrono::high_resolution_clock> t2 =
      std::chrono::high_resolution_clock::now();

  chrono::nanoseconds duration =
      chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1);

  for (size_t i = 0; i < results.size(); i++) {
    cout << results[i] << "\n";
  }

  cout << "Time Taken: " << duration.count() << "ns\n";
}