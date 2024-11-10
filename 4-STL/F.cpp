#include <deque>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  deque<int> q, qr;
  int l = 0, r = 0;
  while (n--) {
    char command;
    cin >> command;

    if (command == '-') {
      cout << q.front() << endl;

      q.pop_front();
      l--;
    } else if (command == '+') {
      int i;
      cin >> i;

      qr.push_back(i);

      r++;
    } else {
      int i;
      cin >> i;

      qr.push_front(i);

      r++;
    }

    if (l < r) {
      q.push_back(qr.front());

      qr.pop_front();

      r--;
      l++;
    }
  }

  return 0;
}
