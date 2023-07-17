#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, maxProfit = 0, answer = 0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int price, dc;
		cin >> price >> dc;
		v.push_back(make_pair(price, dc));
	}
	for (int i = 0; i < n; i++) {
		int price = v[i].first;
		int profit = 0;
		for (int j = 0; j < n; j++) {
			if (v[j].first >= price) profit += v[i].first - v[i].second;
		}
		if (profit > maxProfit) {
			maxProfit = profit;
			answer = v[i].first;
		}
	}
	cout << answer;
}