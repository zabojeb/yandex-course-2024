#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long max_sum = -1e9 - 1;
  long long sum = 0;
  int start = 0, end = 0, temp_start = 0;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;

    if (sum + x < x) {
      sum = x;
      temp_start = i;
    } else {
      sum += x;
    }

    if (sum > max_sum) {
      max_sum = sum;
      start = temp_start;
      end = i;
    }
  }

  cout << start + 1 << " " << end + 1 << " " << max_sum << endl;

  return 0;
}
