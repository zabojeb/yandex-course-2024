#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first > b.first;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> participants(n);
  for (int i = 0; i < n; ++i) {
    int id, score;
    cin >> id >> score;
    participants[i] = make_pair(score, id);
  }

  sort(participants.begin(), participants.end(), compare);

  for (const auto &p : participants) {
    cout << p.second << " " << p.first << "\n";
  }

  return 0;
}
