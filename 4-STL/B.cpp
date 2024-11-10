#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<int> s;
  string token;

  while (cin >> token) {
    if (token == "+" || token == "-" || token == "*") {
      int b = s.top();
      s.pop();
      int a = s.top();
      s.pop();

      if (token == "+") {
        s.push(a + b);
      } else if (token == "-") {
        s.push(a - b);
      } else if (token == "*") {
        s.push(a * b);
      }
    } else {
      s.push(stoi(token));
    }
  }
  cout << s.top() << endl;

  return 0;
}
