#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double a;
  cin >> a;

  double l = 0.0, r = 1.6;
  double m;

  while (r - l > 1e-9) {
    m = (l + r) / 2.0;
    double value = cos(m) - a * m;

    if (fabs(value) <= 1e-6) {
      break;
    }

    if (value > 0) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << fixed << setprecision(12) << m << endl;
  return 0;
}
