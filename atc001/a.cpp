#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x;
  int y;
};

vector<Point> available(vector<vector<char>> c, Point now) {
  vector<Point> points;
  for (int i = now.x - 1; i < now.x + 2; i++) {
    for (int j = now.y - 1; j < now.y + 2; j++) {
      if (i == now.x && j == now.y) {
        continue;
      }
      if (int(c.size()) - 1 < i || i < 0) {
        continue;
      }
      if (int(c[0].size()) - 1 < j || j < 0) {
        continue;
      }
      if (c[i][j] != '#') {
        Point newp = {i, j};
        points.push_back(newp);
      }
    }
  }
  return points;
}

// bool exists(vector<Point> points, Point p) {
//   for (vector<Point>::iterator it = points.begin(); it != points.end(); ++it)
//   {
//     if ((*it).x == p.x && (*it).y == p.y) {
//       return true;
//     }
//   }
//   return false;
// }

int main() {
  // scan input
  int h, w;
  cin >> h >> w;
  Point s, g;
  vector<vector<char>> c(h, vector<char>(w));
  vector<vector<bool>> passed(h, vector<bool>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
      passed[i][j] = false;
      switch (c[i][j]) {
      case 's':
        s.x = i;
        s.y = j;
        break;
      case 'g':
        g.x = i;
        g.y = j;
        break;
      }
    }
  }
  //
  bool reacheable = false;
  stack<Point> cand;
  cand.push(s);
  while (cand.size() != 0) {
    Point s = cand.top();
    cand.pop();
    passed[s.x][s.y] = true;
    vector<Point> points = available(c, s);
    for (vector<Point>::size_type i = 0; i < points.size(); i++) {
      Point p = points[i];
      if (p.x == g.x && p.y == g.y) {
        reacheable = true;
        goto done;
      }
      if (!passed[p.x][p.y]) {
        cand.push(p);
      }
    }
  }
done:
  if (reacheable) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
