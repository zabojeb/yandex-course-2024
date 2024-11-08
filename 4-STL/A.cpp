#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  string s;

  cin >> s;

  vector<char> parents;

  for (unsigned int i = 0; i < s.length(); i++) {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
      parents.push_back(s[i]);
    } else if (parents.size() > 0 && i > 0) {
      if (s[i] == ')') {
        if (parents.back() == '(') {
          parents.pop_back();
        } else {
          cout << "no";
          return 0;
        }
      } else if (s[i] == ']') {
        if (parents.back() == '[') {
          parents.pop_back();
        } else {
          cout << "no";
          return 0;
        }
      } else if (s[i] == '}') {
        if (parents.back() == '{') {
          parents.pop_back();
        } else {
          cout << "no";
          return 0;
        }
      }
    } else {
      cout << "no";
      return 0;
    }
  }

  if (parents.size() > 0) {
    cout << "no";
  } else {
    cout << "yes";
  }

  return 0;
}
