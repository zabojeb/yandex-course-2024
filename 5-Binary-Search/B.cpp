#include <iostream>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  long long a[n], b[k];
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (long long i = 0; i < k; i++) {
    cin >> b[i];
  }

  for (long long i = 0; i < k; i++) {
    long long l = 0, r = n - 1;

    while (r - l > 1) {
      long long m = (l + r) / 2;

      if (a[m] < b[i]) {
        l = m;
      } else {
        r = m;
      }
    }

    if (b[i] - a[l] <= a[r] - b[i]) {
      cout << a[l] << endl;
    } else {
      cout << a[r] << endl;
    }
  }
}
