#include <iomanip>
#include <iostream>

int main() {
  int m;
  int vv;
  std::cin >> m;
  if (m < 100) {
    vv = 0;
  } else if (m <= 5000) {
    vv = m / 1000.0 * 10;
  } else if (m <= 30000) {
    vv = m / 1000.0 + 50;
  } else if (m <= 70000) {
    vv = (m / 1000.0 - 30) / 5 + 80;
  } else {
    vv = 89;
  }
  std::cout << std::setfill('0') << std::setw(2) << vv << std::endl;
  return 0;
}
