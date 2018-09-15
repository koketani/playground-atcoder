#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string a[50];

  for (int i = 0; i < h; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == '.') {
        int x = 0;
        for (int k = i - 1; k <= i + 1; k++) {
          for (int l = j - 1; l <= j + 1; l++) {
            if ((k < 0) or (j < 0) or (k >= h) or (l >= w)) {
              continue;
            }
            if (a[k][l] == '#') {
              x++;
            }
          }
        }
        a[i][j] = char('0' + x);
      }
    }
  }
  for (int i = 0; i < h; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
