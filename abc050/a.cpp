#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  char op;
  cin >> A >> op >> B;
  int a = stoi(A);
  int b = stoi(B);
  if (op == '+') {
    cout << a + b << endl;
  } else {
    cout << a - b << endl;
  }
  return 0;
}
