#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  long long x;
  vector<long long> stack;

  while (true) {
    cin >> x;

    if (x == 0) {
      stack.push_back(x);
      break;
    } else {
      stack.push_back(x);
    }
  }

  reverse(stack.begin(), stack.end());

  for (int i = 0; i < stack.size(); i++) {
    cout << stack[i] << endl;
  }

  return 0;
}

