#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  int avg = accumulate(a.begin(), a.end(), 0) / a.size();
  for (int i = 0; i < n; i++) {
    int diff = a.at(i) - avg;
    cout << abs(diff) << endl;
  }
  return 0;
}
