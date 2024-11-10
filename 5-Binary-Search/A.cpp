#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;

  vector<long long> arr;
  for (long long i = 0; i < n; i++) {
    long long a;
    cin >> a;
    arr.push_back(a);
  }

  sort(arr.begin(), arr.end());

  for (long long i = 0; i < q; i++) {
    int x;
    cin >> x;

    long long l = 0;
    long long r = n;
    while (l + 1 < r) {
      long long m = (l + r) / 2;
      if (arr[m] > x) {
        r = m;
      } else {
        l = m;
      }
    }

    if (arr[l] == x) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
