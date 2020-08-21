#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	if((int) s.size() == 1) {
		cout << "Yes\n";
		return;
	}
	sort(s.begin(), s.end());
	bool ok = true;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == s[i+1]) {
			ok = false;
			break;
		}
	}
	if(ok) {
		bool checker = true;
		for(int i = 0; i < (int) s.size(); ++i) {
			if(s[i+1] - s[i] > 1) {
				checker = false;
				break;
			}
		}
		cout << (checker ? "Yes" : "No");
	}
	else {
		cout << "No";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case(); 
	}
	//test_case();
	return 0;
}
