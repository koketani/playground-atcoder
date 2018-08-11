#include <bits/stdc++.h>
using namespace std;

int main() {
	int y;
	cin >> y;
	int x=y;
	int fx=0;
	for (int i=8; i>=0; i--) {
		fx += x/int(powl(10, i));
		x = x % int(powl(10, i));
	}
	if ((y%fx) == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
