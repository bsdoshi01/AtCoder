#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

void solve() {
	int count = 0, i = 0;
	string s, t;
	cin >> s;
	cin >> t;
	while (s[i] != '\0') {
		count = (s[i] == t[i]) ? count : count + 1;
		++i;
	}
	cout << count << endl;
}

int main() {
	solve();
	return 0;
}