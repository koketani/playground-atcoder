#include <bits/stdc++.h>
using namespace std;

/*
 * 10001
 * 1
 *
 */

bool loop(int n) {
  if ((n / 10000 == n % 10) && (((n % 10000) / 1000) == ((n % 100) / 10))) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  int num = 0;
  for (int i = a; i <= b; i++) {
    if (loop(i)) {
      num += 1;
    }
  }
  cout << num << endl;
}
