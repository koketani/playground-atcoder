#include <bits/stdc++.h>
using namespace std;

struct Point {
  int i;
  int j;

  bool operator==(const Point &other) const {
    return (i == other.i && j == other.j);
  }
  bool operator<(const Point &other) const {
    return (i < other.i || (i==other.i && j < other.j));
  }
};

int main() {
  map<Point, int> passed;
  set<Point> whites;
  int h, w;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if (c == '#') {
        continue;
      }
      whites.insert(Point{i, j});
    }
  }
  queue<Point> nexts;
  Point p = Point{0, 0};
  nexts.push(p);
  passed[p] = 0;
  while (!nexts.empty()) {
    Point n = nexts.front();
    int dis = passed.at(n);
    nexts.pop();
    Point p;
    p = Point{n.i - 1, n.j};
    if (whites.find(p) != whites.end() && passed.find(p) == passed.end()) {
      passed[p] = dis + 1;
      nexts.push(p);
    }
    p = Point{n.i, n.j - 1};
    if (whites.find(p) != whites.end() && passed.find(p) == passed.end()) {
      passed[p] = dis + 1;
      nexts.push(p);
    }
    p = Point{n.i + 1, n.j};
    if (whites.find(p) != whites.end() && passed.find(p) == passed.end()) {
      passed[p] = dis + 1;
      nexts.push(p);
    }
    p = Point{n.i, n.j + 1};
    if (whites.find(p) != whites.end() && passed.find(p) == passed.end()) {
      passed[p] = dis + 1;
      nexts.push(p);
    }
  }
  Point goal = Point{h-1, w-1};
  if (passed.find(goal)!=passed.end()) {
    cout << whites.size() - passed[goal] -1 << endl;
  } else {
    cout << "-1" << endl;
  }
  return 0;
}
