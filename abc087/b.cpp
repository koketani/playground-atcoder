#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  int y = 0;
  for (int ia = 0; ((ia <= a) and (ia * 500 <= x)); ia++) {
    for (int ib = 0; ((ib <= b) and (ia * 500 + ib * 100 <= x)); ib++) {
      for (int ic = 0; ((ic <= c) and (ia * 500 + ib * 100 + ic * 50 <= x));
           ic++) {
        if (ia * 500 + ib * 100 + ic * 50 == x) {
          y++;
        }
      }
    }
  }
  cout << y << endl;
  return 0;
}
