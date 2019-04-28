#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, g;
  cin >> d >> g;
  vector<int> c(d), p(d);
  for (int i = 0; i < d; i++) {
    cin >> p.at(i) >> c.at(i);
  }
  // full scan
  int minnumprob = 1000;
  for (int i = 0; i < pow(2, d); i++) {
    // max score index, but not used
    int h = 0;
    int score = 0;
    int numprob = 0;
    for (int j = 0; j < d; j++) {
      if ((i & int(pow(2, j))) == pow(2, j)) {
        score += 100 * (j + 1) * p.at(j) + c.at(j);
	numprob += p.at(j);
      } else if (h < j) {
        h = j;
      }
    }
    if (score + 100 * (h+1) * (p.at(h)-1) < g) {
      continue;
    }
    if (score < g) {
      numprob += ceil((g - score)/(100*(h+1)));
    }
    if (numprob < minnumprob) {
      minnumprob = numprob;
    }
  }
  cout << minnumprob << endl;
  return 0;
}
