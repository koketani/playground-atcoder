#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	string c;
	cin >> a >> c >> b;
	// + - * / ? = !
	if (c == "?" || c == "=" || c == "!") {
		cout << "error" << endl;
	} else if (c == "+") {
		cout << a + b << endl;
	} else if (c == "-"){
		cout << a - b << endl;
	} else if (c == "*"){
		cout << a * b << endl;
	} else if (c == "/"){
		if (b == 0){
			cout << "error" << endl;
		} else {
			cout << a / b << endl;
		}
	}
	return 0;
}
