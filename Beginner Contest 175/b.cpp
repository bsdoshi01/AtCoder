#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

void solve() {
	int n, count = 0;
	cin >> n;
	ll l[n];
	for (int i = 0; i < n; ++i) 
		cin >> l[i];
	sort(l, l + n);
	if (n < 3) {
		count = 0;
	} else {
		for (int i = 0; i < n - 2; ++i)	{
			for (int j = i + 1; j < n - 1; ++j) {
				if (l[i] + l[j] >= l[j+1]) {
					for (int k = j + 1; k < n; ++k) {
						if (l[i] + l[j] > l[k] && l[i] != l[j] && l[j] != l[k] && l[i] != l[k])
							count++;
					}
				}
			}
		}
	}
	cout << count << endl;
}

int main() {
	solve();
	return 0;
}