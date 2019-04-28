#include <bits/stdc++.h>
using namespace std;

struct Relation {
  int x;
  int y;
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<Relation> relation(n * (n - 1));
  for (int i = 0; i < m; i++) {
    Relation r;
    cin >> r.x >> r.y;
    relation.at(i) = r;
  }
  int ans = 1;
  for (int i = 0; i < int(pow(2, n)); i++) {
    vector<int> cand;
    for (int j = 0; j < n; j++) {
      if ((i & int(pow(2, j))) == 0) {
        cand.push_back(j + 1);
      }
    }
    if (cand.size() == 1) {
      continue;
    }
    bool non_group = false;
    for (int j = 1; j < int(cand.size()); j++) {
      int a = cand.at(j);
      for (int k = 0; k < j; k++) {
        int b = cand.at(k);
        bool in_group = false;
        for (int l = 0; l < m; l++) {
          Relation r = relation[l];
          if (r.x == b && r.y == a) {
            in_group = true;
            break;
          }
        }
        if (!in_group) {
          non_group = true;
          break;
        }
      }
    }
    if (!non_group) {
      ans = max(ans, int(cand.size()));
    }
  }
  cout << ans << endl;
  return 0;
}
