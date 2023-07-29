#include <iostream>
using namespace std;

int main() {
	int answer = 0, num;
	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		if (input > answer) {
			answer = input;
			num = i + 1;
		}
	}
	cout << answer << "\n" << num;
}