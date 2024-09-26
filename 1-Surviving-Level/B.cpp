#include <iostream>

using namespace std;

int main() {
  int a, b;

  if (freopen("divide.in", "r", stdin)) {
    cin >> a;
    cin >> b;
  }

  if (freopen("divide.out", "w", stdout)) {
    cout << a / b << endl;
  }

  return 0;
}
