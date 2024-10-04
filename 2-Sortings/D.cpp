#include <algorithm>
#include <iostream>
#include <map>
#include <vector>


using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> dict;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    dict[x] = y;
  }

  // first i need to sort it by keys, than by values

  return 0;
}