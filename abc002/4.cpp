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
  // vector<Relation> relation(n);
  for (int i = 0; i < m; i++) {
    Relation r;
    cin >> r.x >> r.y;
    relation[i] = r;
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
    // bool debug = false;
    // if (cand.size() == 4 && cand[0] == 4 && cand[1] == 5 && cand[2] == 6 &&
    //     cand[3] == 7) {
    //   debug = true;
    // }
    bool fail = false;
    for (int j = 1; j < int(cand.size()); j++) {
      int a = cand.at(j);
      for (int k = 0; k < j; k++) {
        int b = cand.at(k);
        // if (debug) {cout << a << b << endl;}
        bool in = false;
        for (int l = 0; l < int(relation.size()); l++) {
          Relation r = relation[l];
          // if (debug) {cout << "poge" << r.x << r.y << endl;}
          if (r.x == b && r.y == a) {
            in = true;
            break;
          }
        }
        if (!in) {
          fail = true;
          break;
        }
      }
    }
    if (!fail) {
      ans = max(ans, int(cand.size()));
    }
  }
  cout << ans << endl;
  return 0;
}
