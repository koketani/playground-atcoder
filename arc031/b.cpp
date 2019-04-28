#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x, y;
};

bool can_be_island(vector<vector<char>> a, int area, Point s) {
  vector<vector<bool>> passed(10, vector<bool>(10));
  stack<Point> will_visit;
  will_visit.push(s);
  while (will_visit.size() != 0) {
    Point p = will_visit.top();
    will_visit.pop();
    for (int i = p.x - 1; i < p.x + 2; i++) {
      for (int j = p.y - 1; j < p.y + 2; j++) {
        if (i < 0 || j < 0 || i > 9 || j > 9 ) {
          continue;
        }
        if (abs(p.x - i) + abs(p.y - j) != 1) {
          continue;
        }
        if (passed[i][j]) {
          continue;
        }
        if (a[i][j] == 'x') {
          continue;
        }
        Point new_p = {i, j};
        will_visit.push(new_p);
      }
    }
    passed[p.x][p.y] = true;
  }
  int visited = 0;
  for (int i = 0; i < 10; i++) {
    visited += count(passed[i].begin(), passed[i].end(), true);
  }
  return visited == area;
}

int main() {
  // scan
  int area = 0;
  vector<vector<char>> a(10, vector<char>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'o') {
        area++;
      }
    }
  }
  // supposed that x is o and check reacheability
  bool is_island = false;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (a[i][j] == 'o') {
        continue;
      }
      a[i][j] = 'o';
      Point s{i, j};
      if (can_be_island(a, area + 1, s)) {
        is_island = true;
        goto done;
      }
      a[i][j] = 'x';
    }
  }
done:
  if (is_island) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
