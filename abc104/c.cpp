#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, g;
  cin >> d >> g;
  vector<int> p(d);
  vector<int> c(d);
  for (int i = 0; i < d; i++) {
    cin >> p[i];
    cin >> c[i];
  }
  int min_cnt = pow(2, 10);
  for (int i = 0; i < int(pow(2, d)); i++) {
    int sum = 0;
    int cnt = 0;
    for (int j = 0; j < d; j++) {
      if ((i & int(pow(2, j))) == 0) {
        continue;
      };
      sum += ((j + 1) * 100) * p[j] + c[j];
      cnt += p[j];
    }
    // 1. achieve with completion
    if (sum >= g) {
      if (cnt < min_cnt) {
        min_cnt = cnt;
      }
      continue;
    }
    // 2. with additional solve
    for (int j = d - 1; j >= 0; j--) {
      if ((i & int(pow(2, j))) != 0) {
        continue;
      }
      for (int k = 0; k < p[j]; k++) {
        sum += (j + 1) * 100;
        cnt += 1;
        if (sum >= g) {
          break;
        }
      }
      if (sum >= g) {
        if (cnt < min_cnt) {
          min_cnt = cnt;
        }
        break;
      }
    }
  }
  cout << min_cnt << endl;
  return 0;
}
