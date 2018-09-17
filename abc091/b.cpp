#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  // vector<string> s(n);
  map<string, int> s{}, t{};
  for (int i = 0; i < n; i++) {
    string p;
    cin >> p;
    s[p]++;
    // s.at(p)++;
  }
  cin >> m;
  // vector<string> t(m);
  for (int i = 0; i < m; i++) {
    string n;
    cin >> n;
    s[n]--;
  }
  int x = 0;
  for (auto itr = s.begin(); itr != s.end(); itr++) {
    if (x < itr->second) {
      x = itr->second;
    }
  }
  cout << x << endl;
  return 0;
}
