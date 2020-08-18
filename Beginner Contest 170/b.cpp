#include <bits/stdc++.h>
using namespace std;

void solve() {
	int num_of_animals, num_of_legs;
	bool ans = 0;
	cin >> num_of_animals >> num_of_legs;
	for (int i = 0; i < num_of_animals + 1; ++i) {
		if ((2 * i) + (4 * (num_of_animals - i)) == num_of_legs) {
			ans = 1;
			break;
		}
	}
	(ans) ? cout << "Yes" << endl : cout << "No" << endl;
}

int main() {
	solve();
	return 0;
}