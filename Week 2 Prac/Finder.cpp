#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

  string toCheck;
  toCheck.reserve(s2.size());

  for (size_t i = 1; i <= s2.size(); i++) {
    toCheck.push_back(s2[i - 1]);
    size_t found = s1.find(toCheck, 0);
    if (found != string::npos) {
      result.push_back(found);
    } else {
      for (size_t j = s2.size(); j >= i; j--) {
        result.push_back(-1);
      }
      break;
    }
  }
  return result;
}
