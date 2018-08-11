#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,a,b;
	cin >> x >> a >> b;
	int y1 = x + 1;
	int y2 = y1 * (a+b);
	int y3 = y2 * y2;
	int y4 = y3 - 1;
	cout << y1 << endl;
	cout << y2 << endl;
	cout << y3 << endl;
	cout << y4 << endl;
	return 0;
}
