#include <cmath>
#include <iostream>
#include <map>
#include <string>

std::string get_dir(int deg_level, int wind_level) {
  if (wind_level == 0) {
    return "C";
  }
  std::map<int, std::string> dir = {
      {0, "N"},  {1, "NNE"},  {2, "NE"},  {3, "ENE"},  {4, "E"},   {5, "ESE"},
      {6, "SE"}, {7, "SSE"},  {8, "S"},   {9, "SSW"},  {10, "SW"}, {11, "WSW"},
      {12, "W"}, {13, "WNW"}, {14, "NW"}, {15, "NNW"},
  };
  return dir.at(deg_level);
}

int get_w(double wind_speed) {
  if (wind_speed <= 0.2) {
    return 0;
  } else if (wind_speed <= 1.5) {
    return 1;
  } else if (wind_speed <= 3.3) {
    return 2;
  } else if (wind_speed <= 5.4) {
    return 3;
  } else if (wind_speed <= 7.9) {
    return 4;
  } else if (wind_speed <= 10.7) {
    return 5;
  } else if (wind_speed <= 13.8) {
    return 6;
  } else if (wind_speed <= 17.1) {
    return 7;
  } else if (wind_speed <= 20.7) {
    return 8;
  } else if (wind_speed <= 24.4) {
    return 9;
  } else if (wind_speed <= 28.4) {
    return 10;
  } else if (wind_speed <= 32.6) {
    return 11;
  } else {
    return 12;
  }
}

int main() {
  int deg, dis;
  std::cin >> deg >> dis;
  int deg_level = ((int)std::round(deg / 225.)) % 16;
  double wind_speed = std::round((dis / 60.) * pow(10, 1)) / pow(10, 1);
  int wind_level = get_w(wind_speed);
  std::cout << get_dir(deg_level, wind_level) << " " << wind_level << std::endl;
  return 0;
}
