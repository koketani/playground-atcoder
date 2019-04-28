#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x;
  int y;

  bool operator==(const Point &other) const
  {
    return (x==other.x && y==other.y);
  }
};

struct PointHasher {
  size_t operator()(const Point &p) const { return p.x * 10 + p.y; }
};

bool can_be_island(Point start, unordered_set<Point, PointHasher> embedded) {
  embedded.insert(start);
  unordered_set<Point, PointHasher> passed;
  stack<Point> will_visit;
  will_visit.push(start);
  while (!will_visit.empty()) {
    auto n = will_visit.top();
    will_visit.pop();
    passed.insert(n);
    Point p = Point{n.x-1, n.y};
    if (n.x>0 && embedded.find(p)!=embedded.end() && passed.find(p)==passed.end()) {
      will_visit.push(p);
    }
    p = Point{n.x, n.y-1};
    if (n.y>0 && embedded.find(p)!=embedded.end() && passed.find(p)==passed.end()) {
      will_visit.push(p);
    }
    p = Point{n.x+1, n.y};
    if (n.x<9 && embedded.find(p)!=embedded.end() && passed.find(p)==passed.end()) {
      will_visit.push(p);
    }
    p = Point{n.x, n.y+1};
    if (n.y<9 && embedded.find(p)!=embedded.end() && passed.find(p)==passed.end()) {
      will_visit.push(p);
    }
  }
  // cout << " " << passed.size() << endl;
  // cout << " " << embedded.size() << endl;
  // if (start.x==4 && start.y==4) {
  //   for (auto p: passed) {
  //     cout << "  " << p.x << " " << p.y << endl;
  //   }
  // }
  return passed.size() == embedded.size();
}

int main() {
  const int n = 10;
  unordered_set<Point, PointHasher> embedded;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if (c == 'o') {
        embedded.insert(Point{i, j});
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // cout << i << " " << j << endl;
      if (can_be_island(Point{i, j}, embedded)){
	cout << "YES" << endl;
	return 0;
      };
    }
  }
  cout << "NO" << endl;
  return 0;
}
