#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> v, answer;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int input;
		cin >> input;
		int cnt = upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input);
		answer.push_back(cnt);
	}
	for (int elem : answer) {
		cout << elem << " ";
	}
}