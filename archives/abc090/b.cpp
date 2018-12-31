#include <bits/stdc++.h>
using namespace std;
 
int reverse(int i) {
  int rev_i = 0;
  while (i != 0) {
    rev_i *= 10;
    rev_i += i % 10;
    i /= 10;
  }
  return rev_i;
}
 
int main() {
  int a, b;
  cin >> a >> b;
  int num = 0;
  for (int i = a; i <= b; i++) {
    if (reverse(i) == i) {
      num++;
    }
  }
  cout << num << endl;
  return 0;
}
