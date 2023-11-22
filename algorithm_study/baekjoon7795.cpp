#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> A;
	vector<int> answer;
	int testcase = 0, n, m, cnt = 0;
	cin >> testcase;
	for (int i = 0; i < testcase; ++i) {
		cin >> n >> m;
		for (int j = 0; j < n; ++j) {
			int input;
			cin >> input;
			A.push_back(input);
		}
		sort(A.begin(), A.end());
		for (int k = 0; k < m; ++k) {
			int input;
			cin >> input;
			cnt += A.end() - upper_bound(A.begin(), A.end(), input);
		}
		answer.push_back(cnt);
		cnt = 0;
		A.clear();
	}
	for (int i = 0; i < answer.size(); ++i) {
		cout << answer[i] << "\n";
	}
}