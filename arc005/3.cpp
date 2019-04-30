#include <bits/stdc++.h>
using namespace std;

// 500 * 500 * 250 * 499
// 31250000000

struct comp {
  template <typename T> bool operator()(const T &l, const T &r) const {
    if (l.first == r.first) {
      return l.second > r.second;
    } else {
      return l.first < r.first;
    }
  }
};

int main() {
  int h, w;
  cin >> h >> w;
  pair<int, int> s, g;
  set<pair<int, int>, comp> steps;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      switch (c) {
      case '.':
        steps.insert({i, j});
        break;
      case 's':
        s = {i, j};
        steps.insert({i, j});
        break;
      case 'g':
        g = {i, j};
        steps.insert({i, j});
        break;
      }
    }
  }
  map<pair<int, int>, int, comp> costs;
  queue<pair<int, int>> nexts;
  nexts.push(s);
  costs[s] = 0;
  while (!nexts.empty()) {
    pair<int, int> n = nexts.front();
    nexts.pop();
    int cost = costs[n];
    vector<pair<int, int>> offsets = {
        {-1, 0},
        {0, -1},
        {1, 0},
        {0, 1},
    };
    pair<int, int> p;
    for (auto offset : offsets) {
      p = {n.first + offset.first, n.second + offset.second};
      if (p.first > h-1 || p.second > w-1 || p.first < 0 || p.second < 0) {
	continue;
      }
      if (steps.find(p) != steps.end()) {
        if (costs.find(p) == costs.end() || costs[p] > cost) {
          costs[p] = cost;
          nexts.push(p);
        }
      } else {
        if (costs.find(p) == costs.end() || costs[p] > cost + 1) {
          costs[p] = cost + 1;
          nexts.push(p);
        }
      }
    }
  }
  if (costs.find(g) != costs.end() && costs[g] <= 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
