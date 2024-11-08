#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long n, r;
  cin >> n >> r;

  vector<long long> arr(n);
  for (long long i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long count = 0;
  long long j = 0;

  for (long long i = 0; i < n; i++) {
    while (j < n && arr[j] - arr[i] <= r) {
      j++;
    }

    count += n - j;
  }

  cout << count << endl;

  return 0;
}
