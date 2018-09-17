#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int avg = sum / n;
  for (int i = 0; i < n; i++) {
    int diff = a.at(i) - avg;
    if (diff < 0) {
      cout << -diff << endl;
    } else {
      cout << diff << endl;
    }
  }
  return 0;
}
