#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> LPS(s2.size(), 0);
  LPS[0] = 0;
  size_t j = 0;
  for (size_t i = 1; i < s2.length();) {
    if (s2[i] == s2[j]) {
      j++;
      LPS[i++] = j;
    } else if (j != 0) {
      j = LPS[j - 1];
    } else {
      LPS[i++] = 0;
    }
  }

  vector<int> result(s2.length(), -1);
  size_t i = 0;
  j = 0;
  while (i < s1.length()) {
    if (s1[i] == s2[j]) {
      i++;
      j++;

      if (result[j - 1] == -1) {
        result[j - 1] = static_cast<int>(i - j);
      }

      if (j == s2.size()) {
        j = LPS[j - 1];
        break;
      }
    } else {
      if (j != 0) {
        j = LPS[j - 1];
      } else {
        i++;
      }
    }
  }
  return result;
}
