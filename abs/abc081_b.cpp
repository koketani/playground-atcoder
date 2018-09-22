#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 30;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int y;
    int yy = 0;
    cin >> y;
    while (true) {
      if ((y&1)==1) {
	break;
      } else {
	yy++;
      }
      if (yy > x) {
	break;
      }
      y = y >> 1;
    }
    if (yy < x) {
      x = yy;
    }
  }
  cout << x << endl;
  return 0;
}
