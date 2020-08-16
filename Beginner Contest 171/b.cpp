#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

void solve() {
	int n, k, price = 0;
	cin >> n >> k;
	int p[n];
	for (int i = 0; i < n; ++i) 
		cin >> p[i];
	sort(p, p + n);
	for (int i = 0; i < k; ++i) 
		price += p[i];
	cout << price << endl;
}

int main() {
	solve();
	return 0;
}