#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  cin >> k;
  int v = 1;
  for (int i = 0; i < n; i++) {
    if (v <= k) {
      v *= 2;
    } else {
      v += k;
    }
  }
  cout << v << endl;
  return 0;
}
