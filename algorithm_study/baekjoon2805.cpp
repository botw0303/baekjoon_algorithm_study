#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long n, m, vn, total;
int result;
vector<int> v;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
	}

	int low = 0;
	int high = *max_element(v.begin(), v.end());
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		total = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] - mid > 0)
				total += v[i] - mid;
		}
		if (total >= m) {
			low = mid + 1;
			if (result < mid)
				result = mid;
		}
		else {
			high = mid - 1;
		}
	}
	cout << result;
}