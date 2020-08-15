#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n, count = 0;
	ll x, y, d;
	cin >> n >> d;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		count = (x*x + y*y <= d*d) ? count+1 : count;
	}
	cout << count << endl;
	return 0;
}