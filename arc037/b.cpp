#include <bits/stdc++.h>
using namespace std;

struct Point {
  int i;
  unordered_set<int> neighbors;
};

bool pass_around(int start, vector<Point> points, unordered_set<int> *passed) {
  stack<int> will_visit;
  will_visit.push(start);
  int num_of_edges = 0;
  int num_of_directions = 0;
  while (!will_visit.empty()) {
    auto n = will_visit.top();
    passed->insert(n);
    will_visit.pop();
    num_of_edges++;
    num_of_directions += points.at(n).neighbors.size();
    for (auto c : points.at(n).neighbors) {
      if (passed->find(c) != passed->end()) {
        continue;
      }
      will_visit.push(c);
    }
  }
  return (num_of_directions/2+1)==num_of_edges;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<Point> points(n);
  for (int i = 0; i < n; i++) {
    Point p;
    p.i = i;
    points.at(i) = p;
  }
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    points.at(u-1).neighbors.insert(v-1);
    points.at(v-1).neighbors.insert(u-1);
  }
  unordered_set<int> passed;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (passed.find(i) != passed.end()) {
      continue;
    }
    if (pass_around(i, points, &passed)) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
