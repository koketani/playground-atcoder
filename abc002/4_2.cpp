#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> a;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a.insert(make_pair(x, y));
  }
  int c = 0;
  for (int i = 0; i < int(pow(2, n)); i++) {
    bitset<12> b(i);
    int num_of_ones = b.count();
    if ((num_of_ones * (num_of_ones - 1) / 2) > int(a.size())) {
      continue;
    }
    if (c >= num_of_ones) {
      continue;
    }
    // cout << "i " << i << endl;
    bool ok = true;
    for (int x = 1; x < n; x++) {
      for (int y = x + 1; y < n + 1; y++) {
        if ((int(pow(2, x - 1)) & i) == int(pow(2, x - 1)) &&
            (int(pow(2, y - 1)) & i) == int(pow(2, y - 1))) {
          // cout << x << " " << y << endl;
          bool exists = (a.find(make_pair(x, y)) != a.end());
          if (!exists) {
            ok = false;
            goto goal;
          }
        }
      }
    }
  goal:
    if (ok) {
      // cout << num_of_ones << endl;
      c = num_of_ones;
    }
  }
  cout << c << endl;
  return 0;
}
