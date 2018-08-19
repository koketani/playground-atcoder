#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if ((a + b) / 2 == (a + b + 1) / 2) {
    cout << (a + b) / 2 << endl;
  } else {
    cout << (a + b + 1) / 2 << endl;
  }
}
