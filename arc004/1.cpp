#include <bits/stdc++.h>
using namespace std;

struct Loc {
  int x;
  int y;
};

double get_len(Loc a, Loc b) {
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
  int n;
  cin >> n;
  vector<Loc> a(n);
  for (int i = 0; i < n; i++) {
    Loc b;
    cin >> b.x >> b.y;
    a[i] = b;
  }
  double max_len = 0.0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      double len = get_len(a[i], a[j]);
      if (len > max_len) {
        max_len = len;
      }
    }
  }
  cout << max_len << endl;
  return 0;
}
