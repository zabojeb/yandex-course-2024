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
    int foo = array[i + 1];

    int j = i + 1;
    while (j > 0 && array[j - 1] > foo) {
      array[j] = array[j - 1];
      j--;
    }

    array[j] = foo;
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << ' ';
  }

  return 0;
}