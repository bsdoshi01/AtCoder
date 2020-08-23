#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long sum = 0;
	string arr;
	cin >> arr;
	for (int i = 0; i < arr.size(); ++i) 
		sum += (arr[i] - '0');
	(sum % 9 == 0) ? cout << "Yes" << endl : cout << "No" << endl;
}

int main() {
	solve();
	return 0;
}