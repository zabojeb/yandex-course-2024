#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> array(n);

  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  // ---

  for (auto i = array.begin(); i != array.end(); ++i) {
    auto j = min_element(i, array.end());
    swap(*i, *j);
  }

  // ---

  for (int i = 0; i < n; i++) {
    cout << array[i] << ' ';
  }

  return 0;
}