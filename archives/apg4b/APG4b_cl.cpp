#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  cin >> a;
  for (int i = 1; i <= n; i++) {
    string op;
    int b;
    bool error = false;
    cin >> op >> b;
    if (op == "+") {
      a += b;
    } else if (op == "*") {
      a *= b;
    } else if (op == "-") {
      a -= b;
    } else if (op == "/") {
      if (b == 0) {
        error = true;
      } else {
        a /= b;
      }
    }
    if (error) {
      cout << "error" << endl;
      break;
    } else {
      cout << i << ":" << a << endl;
    }
  }
  return 0;
}
