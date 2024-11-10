#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long x;
  cin >> x;

  vector<long long> nums;
  long long k = 1, j = 1;
  while (k < x + 2 && j < x + 2) {
    long long a = k * k;
    long long b = j * j * j;

    if (a == b) {
      nums.push_back(a);
      k += 1;
      j += 1;
    } else if (a < b) {
      nums.push_back(a);
      k += 1;
    } else {
      nums.push_back(b);
      j += 1;
    }
  }

  cout << nums[x - 1];
}
