#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;
  int fx = 0;
  for (auto s : x) {
    fx += s - '0';
  }
  int xx = stoi(x);
  if ((xx % fx) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
