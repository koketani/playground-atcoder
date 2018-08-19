#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  if (p == 1) {
    int p, n;
    cin >> p;
    cin >> n;
    cout << p * n << endl;
  } else {
    string t;
    int p, n;
    cin >> t;
    cin >> p;
    cin >> n;
    cout << t << "!" << endl;
    cout << p * n << endl;
  }
  return 0;
}
