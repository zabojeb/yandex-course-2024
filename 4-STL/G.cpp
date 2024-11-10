#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
  int data[100];
  int head;
  int tail;
  int count;

public:
  Queue() : head(0), tail(0), count(0) {}

  void push(int n) {
    data[tail] = n;
    tail = (tail + 1) % 100;
    count++;
    cout << "ok" << endl;
  }

  void pop() {
    if (count == 0)
      return;
    cout << data[head] << endl;
    head = (head + 1) % 100;
    count--;
  }

  void front() const {
    if (count == 0)
      return;
    cout << data[head] << endl;
  }

  void size() const { cout << count << endl; }

  void clear() {
    head = 0;
    tail = 0;
    count = 0;
    cout << "ok" << endl;
  }
};

int main() {
  Queue q;
  string command;

  while (cin >> command) {
    if (command == "push") {
      int n;
      cin >> n;
      q.push(n);
    } else if (command == "pop") {
      q.pop();
    } else if (command == "front") {
      q.front();
    } else if (command == "size") {
      q.size();
    } else if (command == "clear") {
      q.clear();
    } else if (command == "exit") {
      cout << "bye" << endl;
      break;
    }
  }

  return 0;
}
