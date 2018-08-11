#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool four = false;
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		if (s == "Y") {
			four = true;
			break;
		}
	}
	if (four) {
		cout << "Four" << endl;
	} else {
		cout << "Three" << endl;
	}
	return 0;
}
