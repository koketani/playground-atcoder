#include <bits/stdc++.h>
using namespace std;

// a>b
int gcd(int a, int b) {
  if (b==0) {
    return a;
  } else {
    return gcd(b, a%b);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  // left.at(i) => a0...ai
  vector<int> left(n, a.at(0));
  // right.at(i) => an-1,...,a_(n-1-i)
  vector<int> right(n, a.at(n-1));
  for (int i=1;i<n;i++) {
    left.at(i) = gcd(left.at(i-1), a.at(i));
    right.at(i) = gcd(right.at(i-1), a.at(n-1-i));
  }
  int max_gcd=0;
  for (int i=1;i<n-1;i++) {
    int cand = gcd(left.at(i-1), right.at(n-2-i));
    if (cand > max_gcd) {
      max_gcd = cand;
    }
  }
  if (right.at(n-2) > max_gcd) {
    max_gcd = right.at(n-2);
  }
  if (left.at(n-2) > max_gcd) {
    max_gcd = left.at(n-2);
  }
  cout << max_gcd << endl;
  return 0;
}
