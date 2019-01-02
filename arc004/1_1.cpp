#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double get_len(pair<int,int> a, pair<int,int> b) {
  return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main() {
  int n;
  cin >> n;
  vector<int, int> a(n);
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a[i] = make_pair(x, y);
  }
  double max_len = 0.0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      double len = get_len(a[i], a[j]);
      if (len > max_len) {
        max_len = len;
      }
    }
  }
  cout << max_len << endl;
  return 0;
}
