#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	int n=0;
	for (auto s:a){
		n+=s-'0';
	}
	cout << n << endl;
	return 0;
}
