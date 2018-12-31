#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> dir(n);
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    dir.at(i) = d - 1;
  }
  vector<bool> passed(n, false);
  int idx = 0;
  int counter = 0;
  passed.at(0) = true;
  while (idx != 1) {
    idx = dir.at(idx);
    counter++;
    if (passed.at(idx)) {
      cout << -1 << endl;
      return 0;
    } else {
      passed.at(idx) = true;
    }
  }
  cout << counter << endl;
  return 0;
}
