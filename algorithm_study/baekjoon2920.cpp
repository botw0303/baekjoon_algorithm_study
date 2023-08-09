#include <iostream>
using namespace std;

int main() {
	int nextNum = 100;
	string answer = "mixed";
	cin >> nextNum;
	if (nextNum == 1) {
		for (int i = 0; i < 7; i++) {
			int input;
			cin >> input;
			if (input == nextNum + 1) {
				nextNum += 1;
				if (nextNum == 8) answer = "ascending";
			}
			else break;
		}
		cout << answer;
	}
	else if (nextNum == 8) {
		for (int i = 0; i < 7; i++) {
			int input;
			cin >> input;
			if (input == nextNum - 1) {
				nextNum -= 1;
				if (nextNum == 1) answer = "descending";
			}
			else break;
		}
		cout << answer;
	}
	else cout << answer;
}