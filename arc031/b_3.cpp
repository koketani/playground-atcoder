#include <bits/stdc++.h>
using namespace std;

// bool can_be_island(tuple<int, int> start) {
//   unordered_set<tuple<int, int>> passed;
// }

struct Point {
  int x;
  int y;

  bool operator()(const Point &other) const {
    return (x==other.x && y==other.y);
  }
};

int main() {
  const int n = 10;
  // unordered_set<tuple<int, int>> embedded;
  unordered_set<Point> embedded;
  // set<tuple<int, int>> embedded;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if (c == 'o') {
	Point p;
	p.x = i;
	p.y = j;
	embedded.insert(p);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    }
  }
  return 0;
}
