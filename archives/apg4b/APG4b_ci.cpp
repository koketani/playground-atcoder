#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int high = max({a, b, c});
  int small = min({a, b, c});
  cout << high - small << endl;
  return 0;
}
