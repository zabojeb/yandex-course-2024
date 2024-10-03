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

  for (int i = 0; i < n - 1; i++) {
    int min_el = i;
    for (int j = i + 1; j < n; j++) {
      if (array[j] < array[min_el]) {
        min_el = j;
      }
    }

    int foo = *&array[min_el];

    *&array[min_el] = *&array[i];
    *&array[i] = foo;
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << ' ';
  }

  return 0;
}