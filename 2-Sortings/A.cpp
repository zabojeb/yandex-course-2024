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

  for (int i = 0; i + 1 < n; i++) {
    for (int j = 0; j + 1 < n - i; j++) {
      if (array[j + 1] < array[j]) {
        swap(array[j], array[j + 1]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << ' ';
  }

  return 0;
}