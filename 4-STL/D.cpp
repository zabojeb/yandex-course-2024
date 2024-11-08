#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(const vector<int> &heights) {
  int maxArea = 0;
  stack<int> s;
  int n = heights.size();

  for (int i = 0; i <= n; ++i) {
    int h = (i == n) ? 0 : heights[i];
    while (!s.empty() && h < heights[s.top()]) {
      int height = heights[s.top()];
      s.pop();
      int width = s.empty() ? i : i - s.top() - 1;
      maxArea = max(maxArea, height * width);
    }
    s.push(i);
  }
  return maxArea;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> grid(N, vector<int>(M));

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      cin >> grid[i][j];
    }
  }

  vector<int> heights(M, 0);
  int maxWhiteArea = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      if (grid[i][j] == 0) {
        heights[j] += 1;
      } else {
        heights[j] = 0;
      }
    }

    maxWhiteArea = max(maxWhiteArea, largestRectangleArea(heights));
  }

  cout << maxWhiteArea << endl;

  return 0;
}
