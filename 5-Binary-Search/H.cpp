#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int l = 1, r = arr[n - 1] + 1;
  while (l + 1 < r) {
    int m = (l + r) / 2;

    int count = 1;
    int last_pos = arr[0];
    for (int i = 1; i < n; i++) {
      if (arr[i] - last_pos >= m) {
        count += 1;
        last_pos = arr[i];
      }
      if (count >= k) {
        break;
      }
    }

    if (count >= k) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << l;

  return 0;
}
