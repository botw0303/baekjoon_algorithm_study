#include <iostream>
using namespace std;
int dp[1000001] = { 0 };
int main() {
	int n = 0;
	cin >> n;
	for (int i = 2; i <= n; ++i) {
		dp[i] = 1 + dp[i - 1];
		if (i % 3 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 3]);
		if (i % 2 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 2]);
	}
	cout << dp[n];
}