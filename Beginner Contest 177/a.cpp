#include <bits/stdc++.h>
using namespace std;

void solve() {
	int d, t, s;
	cin >> d >> t >> s;
	((float)t >= (float)d / (float)s) ? cout << "Yes" << endl : cout << "No" << endl;
}

int main() {
	solve();
	return 0;
}