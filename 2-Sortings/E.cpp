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

  int min_el = *min_element(array.begin(), array.end());
  int max_el = *max_element(array.begin(), array.end());

  int rng = max_el - min_el + 1;
  vector<int> count(rng, 0);

  for (int num : array) {
    count[num - min_el]++;
  }

  int idx = 0;
  for (int i = 0; i < rng; i++) {
    while (count[i] > 0) {
      array[idx++] = i + min_el;
      count[i]--;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << ' ';
  }

  return 0;
}
