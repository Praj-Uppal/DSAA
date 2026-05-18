#include <stdio.h>

#include <chrono>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> subStringMatching(string s1, string s2) {
  vector<int> results;
  for (size_t i = 0; i < s1.size(); i++) {
    for (size_t j = 0; j < s2.size(); j++) {
      if (s1[i + j] != s2[j]) {
        break;
      } else if (j == (s2.size() - 1)) {
        results.push_back(i);
      } else if ((s1.size() - (i + 1)) < s2.size()) {
        return results;
      }
    }
  }
  return results;
}

int nonRepeatingRecursion(string s1, size_t k, size_t index,
                          size_t accumulator) {
  if (accumulator == k) {
    return 1;
  }

  for (size_t j = 1; j <= (k - accumulator); j++) {
    if (s1[index + j] == s1[index]) {
      break;
    }
    if (j == ((k - accumulator))) {
      ++index;
      ++accumulator;
      return nonRepeatingRecursion(s1, k, index, accumulator);
    }
  }
  return -1;
}

int nonRepeating(string s1, size_t k) {
  for (size_t i = 0; i < s1.size(); i++) {
    if (s1.size() - i < k) {
      break;
    }
    int result = nonRepeatingRecursion(s1, k, i, 1);
    if (result == 1) {
      return i;
    }
  }
  return -1;
}

vector<string> subStrings(string s1) {
  vector<string> results;
  size_t len = s1.size();
  results.reserve((len - 1));
  for (int i = 1; i < (len - 1); i++) {
    string substring;
    for (int j = 0; j < i; j++) {
      substring += s1[j];
    }
    substring += '\0';
    results.push_back(substring);
  }
  return results;
}

vector<string> subStringsRecursion(string s1, size_t len) {}

int main(void) {
  string s1 = "Hello, Hell!";
  string s2 = "Hell";
  chrono::time_point<chrono::high_resolution_clock> t1 =
      chrono::high_resolution_clock::now();
  vector<int> results = subStringMatching(s1, s2);
  chrono::time_point<chrono::high_resolution_clock> t2 =
      chrono::high_resolution_clock::now();

  chrono::nanoseconds duration =
      chrono::duration_cast<chrono::nanoseconds>(t2 - t1);

  for (size_t i = 0; i < results.size(); i++) {
    cout << results[i] << "\n";
  }

  cout << duration.count() << "ns\n";

  chrono::time_point<chrono::high_resolution_clock> t3 =
      chrono::high_resolution_clock::now();
  int index = nonRepeating(s1, 5);
  chrono::time_point<chrono::high_resolution_clock> t4 =
      chrono::high_resolution_clock::now();
  chrono::nanoseconds duration2 =
      chrono::duration_cast<chrono::nanoseconds>(t4 - t3);
  cout << index << "\n";
  cout << duration2.count() << "ns\n";

  vector<string> results2 = subStrings(s2);

  for (size_t i = 0; i < results2.size(); i++) {
    cout << results2[i] << "\n";
  }
}