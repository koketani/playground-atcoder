#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  pair<int, int> s, g;
  unordered_set<int> steps;
  unordered_set<int> passed;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      switch (c) {
      case '.':
	steps.insert(i*w+j);
        break;
      case 's':
        s = {i, j};
	steps.insert(i*w+j);
        break;
      case 'g':
        g = {i, j};
	steps.insert(i*w+j);
        break;
      }
    }
  }
  queue<pair<int, int>> nexts;
  nexts.push(s);
  passed.insert(s.first*w+s.second);
  for (int i = 0; i < 3; i++) {
    queue<pair<int, int>> newq;
    while (!nexts.empty()) {
      pair<int, int> n = nexts.front();
      nexts.pop();
      vector<pair<int, int>> offsets = {
          {-1, 0},
          {0, -1},
          {1, 0},
          {0, 1},
      };
      for (auto offset : offsets) {
        pair<int, int> p = {n.first + offset.first, n.second + offset.second};
        if (p.first > h - 1 || p.second > w - 1 || p.first < 0 ||
            p.second < 0) {
          continue;
        }
        if (p == g) {
          cout << "YES" << endl;
          return 0;
        }
        if (passed.find(p.first*w+p.second) != passed.end()) {
          continue;
        }
        passed.insert(p.first*w+p.second);
        if (steps.find(p.first*w+p.second) != steps.end()) {
          nexts.push(p);
        } else {
          newq.push(p);
        }
      }
    }
    nexts = newq;
  }
  cout << "NO" << endl;
  return 0;
}
