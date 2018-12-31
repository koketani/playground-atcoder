#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end(), greater<int>());
  int sum_a = 0;
  int sum_b = 0;
  for (int i = 0; i < n; i += 2) {
    sum_a += a.at(i);
  }
  for (int i = 1; i < n; i += 2) {
    sum_b += a.at(i);
  }
  cout << abs(sum_a - sum_b) << endl;
  return 0;
}
