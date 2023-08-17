#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input, check = -1;
		cin >> input;
		for (int j = 1; j < input; j++) {
			if (input % j == 0) check++;
		}
		if (check == 0) {
			cnt++;
		}
	}
	cout << cnt;
}