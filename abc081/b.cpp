#include <bits/stdc++.h>
using namespace std;

int log2(int a, int y) {
  int yy = 0;
  while ((a&1) != 1) {
    yy+=1;
    a = a>>1;
    if (yy > y) {
      return y;
    }
  }
  return yy;
}

int main() {
  int n;
  cin >> n;
  int y = 30;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    int yy = log2(a, y);
    if (yy < y) {
      y = yy;
    }
  }
  cout << y << endl;
  return 0;
}
