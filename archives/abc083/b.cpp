#include <bits/stdc++.h>
using namespace std;

int sum_digits(int a) {
  int s = 0;
  while (a != 0) {
    s += a % 10;
    a /= 10;
  }
  return s;
}

int main() {
  int a, b, n;
  cin >> n;
  cin >> a;
  cin >> b;
  int y = 0;
  for (int i = 1; i < n + 1; i++) {
    int s = sum_digits(i);
    if (a <= s and s <= b) {
      y += i;
    }
  }
  cout << y << endl;
  return 0;
}
