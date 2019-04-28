#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x;
  int y;

  bool operator<(const Point &other) const {
    return (x < other.x || (x == other.x && y < other.y));
  }
};

// bool operator==(const Point &lhs, const Point &rhs) {
//   return (lhs.x == rhs.x && lhs.y == rhs.y);
// }

int main() {
  int r, c;
  cin >> r >> c;
  Point s, g;
  // cin >> s.y >> s.x;
  // cin >> g.y >> g.x;
  cin >> s.x >> s.y;
  cin >> g.x >> g.y;
  map<Point, int> points;
  set<Point> passed;
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      char ch;
      cin >> ch;
      if (ch == '.') {
        // points.at(Point{i, j}) = 0;
        points[Point{i, j}] = 0;
      }
    }
  }
  queue<Point> nexts;
  nexts.push(s);
  points.at(s) = 0;
  passed.insert(s);
  while (!nexts.empty()) {
    auto n = nexts.front();
    nexts.pop();
    auto p = Point{n.x - 1, n.y};
    if (points.find(p) != points.end() && passed.find(p) == passed.end()) {
      points.at(p) = points.at(n) + 1;
      nexts.push(p);
      passed.insert(p);
    }
    p = Point{n.x, n.y - 1};
    if (points.find(p) != points.end() && passed.find(p) == passed.end()) {
      points.at(p) = points.at(n) + 1;
      nexts.push(p);
      passed.insert(p);
    }
    p = Point{n.x + 1, n.y};
    if (points.find(p) != points.end() && passed.find(p) == passed.end()) {
      points.at(p) = points.at(n) + 1;
      nexts.push(p);
      passed.insert(p);
    }
    p = Point{n.x, n.y + 1};
    if (points.find(p) != points.end() && passed.find(p) == passed.end()) {
      points.at(p) = points.at(n) + 1;
      nexts.push(p);
      passed.insert(p);
    }
  }
  cout << points.at(g) << endl;
  return 0;
}
