#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m = 0;
	vector<int> v{ 1, 2, 3 };
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		int temp = v[x - 1];
		v[x - 1] = v[y - 1];
		v[y - 1] = temp;
	}
	for (int i = 0; i < 3; i++) {
		if (v[i] == 1) cout << i + 1;
	}
}