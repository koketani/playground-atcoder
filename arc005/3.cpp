#include <bits/stdc++.h>
using namespace std;

struct pair_hash {
  size_t operator()(pair<int, int> const &other) const {
    size_t h1 = hash<int>()(other.first);
    size_t h2 = hash<int>()(other.second);
    return h1 ^ h2;
  }
};

int main() {
  int h, w;
  cin >> h >> w;
  pair<int, int> s, g;
  unordered_set<pair<int, int>, pair_hash> steps;
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
  unordered_map<pair<int, int>, int, pair_hash> costs;
  // queue<pair<int, int>> nexts;
  deque<pair<int, int>> nexts;
  nexts.push_front(s);
  costs[s] = 0;
  while (!nexts.empty()) {
    pair<int, int> n = nexts.front();
    nexts.pop_front();
    int cost = costs[n];
    vector<pair<int, int>> offsets = {
        {-1, 0},
        {0, -1},
        {1, 0},
        {0, 1},
    };
    for (auto offset : offsets) {
      pair<int, int> p = {n.first + offset.first, n.second + offset.second};
      if (p.first > h - 1 || p.second > w - 1 || p.first < 0 || p.second < 0) {
        continue;
      }
      int new_cost = cost;
      bool low = false;
      if (steps.find(p) == steps.end()) {
        new_cost++;
        low = true;
      }
      if (new_cost > 2) {
        continue;
      }
      if (costs.find(p) == costs.end() || costs[p] > new_cost) {
        costs[p] = new_cost;
        if (low) {
          nexts.push_back(p);
        } else {
          nexts.push_front(p);
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
