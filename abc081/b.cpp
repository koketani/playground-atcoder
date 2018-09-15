#include <bits/stdc++.h>
using namespace std;

// 10^9
// 10^3 < 2^10
// 10^3 < 2^30

int log2(int x, int n) {
  int y = 1;
  for (int i = 1; i <= n; i++) {
    y *= 2;
    if (x % y != 0) {
      return i - 1;
    }
  }
  return n;
}

int main() {
  int n;
  cin >> n;
  int y = 30;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    int yy = log2(a, y);
    if (yy < y) {
      y = yy;
    }
  }
  cout << y << endl;
  return 0;
}
