#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  unsigned long idx = 0;
  // dream dreamer erase eraser
  reverse(s.begin(), s.end());
  while (idx < s.size()) {
    if (s.substr(idx, 5) == "maerd") {
      idx += 5;
    } else if (s.substr(idx, 7) == "remaerd") {
      idx += 7;
    } else if (s.substr(idx, 6) == "resare") {
      idx += 6;
    } else if (s.substr(idx, 5) == "esare") {
      idx += 5;
    } else {
      break;
    }
  }
  if (idx == s.size()) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
