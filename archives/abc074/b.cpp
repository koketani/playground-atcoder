#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  cin >> k;
  int d = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x <= k / 2) {
      d += 2 * x;
    } else {
      d += 2 * (k - x);
    }
  }
  cout << d << endl;
  return 0;
}
