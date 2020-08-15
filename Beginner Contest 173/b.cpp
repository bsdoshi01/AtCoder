#include <bits/stdc++.h>
using namespace std;

void judge_status_summary() {
	int n, c[4] = {0, 0, 0, 0};
	cin >> n;
	string str;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		c[0] = (str == "AC") ? ++c[0] : c[0];
		c[1] = (str == "WA") ? ++c[1] : c[1];
		c[2] = (str == "TLE") ? ++c[2] : c[2];
		c[3] = (str == "RE") ? ++c[3] : c[3];
	}
	cout << "AC x " << c[0] << endl
		 << "WA x " << c[1] << endl
		 << "TLE x " << c[2] << endl
		 << "RE x " << c[3] << endl;
}

int main() {
	judge_status_summary();
	return 0;
}