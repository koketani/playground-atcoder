#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  for (int i = 0; i < int(pow(2, 3)); i++) {
    vector<bool> op_plus(3, false);
    for (int j = 0; j < 3; j++) {
      op_plus[j] = bool(i & int(pow(2, j)));
    }
    int ans = n.at(0) - '0';
    for (int k = 1; k < 4; k++) {
      if (op_plus.at(k - 1)) {
        ans += n.at(k) - '0';
      } else {
        ans -= n.at(k) - '0';
      }
    }
    if (ans == 7) {
      cout << n.at(0);
      for (int l = 0; l < 3; l++) {
        if (op_plus.at(l)) {
          cout << "+";
        } else {
          cout << "-";
        }
        cout << n.at(l + 1);
      }
      cout << "=7" << endl;
      return 0;
    }
  }
  return 0;
}
