#include <bits/stdc++.h>
using namespace std;

int main() {
  int y, n;
  cin >> n;
  cin >> y;
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; i + j < n + 1; j++) {
      int k = n - i - j;
      if (10000 * i + 5000 * j + 1000 * k == y) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1 " << endl;
  return 0;
}
