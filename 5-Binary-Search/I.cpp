#include <iostream>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;

  long long l = max(w, h), r = 1LL * max(w, h) * n;

  while (l < r) {
    long long m = (l + r) / 2;
    if ((m / w) * (m / h) >= n) {
      r = m;
    } else {
      l = m + 1;
    }
  }

  cout << l << endl;

  return 0;
}
