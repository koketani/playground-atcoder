#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  int min_time = int(pow(2, 10));
  for (int i = 0; i < int(pow(2, n)); i++) {
    int a = 0;
    int b = 0;
    for (int j = 0; j < n; j++) {
      if ((i & int(pow(2, j))) == 0) {
        a += t[j];
      } else {
        b += t[j];
      }
    }
    if (min_time > max(a, b)) {
      min_time = max(a, b);
    }
  }
  cout << min_time << endl;
  return 0;
}
