#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> ss(n, "0");
  vector<int> a(n, 0);
  int tp = 0;
  int xp = 0;
  int yp = 0;
  for (int i = 0; i < n; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    int ti = abs(t - tp);
    int xi = abs(x - xp);
    int yi = abs(y - yp);
    if ((xi + yi <= ti) and ((ti - xi - yi) % 2 == 0)) {
      continue;
    }
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
