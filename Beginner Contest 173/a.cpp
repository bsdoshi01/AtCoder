#include <bits/stdc++.h>
using namespace std;

void payment() {
	int n, change;
	cin >> n;
	change = (n % 1000) ? 1000 - (n % 1000) : 0;
	cout << change << endl;
}

int main() {
	payment();
	return 0;
}