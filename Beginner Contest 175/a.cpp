#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

void solve() {
	char s[3];
	int num = 0, max = 0;
	cin >> s;
	for (int i = 0; i < 3; ++i) {
		if (s[i] == 'R') {
			num++;
			if (max < num) 
				max = num;
		} else {
			num = 0;
		}
	}
	cout << max << endl;
}

int main() {
	solve();
	return 0;
}