#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);

  for (int i = 0; i < h; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a.at(i)[j] == '.') {
        int x = 0;
        for (int k = i - 1; k <= i + 1; k++) {
          for (int l = j - 1; l <= j + 1; l++) {
            if ((k < 0) or (j < 0) or (k >= h) or (l >= w)) {
              continue;
            }
            if (a.at(k)[l] == '#') {
              x++;
            }
          }
        }
        a.at(i)[j] = char('0' + x);
      }
    }
  }
  for (int i = 0; i < h; i++) {
    cout << a.at(i) << endl;
  }
  return 0;
}
