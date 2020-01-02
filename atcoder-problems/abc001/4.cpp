#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  // 00:00 ~ 23:55
  // 24*60/5 = 1440/5 = 288
  // 0 => 00:00
  // 1 => 00:05
  // ...
  // 287 => 23:55
  // 288 => 24:00
  std::vector<bool> a(290, false);
  for (int i = 0; i < n; i++) {
    std::string r;
    std::cin >> r;
    int s = stoi(r.substr(0, 2)) * 60 + stoi(r.substr(2, 2));
    s = s / 5;
    int e = stoi(r.substr(5, 2)) * 60 + stoi(r.substr(7, 2));
    e = e / 5 + ceil((e % 5) / 5.);
    for (int j = s; j < e; j++) {
      a[j] = true;
    }
  }
  bool within = false;
  int s = -1;
  int e = -1;
  for (int i = 0; i < 290; i++) {
    if (!within) {
      if (a[i]) {
        s = i;
        within = true;
      }
    } else {
      if (!a[i]) {
        e = i;
        std::cout << std::setw(2) << std::setfill('0') << (s * 5 / 60);
        std::cout << std::setw(2) << std::setfill('0') << (s * 5 % 60);
        std::cout << "-";
        std::cout << std::setw(2) << std::setfill('0') << (e * 5 / 60);
        std::cout << std::setw(2) << std::setfill('0') << (e * 5 % 60);
        std::cout << std::endl;
        within = false;
        s = -1;
        e = -1;
      }
    }
  }
  return 0;
}
