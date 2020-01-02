#include <iostream>

int main() {
  int x, y;
  std::cin >> x >> y;
  int bigger = 0;
  bigger = (x > y) ? x : y;
  std::cout << bigger << std::endl;
  return 0;
}
