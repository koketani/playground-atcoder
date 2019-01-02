#include <bits/stdc++.h>
using namespace std;

long thissum(int low_num) {
  long x = pow(10, low_num);
  for (int i = 0; i < low_num; i++) {
    x += pow(10, low_num - i - 1) * pow(2, i);
  }
  return x;
}

int main() {
  string s;
  cin >> s;
  long sum = 0;
  for (ulong i = 0; i < s.size(); i++) {
    int c = s.at(i) - '0';
    long x = c * pow(2, i) * thissum(s.size() - i - 1);
    cout << "x " << x << endl;
    sum += x;
  }
  cout << sum << endl;
  return 0;
}
