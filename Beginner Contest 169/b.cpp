#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve() {
	int n;
	bool is_zero = 0, is_more = 0;
	cin >> n;
	ll num, product = 1, limit = 1e18;
	for(int i = 0; i < n; ++i) {
		cin >> num;
		is_more = (num > limit) ? 1 : is_more;
		product *= num;
		(num) ? limit /= num : is_zero = 1;
	}
	(is_zero) ? cout << "0" << endl : ((is_more) ? cout << "-1" << endl : cout << product << endl);
}

int main() {
	solve();
	return 0;
}