#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  bool done = false;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      int k = n - i - j;
      int sum = 10000*i + 5000*j + 1000*k;
      if (sum == y) {
	cout << i << " " << j << " " << k << endl;
	done = true;
	break;
      }
    }
    if (done) {
      break;
    }
  }
  if (!done){
    cout << "-1 -1 -1" <<endl;
  }
  return 0;
}
