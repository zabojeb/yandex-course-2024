#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1;
  cin >> s1;

  string s2;
  cin >> s2;

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1 == s2) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
