#include<bits/stdc++.h>
using namespace std;

int memof(int n, vector<int> &dp) {
	if (n <= 1) return n;
	if (dp[n] != -1) return dp[n];
	return memof(n - 1, dp) + memof(n - 2, dp);
}
int tabuf(int n, vector<int> &dp) {
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
int fibbo(int n) {
	int prev1 = 0;
	int prev2 = 1;
	int curr;
	if (n == 0) return prev1;
	if (n == 1) return prev2;
	for (int i = 2; i <= n; i++) {
		curr = prev2 + prev1;
		prev1 = prev2;
		prev2 = curr;
	}
	return curr;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> dp(n + 1, -1);

	cout << memof(n, dp) << endl;;
	cout << tabuf(n, dp) << endl;
	cout << fibbo(n) << endl;
	return 0;
}