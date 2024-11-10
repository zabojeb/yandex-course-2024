#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double C;
  cin >> C;

  double l = 0.0, r = C;

  while (r - l > 1e-8) {
    double m = (l + r) / 2.0;

    if (m * m + sqrt(m) < C) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << fixed << setprecision(6) << (l + r) / 2.0;

  return 0;
}
