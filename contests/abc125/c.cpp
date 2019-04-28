#include <bits/stdc++.h>
using namespace std;

stack<int> divisors(int a) {
  stack<int> head, tail;
  for (int i = 1; i * i <= a; i++) {
    if (a % i != 0) {
      continue;
    }
    head.push(i);
    if (i * i != a) {
      tail.push(a / i);
    }
  }
  while (!tail.empty()) {
    head.push(tail.top());
    tail.pop();
  }
  return head;
}

int meet(int myidx, vector<int> a, int n, stack<int> cands) {
  int cand;
  while (!cands.empty()) {
    cand = cands.top();
    cands.pop();
    bool reach = false;
    for (int i = 0; i < n; i++) {
      if (i == myidx) {
        continue;
      }
      if (a.at(i) % cand != 0) {
        if (reach) {
          goto nextloop;
        } else {
          reach = true;
        }
      }
    }
    break;
  nextloop:
    continue;
  }
  return cand;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  auto d0 = divisors(a.at(0));
  auto d1 = divisors(a.at(1));
  auto c0 = meet(0, a, n, d0);
  auto c1 = meet(1, a, n, d1);
  cout << max(c0, c1) << endl;
  return 0;
}
