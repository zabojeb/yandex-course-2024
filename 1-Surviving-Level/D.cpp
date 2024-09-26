#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;

  cin >> s;

  vector<int> array(26, 0);

  for (int i = 0; i < s.size(); i++) {
    int n = (int) s[i] - 97;

    array[n]++;
  }

  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << " ";
  }
}

