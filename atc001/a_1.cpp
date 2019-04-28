#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  set<pair<int, int>> passed;
  stack<pair<int, int>> nexts;
  map<pair<int, int>, char> points;
  pair<int, int> s, g;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      pair<int, int> idx = make_pair(i, j);
      cin >> points[idx];
      switch (points[idx]) {
      case 's':
        s = idx;
        break;
      case 'g':
        g = idx;
        break;
      default:
        break;
      }
    }
  }
  nexts.push(s);
  while (nexts.size()!=0) {
    auto n = nexts.top();
    nexts.pop();
    passed.insert(n);
    auto idx = make_pair(n.first+1, n.second);
    if (n.first<h-1 && (passed.find(idx) == passed.end()) && points[idx] != '#') {
      nexts.push(idx);
    }
    idx = make_pair(n.first, n.second+1);
    if (n.second<w-1 && (passed.find(idx) == passed.end()) && points[idx] != '#') {
      nexts.push(idx);
    }
    idx = make_pair(n.first-1, n.second);
    if (n.first>0 && (passed.find(idx) == passed.end()) && points[idx] != '#') {
      nexts.push(idx);
    }
    idx = make_pair(n.first, n.second-1);
    if (n.second>0 && (passed.find(idx) == passed.end()) && points[idx] != '#') {
      nexts.push(idx);
    }
  }
  if (passed.find(g) == passed.end()) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
