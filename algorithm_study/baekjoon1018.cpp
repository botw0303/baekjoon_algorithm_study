#include <iostream>
using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;
	bool** inputBoard = new bool*[n];
	for (int i = 0; i < n; i++) {
		inputBoard[i] = new bool[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char input;
			cin >> input;
			if (input == 'B') {
				inputBoard[i][j] = true;
			}
			else {
				inputBoard[i][j] = false;
			}
		}
	}
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {

		}
	}
	cout << cnt;
}