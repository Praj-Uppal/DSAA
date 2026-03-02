#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  string toCheck;
  toCheck.reserve(s2.length());
  size_t found = 0;
  for (size_t i = 0; i < s2.size(); i++) {
    toCheck.push_back(s2[i]);
    found = s1.find(toCheck, found);
    if (found != string::npos) {
      result.push_back(found);
    } else {
      result.resize(s2.size(), -1);
      break;
    }
  }
  return result;
}