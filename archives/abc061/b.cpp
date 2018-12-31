#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> roads(n+1, 0);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    roads.at(a)++;
    roads.at(b)++;
  }
  for (int i = 1; i < n+1; i++) {
    cout << roads.at(i) << endl;
  }
  return 0;
}
