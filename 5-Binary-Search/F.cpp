#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  vector<long long> wires(n);
  for (long long i = 0; i < n; i++) {
    cin >> wires[i];
  }

  long long l = 1;
  long long r = *max_element(wires.begin(), wires.end());

  while (l <= r) {
    long long m = (l + r) / 2;

    long long sum = 0;
    for (long long i = 0; i < n; i++) {
      sum += wires[i] / m;
    }

    if (sum >= k) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  cout << r;
}
