#include <iostream>
using namespace std;

int main() {
  long long n, a, b, w, h;
  cin >> n >> a >> b >> w >> h;

  long long l = 0, r = min(w, h);

  while (l <= r) {
    long long d = (l + r) / 2;
    if ((w / (a + 2 * d)) * (h / (b + 2 * d)) >= n ||
        (h / (a + 2 * d)) * (w / (b + 2 * d)) >= n) {
      l = d + 1;
    } else {
      r = d - 1;
    }
  }

  cout << r << endl;

  return 0;
}
