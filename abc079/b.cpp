#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << endl;
	} else {
		// int prev=2;
		// int curr=1;
		// int next;
		long prev=2;
		long curr=1;
		long next;
		for (int i=1; i<n; i++) {
			next = prev + curr;
			prev = curr;
			curr = next;
		}
		cout << curr << endl;
	}
	return 0;
}
