#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  long sum = 0;
  for (int i = 0; i < pow(2, s.size() - 1); i++) {
    long x = 0;
    long y = s.at(0) - '0';
    for (int j = 0; j < int(s.size()) - 1; j++) {
      int c = s.at(j+1) - '0';
      bool brk = bool((i & int(pow(2, j))) == 0);
      if (brk) {
        x += y;
        y = c;
      } else {
        y = y * 10 + c;
      }
    }
    x += y;
    sum += x;
  }
  cout << sum << endl;
  return 0;
}
