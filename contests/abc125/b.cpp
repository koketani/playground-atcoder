#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> c(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> v.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
  }
  int sum=0;
  for (int i = 0; i < n; i++) {
    if (v.at(i) > c.at(i)) {
      sum += v.at(i) - c.at(i);
    }
  }
  cout << sum << endl;
  return 0;
}
