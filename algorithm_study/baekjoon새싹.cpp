#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int input, answer = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		answer += input * input;
	}
	cout << (answer % 10);
}