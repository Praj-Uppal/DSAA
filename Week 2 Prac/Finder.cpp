#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  result.reserve(s2.size());
  string toCheck;
  toCheck.reserve(s2.length());
  size_t found = 0;
  for (size_t i = 0; i < s2.size(); i++) {
    toCheck.push_back(s2[i]);
    found = s1.find(toCheck, found);
    if (found != string::npos) {
      result.push_back(found);
    } else {
      for (size_t j = i; j < s2.size(); j++) {
        result.push_back(-1);
      }
      break;
    }
  }
  return result;
}