#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, min = 1000000, max = -1000000;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cout << v[0] << " " << v[n - 1];
}