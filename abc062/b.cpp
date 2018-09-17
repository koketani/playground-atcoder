#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h + 2);
  for (int i = 0; i < h + 2; i++) {
    string s(w + 2, '#');
    a.at(i) = s;
  }
  for (int i = 1; i < h + 1; i++) {
    for (int j = 1; j < w + 1; j++) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < h + 2; i++) {
    cout << a.at(i) << endl;
  }
  return 0;
}
