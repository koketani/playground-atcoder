// #include <algorithm>
#include <iostream>
#include <set>
#include <string>

int round_5(int n, bool right) {
  if (right && n % 5 != 0) {
    return n / 5 * 5 + 5;
  } else {
    return n / 5 * 5;
  }
}

std::set<int>::iterator get_left(std::set<int> t, int p) {
  auto p_it = t.find(p);
  if (p_it != t.end()) {
    // if ((p_it) % 2 == 0) {
    // }
    if ( ) {
    }
  } else {
  }
}

int main() {
  int n;
  std::cin >> n;
  // s1, e1, s2, e2, ...
  std::set<int> t;
  for (int i = 0; i < n; i++) {
    std::string line;
    std::cin >> line;
    int s, e;
    s = round_5(stoi(line.substr(0, 4)), false);
    e = round_5(stoi(line.substr(5)), true);
    // s.bin
    // auto nx = s.upper_bound(s);
    // if (nx == s.begin()) {
    //   s[ss] = ee;
    //   continue;
    // }
    auto s_it = t.find(s);
    auto e_it = t.find(e);
  }
  return 0;
}
