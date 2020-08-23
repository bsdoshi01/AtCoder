#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x, t, ans;
	cin >> n >> x >> t;
	ans = t * ((int)((n - 1) / x) + 1);
	cout << ans << endl;
}

int main() {
	solve();
	return 0;
}