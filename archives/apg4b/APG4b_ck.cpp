#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int x = 1;
  for (int i = 0; (unsigned long)2 * i + 1 < s.size(); i++) {
    char c = s.at(i * 2 + 1);
    if (c == '+') {
      x += 1;
    } else {
      x -= 1;
    }
  }
  cout << x << endl;
  return 0;
}
