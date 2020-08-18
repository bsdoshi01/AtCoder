#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x[5], y[5], ans = -1;
	for (int i = 0; i < 5; ++i) {
		x[i] = i + 1;
		cin >> y[i];
		ans = (x[i] == y[i]) ? ans : i + 1;
	}
	cout << ans << endl;
}

int main() {
	solve();
	return 0;
}