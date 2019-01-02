#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, s;
  int c = 0;
  cin >> k >> s;
  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k; j++) {
      int x = s - i - j;
      if (0 <= x && x <= k) {
        c++;
      }
    }
  }
  cout << c << endl;
  return 0;
}
