#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int m, n;
	vector<bool> bv;

	cin >> m >> n;
	
	for (int i = 0; i <= n; ++i) {
		bv.push_back(true);
	}

	for (int i = 2; i <= n; ++i) {
		if (bv[i]) {
			if(i >= m) cout << i << "\n";
			for (int j = i * 2; j <= n; j += i) {
				bv[j] = false;
			}
		}
	}
}