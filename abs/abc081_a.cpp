#include <bits/stdc++.h>
using namespace std;

int main() {
  string s(3, '0');
  int x = 0;
  cin >> s;
  for (auto y : s) {
    if (y == '1') {
      x++;
    }
  }
  cout << x << endl;
  return 0;
}
