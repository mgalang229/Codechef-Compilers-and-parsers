#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int ans = 0;
		int count = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '<') {
				// increment 'count' if it encounters '<'
				count++;
			} else {
				// otherwise, decrement its value
				count--;
			}
			if (count < 0) {
				// if 'count' is less than 0, then break the loop
				break;
			}
			if (count == 0) {
				// if 'count' is equal to 0, then all the brackets have 
				// balanced out, and in order to count the longest size
				// of the expression, simply add 1 to the current index
				// and store it in the 'ans' variable
				ans = i + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
